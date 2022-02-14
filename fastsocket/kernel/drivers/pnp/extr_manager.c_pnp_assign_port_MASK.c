
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; int flags; } ;
struct pnp_port {int flags; scalar_t__ size; scalar_t__ min; scalar_t__ align; scalar_t__ max; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pnp_dev*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct pnp_dev*,struct resource*) ;
 int FUNC_2 (int *,char*,int,...) ;
 struct resource* FUNC_3 (struct pnp_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_4, struct pnp_port *VAR_5, int VAR_6)
{
 struct resource *VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_4->dev, "  io %d already set to %#llx-%#llx "
   "flags %#lx\n", VAR_6, (unsigned long long) VAR_7->start,
   (unsigned long long) VAR_7->end, VAR_7->flags);
  return 0;
 }

 VAR_7 = &VAR_8;
 VAR_7->flags = VAR_5->flags | VAR_1;
 VAR_7->start = 0;
 VAR_7->end = 0;

 if (!VAR_5->size) {
  VAR_7->flags |= VAR_2;
  FUNC_2(&VAR_4->dev, "  io %d disabled\n", VAR_6);
  goto __add;
 }

 VAR_7->start = VAR_5->min;
 VAR_7->end = VAR_7->start + VAR_5->size - 1;

 while (!FUNC_1(VAR_4, VAR_7)) {
  VAR_7->start += VAR_5->align;
  VAR_7->end = VAR_7->start + VAR_5->size - 1;
  if (VAR_7->start > VAR_5->max || !VAR_5->align) {
   FUNC_2(&VAR_4->dev, "  couldn't assign io %d "
    "(min %#llx max %#llx)\n", VAR_6,
    (unsigned long long) VAR_5->min,
    (unsigned long long) VAR_5->max);
   return -VAR_0;
  }
 }

__add:
 FUNC_0(VAR_4, VAR_7->start, VAR_7->end, VAR_7->flags);
 return 0;
}
