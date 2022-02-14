
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_decode_vbi_line {int* p; int line; int is_second_field; scalar_t__ type; } ;
struct TYPE_4__ {int sliced_decoder_line_size; TYPE_1__* sliced_data; } ;
struct ivtv {TYPE_2__ vbi; int sd_video; } ;
struct TYPE_3__ {int line; int data; int field; scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,struct v4l2_decode_vbi_line,int ,struct v4l2_decode_vbi_line*) ;

__attribute__((used)) static u32 FUNC_2(struct ivtv *VAR_1, u32 VAR_2, u8 *VAR_3, u32 VAR_4, u8 VAR_5)
{
 u32 VAR_6 = VAR_1->vbi.sliced_decoder_line_size;
 struct v4l2_decode_vbi_line VAR_7;
 int VAR_8;
 unsigned VAR_9 = 0;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_3++) {
  if (VAR_3[0] == 0xff && !VAR_3[1] && !VAR_3[2] && VAR_3[3] == VAR_5)
   break;
 }

 VAR_4 -= VAR_8;
 if (VAR_4 < VAR_6) {
  return VAR_2;
 }
 for (VAR_8 = 0; VAR_8 < VAR_4 / VAR_6; VAR_8++) {
  u8 *VAR_10 = VAR_3 + VAR_8 * VAR_6;


  if (VAR_10[0] != 0xff || VAR_10[1] || VAR_10[2] || VAR_10[3] != VAR_5) {
   continue;
  }
  VAR_7.p = VAR_10 + 4;
  FUNC_1(VAR_1->sd_video, VAR_7, VAR_0, &VAR_7);
  if (VAR_7.type && !(VAR_9 & (1 << VAR_7.line))) {
   VAR_9 |= 1 << VAR_7.line;
   VAR_1->vbi.sliced_data[VAR_2].id = VAR_7.type;
   VAR_1->vbi.sliced_data[VAR_2].field = VAR_7.is_second_field;
   VAR_1->vbi.sliced_data[VAR_2].line = VAR_7.line;
   FUNC_0(VAR_1->vbi.sliced_data[VAR_2].data, VAR_7.p, 42);
   VAR_2++;
  }
 }
 return VAR_2;
}
