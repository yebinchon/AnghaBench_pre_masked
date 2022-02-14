
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; int flags; } ;
struct pnp_mem {int flags; scalar_t__ size; scalar_t__ min; scalar_t__ align; scalar_t__ max; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pnp_dev*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct pnp_dev*,struct resource*) ;
 int FUNC_2 (int *,char*,int,...) ;
 struct resource* FUNC_3 (struct pnp_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_12, struct pnp_mem *VAR_13, int VAR_14)
{
 struct resource *VAR_15, VAR_16;

 VAR_15 = FUNC_3(VAR_12, VAR_4, VAR_14);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "  mem %d already set to %#llx-%#llx "
   "flags %#lx\n", VAR_14, (unsigned long long) VAR_15->start,
   (unsigned long long) VAR_15->end, VAR_15->flags);
  return 0;
 }

 VAR_15 = &VAR_16;
 VAR_15->flags = VAR_13->flags | VAR_1;
 VAR_15->start = 0;
 VAR_15->end = 0;

 if (!(VAR_13->flags & VAR_8))
  VAR_15->flags |= VAR_10;
 if (VAR_13->flags & VAR_5)
  VAR_15->flags |= VAR_2;
 if (VAR_13->flags & VAR_6)
  VAR_15->flags |= VAR_9;
 if (VAR_13->flags & VAR_7)
  VAR_15->flags |= VAR_11;

 if (!VAR_13->size) {
  VAR_15->flags |= VAR_3;
  FUNC_2(&VAR_12->dev, "  mem %d disabled\n", VAR_14);
  goto __add;
 }

 VAR_15->start = VAR_13->min;
 VAR_15->end = VAR_15->start + VAR_13->size - 1;

 while (!FUNC_1(VAR_12, VAR_15)) {
  VAR_15->start += VAR_13->align;
  VAR_15->end = VAR_15->start + VAR_13->size - 1;
  if (VAR_15->start > VAR_13->max || !VAR_13->align) {
   FUNC_2(&VAR_12->dev, "  couldn't assign mem %d "
    "(min %#llx max %#llx)\n", VAR_14,
    (unsigned long long) VAR_13->min,
    (unsigned long long) VAR_13->max);
   return -VAR_0;
  }
 }

__add:
 FUNC_0(VAR_12, VAR_15->start, VAR_15->end, VAR_15->flags);
 return 0;
}
