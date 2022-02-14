
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_timing {int setup; int act8b; int rec8b; int cyc8b; int active; int recover; int cycle; int udma; } ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ide_timing *VAR_0, struct ide_timing *VAR_1,
    int VAR_2, int VAR_3)
{
 VAR_1->setup = FUNC_0(VAR_0->setup * 1000, VAR_2);
 VAR_1->act8b = FUNC_0(VAR_0->act8b * 1000, VAR_2);
 VAR_1->rec8b = FUNC_0(VAR_0->rec8b * 1000, VAR_2);
 VAR_1->cyc8b = FUNC_0(VAR_0->cyc8b * 1000, VAR_2);
 VAR_1->active = FUNC_0(VAR_0->active * 1000, VAR_2);
 VAR_1->recover = FUNC_0(VAR_0->recover * 1000, VAR_2);
 VAR_1->cycle = FUNC_0(VAR_0->cycle * 1000, VAR_2);
 VAR_1->udma = FUNC_0(VAR_0->udma * 1000, VAR_3);
}
