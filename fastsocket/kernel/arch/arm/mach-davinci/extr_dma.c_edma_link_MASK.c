
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_slots; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_3 (unsigned int,int ,unsigned int,int,int ) ;

void FUNC_4(unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_2 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_3);
 VAR_3 = FUNC_0(VAR_3);

 if (VAR_2 >= VAR_1[VAR_4]->num_slots)
  return;
 if (VAR_3 >= VAR_1[VAR_5]->num_slots)
  return;
 FUNC_3(VAR_4, VAR_0, VAR_2, 0xffff0000,
    FUNC_2(VAR_3));
}
