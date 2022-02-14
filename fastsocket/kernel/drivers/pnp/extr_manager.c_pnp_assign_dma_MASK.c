
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; int end; } ;
struct pnp_dma {int flags; int map; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (struct pnp_dev*,unsigned short,int) ;
 scalar_t__ FUNC_1 (struct pnp_dev*,struct resource*) ;
 int FUNC_2 (int *,char*,int,...) ;
 struct resource* FUNC_3 (struct pnp_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_4, struct pnp_dma *VAR_5, int VAR_6)
{
 struct resource *VAR_7, VAR_8;
 int VAR_9;


 static unsigned short VAR_10[8] = {
  1, 3, 5, 6, 7, 0, 2, 4
 };

 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_4->dev, "  dma %d already set to %d flags %#lx\n",
   VAR_6, (int) VAR_7->start, VAR_7->flags);
  return 0;
 }

 VAR_7 = &VAR_8;
 VAR_7->flags = VAR_5->flags | VAR_0;
 VAR_7->start = -1;
 VAR_7->end = -1;

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  if (VAR_5->map & (1 << VAR_10[VAR_9])) {
   VAR_7->start = VAR_7->end = VAR_10[VAR_9];
   if (FUNC_1(VAR_4, VAR_7))
    goto __add;
  }
 }



 VAR_7->flags |= VAR_1;
 FUNC_2(&VAR_4->dev, "  disable dma %d\n", VAR_6);

__add:
 FUNC_0(VAR_4, VAR_7->start, VAR_7->flags);
 return 0;
}
