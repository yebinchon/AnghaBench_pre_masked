
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int capacity; } ;
struct TYPE_7__ {TYPE_1__ csd; } ;
typedef TYPE_2__ sdmmc_card_t ;


 int FUNC_0 (TYPE_2__*,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(sdmmc_card_t* VAR_1)
{
    FUNC_2(VAR_0, VAR_1);
    FUNC_1("  sector  | count | align | size(kB)  | wr_time(ms) | wr_speed(MB/s)  |  rd_time(ms)  | rd_speed(MB/s)\n");
    FUNC_0(VAR_1, 0, 1, 4);
    FUNC_0(VAR_1, 0, 4, 4);
    FUNC_0(VAR_1, 1, 16, 4);
    FUNC_0(VAR_1, 16, 32, 4);
    FUNC_0(VAR_1, 48, 64, 4);
    FUNC_0(VAR_1, 128, 128, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity - 64, 32, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity - 64, 64, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity - 8, 1, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 1, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 4, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 8, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 16, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 32, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 64, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 128, 4);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 1, 1);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 8, 1);
    FUNC_0(VAR_1, VAR_1->csd.capacity/2, 128, 1);
}
