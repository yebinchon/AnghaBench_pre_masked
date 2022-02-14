
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,char*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int ,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_9 (struct adapter*) ;

__attribute__((used)) static int FUNC_10(struct adapter *VAR_5)
{
 if (FUNC_9(VAR_5)) {
  unsigned int VAR_6, VAR_7;

  for (VAR_7 = 0; VAR_7 < 5; ++VAR_7) {
   FUNC_8(VAR_5, VAR_1, 0);
   FUNC_6(VAR_5, VAR_1);
   FUNC_5(1);
   VAR_6 = FUNC_6(VAR_5, VAR_1);
   if (!(VAR_6 & (VAR_3 | VAR_2))) {
    FUNC_8(VAR_5, VAR_1,
          FUNC_4(FUNC_1(VAR_6) >> 2));
    return 0;
   }
  }
  FUNC_0(VAR_5, "MAC calibration failed\n");
  return -1;
 } else {
  FUNC_8(VAR_5, VAR_0,
        FUNC_2(2) | FUNC_3(3));
  FUNC_7(VAR_5, VAR_0, VAR_4,
     VAR_4);
 }
 return 0;
}
