
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_channels; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_2 (unsigned int,int ,unsigned int,unsigned int) ;

void FUNC_3(unsigned VAR_2)
{
 unsigned VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_2 = FUNC_0(VAR_2);

 if (VAR_2 < VAR_1[VAR_3]->num_channels) {
  unsigned int VAR_4 = (1 << (VAR_2 & 0x1f));

  FUNC_2(VAR_3, VAR_0, VAR_2 >> 5, VAR_4);
 }
}
