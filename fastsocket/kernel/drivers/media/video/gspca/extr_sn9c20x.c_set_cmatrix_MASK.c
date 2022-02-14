
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {size_t hue; int contrast; int brightness; int saturation; } ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 s32 VAR_8, VAR_9 = 180 + VAR_7->hue;
 u8 VAR_10[21];

 FUNC_0(VAR_10, 0, sizeof VAR_10);
 VAR_10[2] = (VAR_7->contrast * 0x25 / 0x100) + 0x26;
 VAR_10[0] = 0x13 + (VAR_10[2] - 0x26) * 0x13 / 0x25;
 VAR_10[4] = 0x07 + (VAR_10[2] - 0x26) * 0x07 / 0x25;
 VAR_10[18] = VAR_7->brightness - 0x80;

 VAR_8 = (VAR_4[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[6] = VAR_8;
 VAR_10[7] = (VAR_8 >> 8) & 0x0f;

 VAR_8 = (VAR_5[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[8] = VAR_8;
 VAR_10[9] = (VAR_8 >> 8) & 0x0f;

 VAR_8 = (VAR_2[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[10] = VAR_8;
 VAR_10[11] = (VAR_8 >> 8) & 0x0f;

 VAR_8 = (VAR_3[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[12] = VAR_8;
 VAR_10[13] = (VAR_8 >> 8) & 0x0f;

 VAR_8 = (VAR_0[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[14] = VAR_8;
 VAR_10[15] = (VAR_8 >> 8) & 0x0f;

 VAR_8 = (VAR_1[VAR_9] * VAR_7->saturation) >> 8;
 VAR_10[16] = VAR_8;
 VAR_10[17] = (VAR_8 >> 8) & 0x0f;

 return FUNC_1(VAR_6, 0x10e1, VAR_10, 21);
}
