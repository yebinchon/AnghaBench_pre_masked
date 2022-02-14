
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; scalar_t__ image_offset; } ;
struct gspca_dev {int image_len; int frsz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;

 if (VAR_6[0] == 0xff && VAR_6[1] == 0xd8) {
  FUNC_0(VAR_1,
   "vc032x header packet found len %d", VAR_7);
  FUNC_1(VAR_5, VAR_4, ((void*)0), 0);
  VAR_6 += VAR_8->image_offset;
  VAR_7 -= VAR_8->image_offset;
  FUNC_1(VAR_5, VAR_2, VAR_6, VAR_7);
  return;
 }



 if (VAR_8->bridge == VAR_0) {
  int VAR_9, VAR_10;

  VAR_10 = VAR_5->image_len;
  VAR_9 = VAR_5->frsz;
  if (VAR_7 > VAR_9 - VAR_10)
   VAR_7 = VAR_9 - VAR_10;
 }
 FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7);
}
