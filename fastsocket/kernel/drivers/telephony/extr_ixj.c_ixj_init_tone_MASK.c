
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freq0; int freq1; int tone_index; int gain1; int gain0; } ;
typedef TYPE_1__ IXJ_TONE ;
typedef int IXJ ;


 scalar_t__ FUNC_0 (unsigned short,int *) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_0, IXJ_TONE * VAR_1)
{
 int VAR_2, VAR_3;
 unsigned short VAR_4;
 if (VAR_1->freq0) {
  VAR_2 = VAR_1->freq0;
 } else {
  VAR_2 = 0x7FFF;
 }

 if (VAR_1->freq1) {
  VAR_3 = VAR_1->freq1;
 } else {
  VAR_3 = 0x7FFF;
 }

 if(VAR_1->tone_index > 12 && VAR_1->tone_index < 28)
 {
  if (FUNC_0(0x6800 + VAR_1->tone_index, VAR_0))
   return -1;
  if (FUNC_0(0x6000 + (VAR_1->gain1 << 4) + VAR_1->gain0, VAR_0))
   return -1;
  VAR_4 = VAR_2;
  if (FUNC_0(VAR_4, VAR_0))
   return -1;
  VAR_4 = VAR_3;
  if (FUNC_0(VAR_4, VAR_0))
   return -1;
 }
 return VAR_2;
}
