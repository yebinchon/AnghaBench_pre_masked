
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct ivtv_user_dma {int SG_length; TYPE_1__* SGarray; struct scatterlist* SGlist; } ;
struct TYPE_2__ {void* dst; void* src; void* size; } ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;

void FUNC_3 (struct ivtv_user_dma *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3) {
 int VAR_4;
 struct scatterlist *VAR_5;

 for (VAR_4 = 0, VAR_5 = VAR_0->SGlist; VAR_4 < VAR_0->SG_length; VAR_4++, VAR_5++) {
  VAR_0->SGarray[VAR_4].size = FUNC_0(FUNC_2(VAR_5));
  VAR_0->SGarray[VAR_4].src = FUNC_0(FUNC_1(VAR_5));
  VAR_0->SGarray[VAR_4].dst = FUNC_0(VAR_1);
  VAR_1 += FUNC_2(VAR_5);

  VAR_3 -= FUNC_2(VAR_5);
  if (VAR_3 == 0)
   VAR_1 = VAR_2;
 }
}
