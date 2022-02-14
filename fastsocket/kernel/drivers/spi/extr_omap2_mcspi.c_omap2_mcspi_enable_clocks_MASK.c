
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap2_mcspi {int fck; int ick; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct omap2_mcspi*) ;

__attribute__((used)) static int FUNC_2(struct omap2_mcspi *VAR_1)
{
 if (FUNC_0(VAR_1->ick))
  return -VAR_0;
 if (FUNC_0(VAR_1->fck))
  return -VAR_0;

 FUNC_1(VAR_1);

 return 0;
}
