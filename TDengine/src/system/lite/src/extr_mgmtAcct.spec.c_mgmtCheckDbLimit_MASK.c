
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

int FUNC_2(SAcctObj *VAR_3) {
  int VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 >= VAR_2) {
    FUNC_0("numOfDbs:%d, exceed tsMaxDbs:%d", VAR_4, VAR_2);
    return VAR_0;
  }
  return 0;
}
