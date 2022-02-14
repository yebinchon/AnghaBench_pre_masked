
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lun {void* sense_data; scalar_t__ ro; } ;
struct fsg_dev {int* cmnd; struct lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_4, struct fsg_buffhd *VAR_5)
{
 struct lun *VAR_6 = VAR_4->curlun;
 int VAR_7 = VAR_4->cmnd[0];
 u8 *VAR_8 = (u8 *) VAR_5->buf;
 u8 *VAR_9 = VAR_8;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;

 if ((VAR_4->cmnd[1] & ~0x08) != 0) {
  VAR_6->sense_data = VAR_2;
  return -VAR_0;
 }
 VAR_10 = VAR_4->cmnd[2] >> 6;
 VAR_11 = VAR_4->cmnd[2] & 0x3f;
 if (VAR_10 == 3) {
  VAR_6->sense_data = VAR_3;
  return -VAR_0;
 }
 VAR_12 = (VAR_10 == 1);
 VAR_13 = (VAR_11 == 0x3f);





 FUNC_0(VAR_8, 0, 8);
 if (VAR_7 == VAR_1) {
  VAR_8[2] = (VAR_6->ro ? 0x80 : 0x00);
  VAR_8 += 4;
  VAR_16 = 255;
 } else {
  VAR_8[3] = (VAR_6->ro ? 0x80 : 0x00);
  VAR_8 += 8;
  VAR_16 = 65535;
 }





 if (VAR_11 == 0x08 || VAR_13) {
  VAR_14 = 1;
  VAR_8[0] = 0x08;
  VAR_8[1] = 10;
  FUNC_0(VAR_8+2, 0, 10);

  if (!VAR_12) {
   VAR_8[2] = 0x04;


   FUNC_1(0xffff, &VAR_8[4]);


   FUNC_1(0xffff, &VAR_8[8]);

   FUNC_1(0xffff, &VAR_8[10]);

  }
  VAR_8 += 12;
 }



 VAR_15 = VAR_8 - VAR_9;
 if (!VAR_14 || VAR_15 > VAR_16) {
  VAR_6->sense_data = VAR_2;
  return -VAR_0;
 }


 if (VAR_7 == VAR_1)
  VAR_9[0] = VAR_15 - 1;
 else
  FUNC_1(VAR_15 - 2, VAR_9);
 return VAR_15;
}
