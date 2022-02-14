
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ sensor; TYPE_1__* ctrls; } ;
struct gspca_dev {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5, VAR_6, VAR_7;
 const s16 *VAR_8;
 u8 VAR_9[12];
 static const s16 VAR_10[6] = {
  -24, -38, 64,
   62, -51, -9
 };
 static const s16 VAR_11[6] = {
  -20, -38, 64,
   60, -51, -9
 };

 VAR_7 = VAR_4->ctrls[VAR_0].val;
 if (VAR_4->sensor == VAR_2)
  VAR_8 = VAR_11;
 else
  VAR_8 = VAR_10;
 for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  VAR_6 = VAR_8[VAR_5] * VAR_7 / VAR_1;
  VAR_9[VAR_5 * 2] = VAR_6;
  VAR_9[VAR_5 * 2 + 1] = (VAR_6 >> 8) & 0x0f;
 }
 FUNC_0(VAR_3, 0x8a, VAR_9, sizeof VAR_9);
}
