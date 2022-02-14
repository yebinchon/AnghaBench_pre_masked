
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct timeval {float tv_sec; float tv_usec; } ;
struct TYPE_6__ {size_t sector_size; } ;
struct TYPE_7__ {TYPE_1__ csd; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int *,size_t) ;
 int FUNC_2 (size_t,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct timeval*,int *) ;
 int * FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *,int,size_t) ;
 int FUNC_7 (char*,float,size_t,float,size_t) ;
 int FUNC_8 (TYPE_2__*,int *,size_t,size_t) ;
 int FUNC_9 (TYPE_2__*,int *,size_t,size_t) ;

__attribute__((used)) static void FUNC_10(sdmmc_card_t* VAR_1,
        size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
    size_t VAR_5 = VAR_1->csd.sector_size;
    size_t VAR_6 = VAR_5 * VAR_3;
    FUNC_7(" %8d |  %3d  |   %d   |    %4.1f  ", VAR_2, VAR_3, VAR_4, VAR_6 / 1024.0f);

    uint32_t* VAR_7 = FUNC_5(VAR_6 + 4, VAR_0);
    size_t VAR_8 = VAR_4 % 4;
    uint8_t* VAR_9 = (uint8_t*) VAR_7 + VAR_8;
    FUNC_2(VAR_2, VAR_9, VAR_6 / sizeof(VAR_7[0]));

    struct timeval VAR_10;
    FUNC_4(&VAR_10, ((void*)0));
    FUNC_0(FUNC_9(VAR_1, VAR_9, VAR_2, VAR_3));
    struct timeval VAR_11;
    FUNC_4(&VAR_11, ((void*)0));
    float VAR_12 = 1e3f * (VAR_11.tv_sec - VAR_10.tv_sec) + 1e-3f * (VAR_11.tv_usec - VAR_10.tv_usec);

    FUNC_6(VAR_7, 0xbb, VAR_6 + 4);

    struct timeval VAR_13;
    FUNC_4(&VAR_13, ((void*)0));
    FUNC_0(FUNC_8(VAR_1, VAR_9, VAR_2, VAR_3));
    struct timeval VAR_14;
    FUNC_4(&VAR_14, ((void*)0));
    float VAR_15 = 1e3f * (VAR_14.tv_sec - VAR_13.tv_sec) + 1e-3f * (VAR_14.tv_usec - VAR_13.tv_usec);

    FUNC_7(" |   %6.2f    |      %5.2f      |    %6.2f     |     %5.2f\n",
            VAR_12, VAR_6 / (VAR_12 / 1000) / (1024 * 1024),
            VAR_15, VAR_6 / (VAR_15 / 1000) / (1024 * 1024));
    FUNC_1(VAR_2, VAR_9, VAR_6 / sizeof(VAR_7[0]));
    FUNC_3(VAR_7);
}
