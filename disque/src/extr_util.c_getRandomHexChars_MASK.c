
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {unsigned char tv_usec; unsigned char tv_sec; } ;
typedef int seed ;
typedef unsigned char pid_t ;
typedef int pid ;
typedef int counter ;
typedef int SHA1_CTX ;
typedef int FILE ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 unsigned char FUNC_6 () ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (char*,unsigned char*,int) ;
 char FUNC_9 () ;

void FUNC_10(char *VAR_0, unsigned int VAR_1) {
    char *VAR_2 = "0123456789abcdef";
    unsigned int VAR_3;


    static int VAR_4 = 0;
    static unsigned char VAR_5[20];
    static uint64_t VAR_6 = 0;

    if (!VAR_4) {




        FILE *VAR_7 = FUNC_4("/dev/urandom","r");
        if (VAR_7 && FUNC_5(VAR_5,sizeof(VAR_5),1,VAR_7) == 1)
            VAR_4 = 1;
        if (VAR_7) FUNC_3(VAR_7);
    }

    if (VAR_4) {
        while(VAR_1) {
            unsigned char VAR_8[20];
            SHA1_CTX VAR_9;
            unsigned int VAR_10 = VAR_1 > 20 ? 20 : VAR_1;

            FUNC_1(&VAR_9);
            FUNC_2(&VAR_9, VAR_5, sizeof(VAR_5));
            FUNC_2(&VAR_9, (unsigned char*)&VAR_6,sizeof(VAR_6));
            FUNC_0(VAR_8, &VAR_9);
            VAR_6++;

            FUNC_8(VAR_0,VAR_8,VAR_10);

            for (VAR_3 = 0; VAR_3 < VAR_10; VAR_3++) VAR_0[VAR_3] = VAR_2[VAR_0[VAR_3] & 0x0F];
            VAR_1 -= VAR_10;
            VAR_0 += VAR_10;
        }
    } else {



        char *VAR_11 = VAR_0;
        unsigned int VAR_12 = VAR_1;
        struct timeval VAR_13;
        pid_t VAR_14 = FUNC_6();


        FUNC_7(&VAR_13,((void*)0));
        if (VAR_12 >= sizeof(VAR_13.tv_usec)) {
            FUNC_8(VAR_11,&VAR_13.tv_usec,sizeof(VAR_13.tv_usec));
            VAR_12 -= sizeof(VAR_13.tv_usec);
            VAR_11 += sizeof(VAR_13.tv_usec);
        }
        if (VAR_12 >= sizeof(VAR_13.tv_sec)) {
            FUNC_8(VAR_11,&VAR_13.tv_sec,sizeof(VAR_13.tv_sec));
            VAR_12 -= sizeof(VAR_13.tv_sec);
            VAR_11 += sizeof(VAR_13.tv_sec);
        }
        if (VAR_12 >= sizeof(VAR_14)) {
            FUNC_8(VAR_11,&VAR_14,sizeof(VAR_14));
            VAR_12 -= sizeof(VAR_14);
            VAR_11 += sizeof(VAR_14);
        }


        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
            VAR_0[VAR_3] ^= FUNC_9();
            VAR_0[VAR_3] = VAR_2[VAR_0[VAR_3] & 0x0F];
        }
    }
}
