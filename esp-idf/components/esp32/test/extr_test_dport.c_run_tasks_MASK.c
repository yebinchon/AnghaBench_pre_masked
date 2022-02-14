
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef int uint32_t ;
typedef int TaskHandle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void (*) (void*),char const*,int,int *,scalar_t__,int *) ;
 int FUNC_7 (void (*) (void*),char const*,int,int *,scalar_t__,int *,int) ;

void FUNC_8(const char *VAR_7, void (* VAR_8)(void *), const char *VAR_9, void (* VAR_10)(void *), uint32_t VAR_11)
{
    VAR_1 = 1;
    int VAR_12;
    TaskHandle_t VAR_13[2];
    xSemaphoreHandle VAR_14[2];

    for (VAR_12=0; VAR_12<2; VAR_12++) {
        if((VAR_8 != ((void*)0) && VAR_12 == 0) || (VAR_10 != ((void*)0) && VAR_12 == 1)){
            VAR_14[VAR_12] = FUNC_4();
        }
    }

    VAR_4 = 0;


    FUNC_1("assign task accessing DPORT to core 0 and task accessing APB to core 1\n");
    if(VAR_8 != ((void*)0)) FUNC_7(VAR_8, VAR_7, 2048, &VAR_14[0], VAR_0 - 1, &VAR_13[0], 0);
    if(VAR_10 != ((void*)0)) FUNC_7(VAR_10, VAR_9, 2048, &VAR_14[1], VAR_0 - 1, &VAR_13[1], 1);






    FUNC_1("start wait for %d seconds [Test %s and %s]\n", VAR_11/1000, VAR_7, VAR_9);
    FUNC_3(VAR_11 / VAR_6);


    VAR_4 = 1;

    for (VAR_12=0; VAR_12<2; VAR_12++) {
        if ((VAR_8 != ((void*)0) && VAR_12 == 0) || (VAR_10 != ((void*)0) && VAR_12 == 1)) {
            FUNC_5(VAR_14[VAR_12], VAR_5);
            FUNC_2(VAR_14[VAR_12]);
        }
    }
    FUNC_0(VAR_3 == 1 && VAR_2 == 1 && VAR_1 == 1);
}
