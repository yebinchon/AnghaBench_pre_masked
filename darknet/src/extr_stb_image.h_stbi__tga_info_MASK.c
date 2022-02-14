
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int,int *) ;

__attribute__((used)) static int FUNC_5(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;
    FUNC_1(VAR_0);
    VAR_11 = FUNC_1(VAR_0);
    if( VAR_11 > 1 ) {
        FUNC_2(VAR_0);
        return 0;
    }
    VAR_7 = FUNC_1(VAR_0);
    if ( VAR_11 == 1 ) {
        if (VAR_7 != 1 && VAR_7 != 9) {
            FUNC_2(VAR_0);
            return 0;
        }
        FUNC_3(VAR_0,4);
        VAR_10 = FUNC_1(VAR_0);
        if ( (VAR_10 != 8) && (VAR_10 != 15) && (VAR_10 != 16) && (VAR_10 != 24) && (VAR_10 != 32) ) {
            FUNC_2(VAR_0);
            return 0;
        }
        FUNC_3(VAR_0,4);
        VAR_9 = VAR_10;
    } else {
        if ( (VAR_7 != 2) && (VAR_7 != 3) && (VAR_7 != 10) && (VAR_7 != 11) ) {
            FUNC_2(VAR_0);
            return 0;
        }
        FUNC_3(VAR_0,9);
        VAR_9 = 0;
    }
    VAR_4 = FUNC_0(VAR_0);
    if( VAR_4 < 1 ) {
        FUNC_2(VAR_0);
        return 0;
    }
    VAR_5 = FUNC_0(VAR_0);
    if( VAR_5 < 1 ) {
        FUNC_2(VAR_0);
        return 0;
    }
    VAR_8 = FUNC_1(VAR_0);
    FUNC_1(VAR_0);
    if (VAR_9 != 0) {
        if((VAR_8 != 8) && (VAR_8 != 16)) {


            FUNC_2(VAR_0);
            return 0;
        }
        VAR_6 = FUNC_4(VAR_9, 0, ((void*)0));
    } else {
        VAR_6 = FUNC_4(VAR_8, (VAR_7 == 3) || (VAR_7 == 11), ((void*)0));
    }
    if(!VAR_6) {
      FUNC_2(VAR_0);
      return 0;
    }
    if (VAR_1) *VAR_1 = VAR_4;
    if (VAR_2) *VAR_2 = VAR_5;
    if (VAR_3) *VAR_3 = VAR_6;
    return 1;
}
