
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int flags; int end; } ;
struct TYPE_2__ {int bits; } ;
struct pnp_irq {int flags; TYPE_1__ map; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct pnp_dev*,int,int) ;
 scalar_t__ FUNC_3 (struct pnp_dev*,struct resource*) ;
 int FUNC_4 (int *,char*,int,...) ;
 struct resource* FUNC_5 (struct pnp_dev*,int ,int) ;
 scalar_t__ FUNC_6 (unsigned short,int ) ;

__attribute__((used)) static int FUNC_7(struct pnp_dev *VAR_6, struct pnp_irq *VAR_7, int VAR_8)
{
 struct resource *VAR_9, VAR_10;
 int VAR_11;


 static unsigned short VAR_12[16] = {
  5, 10, 11, 12, 9, 14, 15, 7, 3, 4, 13, 0, 1, 6, 8, 2
 };

 VAR_9 = FUNC_5(VAR_6, VAR_3, VAR_8);
 if (VAR_9) {
  FUNC_4(&VAR_6->dev, "  irq %d already set to %d flags %#lx\n",
   VAR_8, (int) VAR_9->start, VAR_9->flags);
  return 0;
 }

 VAR_9 = &VAR_10;
 VAR_9->flags = VAR_7->flags | VAR_1;
 VAR_9->start = -1;
 VAR_9->end = -1;

 if (FUNC_0(VAR_7->map.bits, VAR_5)) {
  VAR_9->flags |= VAR_2;
  FUNC_4(&VAR_6->dev, "  irq %d disabled\n", VAR_8);
  goto __add;
 }


 VAR_9->start = FUNC_1(VAR_7->map.bits, VAR_5, 16);
 if (VAR_9->start < VAR_5) {
  VAR_9->end = VAR_9->start;
  goto __add;
 }
 for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
  if (FUNC_6(VAR_12[VAR_11], VAR_7->map.bits)) {
   VAR_9->start = VAR_9->end = VAR_12[VAR_11];
   if (FUNC_3(VAR_6, VAR_9))
    goto __add;
  }
 }

 if (VAR_7->flags & VAR_4) {
  VAR_9->start = -1;
  VAR_9->end = -1;
  VAR_9->flags |= VAR_2;
  FUNC_4(&VAR_6->dev, "  irq %d disabled (optional)\n", VAR_8);
  goto __add;
 }

 FUNC_4(&VAR_6->dev, "  couldn't assign irq %d\n", VAR_8);
 return -VAR_0;

__add:
 FUNC_2(VAR_6, VAR_9->start, VAR_9->flags);
 return 0;
}
