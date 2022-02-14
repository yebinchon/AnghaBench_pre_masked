
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int frame; int** sliced_mpeg_data; int* sliced_mpeg_size; TYPE_1__* sliced_data; } ;
struct ivtv {TYPE_2__ vbi; } ;
typedef int mpeg_hdr_data ;
struct TYPE_3__ {scalar_t__ id; int line; int field; int* data; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,...) ;

__attribute__((used)) static void FUNC_3(struct ivtv *VAR_1, int VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 u32 VAR_6[2] = { 0, 0 };
 unsigned short VAR_7;
 static const u8 VAR_8[] = {
  0x00, 0x00, 0x01, 0xba, 0x44, 0x00, 0x0c, 0x66,
  0x24, 0x01, 0x01, 0xd1, 0xd3, 0xfa, 0xff, 0xff,
  0x00, 0x00, 0x01, 0xbd, 0x00, 0x1a, 0x84, 0x80,
  0x07, 0x21, 0x00, 0x5d, 0x63, 0xa7, 0xff, 0xff
 };
 const int VAR_9 = sizeof(VAR_8);
 int VAR_10 = VAR_1->vbi.frame % VAR_0;
 u8 *VAR_11 = &VAR_1->vbi.sliced_mpeg_data[VAR_10][0];

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_12, VAR_13;

  if (VAR_1->vbi.sliced_data[VAR_5].id == 0)
   continue;

  VAR_13 = VAR_1->vbi.sliced_data[VAR_5].line - 6;
  VAR_12 = VAR_1->vbi.sliced_data[VAR_5].field;
  if (VAR_12)
   VAR_13 += 18;
  if (VAR_13 < 32)
   VAR_6[0] |= (1 << VAR_13);
  else
   VAR_6[1] |= (1 << (VAR_13 - 32));
  VAR_11[VAR_9 + 12 + VAR_4 * 43] =
   FUNC_1(VAR_1->vbi.sliced_data[VAR_5].id);
  FUNC_2(VAR_11 + VAR_9 + 12 + VAR_4 * 43 + 1, VAR_1->vbi.sliced_data[VAR_5].data, 42);
  VAR_4++;
 }
 FUNC_2(VAR_11, VAR_8, sizeof(VAR_8));
 if (VAR_4 == 36) {



  FUNC_2(VAR_11 + VAR_9, "ITV0", 4);
  FUNC_2(VAR_11 + VAR_9 + 4, VAR_11 + VAR_9 + 12, VAR_4 * 43);
  VAR_7 = 4 + ((43 * VAR_4 + 3) & ~3);
 } else {
  FUNC_2(VAR_11 + VAR_9, "itv0", 4);
  FUNC_0(&VAR_6[0]);
  FUNC_0(&VAR_6[1]);
  FUNC_2(VAR_11 + VAR_9 + 4, &VAR_6[0], 8);
  VAR_7 = 12 + ((43 * VAR_4 + 3) & ~3);
 }
 VAR_11[4+16] = (VAR_7 + 10) >> 8;
 VAR_11[5+16] = (VAR_7 + 10) & 0xff;
 VAR_11[9+16] = 0x21 | ((VAR_3 >> 29) & 0x6);
 VAR_11[10+16] = (VAR_3 >> 22) & 0xff;
 VAR_11[11+16] = 1 | ((VAR_3 >> 14) & 0xff);
 VAR_11[12+16] = (VAR_3 >> 7) & 0xff;
 VAR_11[13+16] = 1 | ((VAR_3 & 0x7f) << 1);
 VAR_1->vbi.sliced_mpeg_size[VAR_10] = VAR_9 + VAR_7;
}
