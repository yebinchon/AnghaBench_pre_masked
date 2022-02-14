
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_scb {int scbidx; } ;
struct orc_host {int index; int** allocation_map; int allocation_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct orc_host *VAR_0, struct orc_scb *VAR_1)
{
 unsigned long VAR_2;
 u8 VAR_3, VAR_4, VAR_5;

 FUNC_0(&(VAR_0->allocation_lock), VAR_2);
 VAR_5 = VAR_0->index;
 VAR_3 = VAR_1->scbidx;
 VAR_4 = VAR_3 / 32;
 VAR_3 %= 32;
 VAR_0->allocation_map[VAR_5][VAR_4] |= (1 << VAR_3);
 FUNC_1(&(VAR_0->allocation_lock), VAR_2);
}
