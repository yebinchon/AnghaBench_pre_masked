
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 long long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,long long) ;
 scalar_t__ VAR_4 ;
 long long FUNC_1 () ;
 scalar_t__ FUNC_2 (int,char*,scalar_t__) ;

ssize_t FUNC_3(int VAR_5, char *VAR_6, ssize_t VAR_7, long long VAR_8) {
    ssize_t VAR_9, VAR_10 = 0;
    long long VAR_11 = FUNC_1();
    long long VAR_12 = VAR_8;

    if (VAR_7 == 0) return 0;
    while(1) {
        long long VAR_13 = (VAR_12 > VAR_1) ?
                          VAR_12 : VAR_1;
        long long VAR_14;



        VAR_9 = FUNC_2(VAR_5,VAR_6,VAR_7);
        if (VAR_9 == 0) return -1;
        if (VAR_9 == -1) {
            if (VAR_4 != VAR_2) return -1;
        } else {
            VAR_6 += VAR_9;
            VAR_7 -= VAR_9;
            VAR_10 += VAR_9;
        }
        if (VAR_7 == 0) return VAR_10;


        FUNC_0(VAR_5,VAR_0,VAR_13);
        VAR_14 = FUNC_1() - VAR_11;
        if (VAR_14 >= VAR_8) {
            VAR_4 = VAR_3;
            return -1;
        }
        VAR_12 = VAR_8 - VAR_14;
    }
}
