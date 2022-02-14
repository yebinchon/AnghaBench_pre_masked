
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct pnp_dev {int dev; } ;


 int FUNC_0 (int *,char*,unsigned long) ;
 scalar_t__ FUNC_1 (struct resource*) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_0, unsigned char *VAR_1,
          struct resource *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_1(VAR_2))
  VAR_3 = 1 << VAR_2->start;
 else
  VAR_3 = 0;

 VAR_1[1] = VAR_3 & 0xff;
 VAR_1[2] = (VAR_3 >> 8) & 0xff;

 FUNC_0(&VAR_0->dev, "  encode irq mask %#lx\n", VAR_3);
}
