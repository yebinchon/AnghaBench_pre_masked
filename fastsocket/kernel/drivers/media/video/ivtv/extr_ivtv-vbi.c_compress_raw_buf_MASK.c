
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int raw_decoder_line_size; int count; int raw_decoder_sav_odd_field; int raw_decoder_sav_even_field; } ;
struct ivtv {TYPE_1__ vbi; } ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static u32 FUNC_1(struct ivtv *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_0->vbi.raw_decoder_line_size;
 u32 VAR_4 = VAR_0->vbi.count;
 u8 VAR_5 = VAR_0->vbi.raw_decoder_sav_odd_field;
 u8 VAR_6 = VAR_0->vbi.raw_decoder_sav_even_field;
 u8 *VAR_7 = VAR_1;
 u8 *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = VAR_1 + VAR_9 * VAR_3;


  if (VAR_8[0] != 0xff || VAR_8[1] || VAR_8[2] || (VAR_8[3] != VAR_5 && VAR_8[3] != VAR_6)) {
   break;
  }
  FUNC_0(VAR_7, VAR_8 + 4, VAR_3 - 4);
  VAR_7 += VAR_3 - 4;
 }
 return VAR_4 * (VAR_3 - 4);
}
