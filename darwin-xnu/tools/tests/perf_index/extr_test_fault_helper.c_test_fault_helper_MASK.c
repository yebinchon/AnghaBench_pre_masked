
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ testtype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 char* VAR_9 ;
 char* FUNC_2 (char*,long long,int,int,int,int ) ;
 scalar_t__ FUNC_3 (char*,long long,int) ;
 scalar_t__ FUNC_4 (char*,long long) ;

int FUNC_5(int VAR_10, int VAR_11, long long VAR_12, testtype_t VAR_13) {
    char *VAR_14;
    int VAR_15 = FUNC_1();
    int VAR_16;

    long long VAR_17 = VAR_3 / VAR_15;
    long long VAR_18 = VAR_17/VAR_11;
    long long VAR_19 = VAR_18 * VAR_10;
    long long VAR_20;

    if(VAR_10 < VAR_17 % VAR_11) {
        VAR_19 += VAR_10;
        VAR_18++;
    }
    else {
        VAR_19 += VAR_17 % VAR_11;
    }

    VAR_19 *= VAR_15;
    VAR_18 *= VAR_15;
    VAR_20 = VAR_19 + VAR_18;

    long long VAR_21 = VAR_12;

    while(1) {
        for(VAR_14 = VAR_9+VAR_19; VAR_14<VAR_9+VAR_20; VAR_14+= VAR_15) {
            *VAR_14 = 1;
            VAR_21--;
            if(VAR_21==0)
                break;
        }

        if(VAR_21==0)
            break;

        if(VAR_13 == VAR_7) {
            VAR_16 = FUNC_3(VAR_9+VAR_19, VAR_18, VAR_5) == 0;
            FUNC_0(VAR_16 == 0, "mprotect failed");
            VAR_16 = FUNC_3(VAR_9+VAR_19, VAR_18, VAR_5 | VAR_6) == 0;
            FUNC_0(VAR_16 == 0, "mprotect failed");
        }

        else if(VAR_13 == VAR_8) {
            VAR_16 = FUNC_4(VAR_9+VAR_19, VAR_18) == 0;
            FUNC_0(VAR_16 == 0, "munmap failed");
            VAR_14 = FUNC_2(VAR_9+VAR_19, VAR_18, VAR_5 | VAR_6, VAR_0 | VAR_2 | VAR_1, -1, 0);
            FUNC_0(VAR_14 != 0, "mmap failed");
        }
    }
    return VAR_4;
}
