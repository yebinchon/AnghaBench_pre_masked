
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int SHA256_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int*,int,int const,int *) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *,int,int ) ;
 int* FUNC_8 (int const) ;
 int FUNC_9 (char*,char*,int) ;

int FUNC_10(char *VAR_3, char VAR_4[65], int VAR_5, int VAR_6)
{
    FILE *VAR_7 = FUNC_4(VAR_3, "rb");
    if(!VAR_7) return(1);
    byte VAR_8[VAR_2];
    SHA256_CTX VAR_9;
    FUNC_1(&VAR_9);
    const int VAR_10 = 1024*1024;
    byte *VAR_11 = FUNC_8(VAR_10);
    int VAR_12 = 0;
    if(!VAR_11) {
        FUNC_3(VAR_7);
        return VAR_0;
    }

    int VAR_13 = 0;
    if(VAR_5 <= VAR_10){
        VAR_12 = FUNC_5(VAR_11, 1, VAR_5, VAR_7);
        VAR_13 += VAR_12;


        FUNC_2(&VAR_9, VAR_11, VAR_12);
    } else {
        int VAR_14 = VAR_5-VAR_12;

        int VAR_15;

        if(VAR_14>VAR_10){
            VAR_15 = VAR_10;
        } else {
            VAR_15 = VAR_14;
        }
        while((VAR_12 = FUNC_5(VAR_11, 1, VAR_15, VAR_7)))
        {
            VAR_13 += VAR_12;



            FUNC_2(&VAR_9, VAR_11, VAR_12);
            VAR_14 = VAR_5-VAR_13;


            if(VAR_14>VAR_10){
                VAR_15 = VAR_10;
            } else {
                VAR_15 = VAR_14;
            }
        }
    }

    FUNC_7(VAR_7, VAR_5+VAR_6, VAR_1);


    int VAR_16 = 0;
    for(VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
        FUNC_2(&VAR_9, "\0", 1);
        VAR_13 += 1;
    }

    while((VAR_12 = FUNC_5(VAR_11, 1, VAR_10, VAR_7)))
    {
        VAR_13 += VAR_12;


        FUNC_2(&VAR_9, VAR_11, VAR_12);
    }
    FUNC_0(VAR_8, &VAR_9);



    for(VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
    {
        FUNC_9(VAR_4 + (VAR_16 * 2), "%02x", VAR_8[VAR_16]);
    }
    VAR_4[64] = 0;

    FUNC_3(VAR_7);
    FUNC_6(VAR_11);

    return 0;
}
