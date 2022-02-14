
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_channels; int edma_noevent; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,int,unsigned int) ;
 int FUNC_4 (unsigned int,int ,int,unsigned int) ;
 int FUNC_5 (char*,int,int ) ;
 scalar_t__ FUNC_6 (unsigned int,int ) ;

int FUNC_7(unsigned VAR_8)
{
 unsigned VAR_9;

 VAR_9 = FUNC_1(VAR_8);
 VAR_8 = FUNC_0(VAR_8);

 if (VAR_8 < VAR_7[VAR_9]->num_channels) {
  int VAR_10 = VAR_8 >> 5;
  unsigned int VAR_11 = (1 << (VAR_8 & 0x1f));


  if (FUNC_6(VAR_8, VAR_7[VAR_9]->edma_noevent)) {
   FUNC_5("EDMA: ESR%d %08x\n", VAR_10,
    FUNC_2(VAR_9, VAR_5, VAR_10));
   FUNC_3(VAR_9, VAR_5, VAR_10, VAR_11);
   return 0;
  }


  FUNC_5("EDMA: ER%d %08x\n", VAR_10,
   FUNC_2(VAR_9, VAR_4, VAR_10));

  FUNC_4(VAR_9, VAR_0, VAR_10, VAR_11);

  FUNC_3(VAR_9, VAR_6, VAR_10, VAR_11);
  FUNC_3(VAR_9, VAR_3, VAR_10, VAR_11);
  FUNC_5("EDMA: EER%d %08x\n", VAR_10,
   FUNC_2(VAR_9, VAR_2, VAR_10));
  return 0;
 }

 return -VAR_1;
}
