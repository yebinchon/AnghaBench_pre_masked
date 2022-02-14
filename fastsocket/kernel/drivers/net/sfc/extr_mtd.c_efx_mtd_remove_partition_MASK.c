
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mtd_partition {int mtd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct efx_mtd_partition *VAR_1)
{
 int VAR_2;

 for (;;) {
  VAR_2 = FUNC_1(&VAR_1->mtd);
  if (VAR_2 != -VAR_0)
   break;
  FUNC_2(1);
 }
 FUNC_0(VAR_2);
}
