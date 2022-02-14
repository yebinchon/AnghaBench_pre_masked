
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct temac_local*,int ) ;

int FUNC_3(struct temac_local *VAR_4)
{
 long VAR_5 = VAR_3 + 2;

 while (!(FUNC_2(VAR_4, VAR_2) & VAR_1)) {
  if (VAR_5 - VAR_3 <= 0) {
   FUNC_0(1);
   return -VAR_0;
  }
  FUNC_1(1);
 }
 return 0;
}
