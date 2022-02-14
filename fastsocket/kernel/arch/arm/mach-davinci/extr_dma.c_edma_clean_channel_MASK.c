
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_channels; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,int,unsigned int) ;
 int FUNC_4 (unsigned int,int ,int) ;
 int FUNC_5 (unsigned int,int ,int,unsigned int) ;
 int FUNC_6 (char*,int,int ) ;

void FUNC_7(unsigned VAR_6)
{
 unsigned VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 VAR_6 = FUNC_0(VAR_6);

 if (VAR_6 < VAR_5[VAR_7]->num_channels) {
  int VAR_8 = (VAR_6 >> 5);
  unsigned int VAR_9 = 1 << (VAR_6 & 0x1f);

  FUNC_6("EDMA: EMR%d %08x\n", VAR_8,
    FUNC_2(VAR_7, VAR_2, VAR_8));
  FUNC_3(VAR_7, VAR_3, VAR_8, VAR_9);

  FUNC_5(VAR_7, VAR_1, VAR_8, VAR_9);

  FUNC_3(VAR_7, VAR_4, VAR_8, VAR_9);
  FUNC_4(VAR_7, VAR_0, (1 << 16) | 0x3);
 }
}
