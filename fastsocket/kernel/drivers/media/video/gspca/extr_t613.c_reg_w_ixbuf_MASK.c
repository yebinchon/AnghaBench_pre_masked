
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dev; int * usb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_5,
   u8 VAR_6,
   const u8 *VAR_7, u16 VAR_8)
{
 int VAR_9;
 u8 *VAR_10, *VAR_11;

 if (VAR_8 * 2 <= VAR_1) {
  VAR_10 = VAR_11 = VAR_5->usb_buf;
 } else {
  VAR_10 = VAR_11 = FUNC_2(VAR_8 * 2, VAR_0);
  if (!VAR_11) {
   FUNC_0("Out of memory");
   return;
  }
 }
 VAR_9 = VAR_8;
 while (--VAR_9 >= 0) {
  *VAR_10++ = VAR_6++;
  *VAR_10++ = *VAR_7++;
 }
 FUNC_3(VAR_5->dev,
   FUNC_4(VAR_5->dev, 0),
   0,
   VAR_2 | VAR_4 | VAR_3,
   0x01, 0,
   VAR_11, VAR_8 * 2, 500);
 if (VAR_8 * 2 > VAR_1)
  FUNC_1(VAR_11);
}
