
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poch_group_info {scalar_t__ pg; } ;
struct channel_info {unsigned long group_count; int group_size; struct poch_group_info* groups; } ;


 int FUNC_0 (scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct channel_info *VAR_0)
{
 unsigned long VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->group_count; VAR_1++) {
  struct poch_group_info *VAR_2;
  unsigned int VAR_3;

  VAR_2 = &VAR_0->groups[VAR_1];
  VAR_3 = FUNC_1(VAR_0->group_size);
  if (VAR_2->pg)
   FUNC_0(VAR_2->pg, VAR_3);
 }
}
