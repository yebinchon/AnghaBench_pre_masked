
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s16 ;
struct TYPE_2__ {unsigned int num_slots; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (unsigned int,int ,unsigned int,int,int ) ;

void FUNC_3(unsigned VAR_3, s16 VAR_4, s16 VAR_5)
{
 unsigned VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 VAR_3 = FUNC_0(VAR_3);

 if (VAR_3 < VAR_2[VAR_6]->num_slots) {
  FUNC_2(VAR_6, VAR_0, VAR_3,
    0xffff0000, VAR_4);
  FUNC_2(VAR_6, VAR_1, VAR_3,
    0xffff0000, VAR_5);
 }
}
