
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_timing {void* udma; void* cycle; void* dmack_hold; void* recover; void* active; void* cyc8b; void* rec8b; void* act8b; void* setup; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 void* FUNC_0 (void*,void*) ;

void FUNC_1(const struct ata_timing *VAR_9, const struct ata_timing *VAR_10,
        struct ata_timing *VAR_11, unsigned int VAR_12)
{
 if (VAR_12 & VAR_7 ) VAR_11->setup = FUNC_0(VAR_9->setup, VAR_10->setup);
 if (VAR_12 & VAR_0 ) VAR_11->act8b = FUNC_0(VAR_9->act8b, VAR_10->act8b);
 if (VAR_12 & VAR_5 ) VAR_11->rec8b = FUNC_0(VAR_9->rec8b, VAR_10->rec8b);
 if (VAR_12 & VAR_2 ) VAR_11->cyc8b = FUNC_0(VAR_9->cyc8b, VAR_10->cyc8b);
 if (VAR_12 & VAR_1 ) VAR_11->active = FUNC_0(VAR_9->active, VAR_10->active);
 if (VAR_12 & VAR_6) VAR_11->recover = FUNC_0(VAR_9->recover, VAR_10->recover);
 if (VAR_12 & VAR_4) VAR_11->dmack_hold = FUNC_0(VAR_9->dmack_hold, VAR_10->dmack_hold);
 if (VAR_12 & VAR_3 ) VAR_11->cycle = FUNC_0(VAR_9->cycle, VAR_10->cycle);
 if (VAR_12 & VAR_8 ) VAR_11->udma = FUNC_0(VAR_9->udma, VAR_10->udma);
}
