
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVInteger ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(void){
    int64_t VAR_0,VAR_1;

    for(VAR_0=7; VAR_0<256*256*256; VAR_0+=13215){
        for(VAR_1=3; VAR_1<256*256*256; VAR_1+=27118){
            AVInteger VAR_2= FUNC_4(VAR_0);
            AVInteger VAR_3= FUNC_4(VAR_1);

            FUNC_1(FUNC_3(VAR_2) == VAR_0);
            FUNC_1(FUNC_3(VAR_3) == VAR_1);
            FUNC_1(FUNC_3(FUNC_0(VAR_2,VAR_3)) == VAR_0+VAR_1);
            FUNC_1(FUNC_3(FUNC_9(VAR_2,VAR_3)) == VAR_0-VAR_1);
            FUNC_1(FUNC_3(FUNC_7(VAR_2,VAR_3)) == VAR_0*VAR_1);
            FUNC_1(FUNC_3(FUNC_8(VAR_2, 9)) == VAR_0>>9);
            FUNC_1(FUNC_3(FUNC_8(VAR_2,-9)) == VAR_0<<9);
            FUNC_1(FUNC_3(FUNC_8(VAR_2, 17)) == VAR_0>>17);
            FUNC_1(FUNC_3(FUNC_8(VAR_2,-17)) == VAR_0<<17);
            FUNC_1(FUNC_6(VAR_2) == FUNC_5(VAR_0));
            FUNC_1(FUNC_3(FUNC_2(VAR_2,VAR_3)) == VAR_0/VAR_1);
        }
    }
    return 0;
}
