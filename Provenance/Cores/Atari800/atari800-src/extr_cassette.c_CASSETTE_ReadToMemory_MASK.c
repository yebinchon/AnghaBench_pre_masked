
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4(UWORD VAR_6, int VAR_7)
{
 FUNC_0(1);
 if (!VAR_3)
  return 0;


 VAR_2 -= VAR_5 / 1789;
 if (!FUNC_2(VAR_1, VAR_2)) {

  VAR_2 = 0;
  VAR_4 = 1;
  FUNC_3();
  return 0;
 }
 VAR_2 = 0;


 switch (FUNC_1(VAR_1, VAR_6, VAR_7)) {
 case 128:
  return 128;
 case -1:
  VAR_4 = 1;
  FUNC_3();

 default:
  return VAR_0;
 }
}
