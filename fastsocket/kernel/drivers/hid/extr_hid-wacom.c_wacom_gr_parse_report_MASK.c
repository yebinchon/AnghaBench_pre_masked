
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_data {int tool; int butstate; } ;
struct input_dev {unsigned char* absmax; } ;
struct hid_device {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,size_t,unsigned char) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_19,
   struct wacom_data *VAR_20,
   struct input_dev *VAR_21, unsigned char *VAR_22)
{
 int VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_23 = 0;

 VAR_24 = FUNC_5(*(__le16 *) &VAR_22[2]);
 VAR_25 = FUNC_5(*(__le16 *) &VAR_22[4]);


 if (VAR_22[1] & 0x90) {
  switch ((VAR_22[1] >> 5) & 3) {
  case 0:
   VAR_23 = VAR_13;
   break;

  case 1:
   VAR_23 = VAR_14;
   break;

  case 2:
  case 3:
   VAR_23 = VAR_12;
   break;
  }


  if (!(VAR_22[1] & 0x10))
   VAR_23 = 0;
 }


 if (VAR_20->tool != VAR_23) {
  if (VAR_20->tool) {

   if (VAR_20->tool == VAR_12) {
    FUNC_2(VAR_21, VAR_6, 0);
    FUNC_2(VAR_21, VAR_8, 0);
    FUNC_2(VAR_21, VAR_7, 0);
    FUNC_1(VAR_21, VAR_0,
      VAR_21->absmax[VAR_0]);
   } else {
    FUNC_2(VAR_21, VAR_15, 0);
    FUNC_2(VAR_21, VAR_9, 0);
    FUNC_2(VAR_21, VAR_10, 0);
    FUNC_1(VAR_21, VAR_1, 0);
   }
   FUNC_2(VAR_21, VAR_20->tool, 0);
   FUNC_4(VAR_21);
  }
  VAR_20->tool = VAR_23;
  if (VAR_23)
   FUNC_2(VAR_21, VAR_23, 1);
 }

 if (VAR_23) {
  FUNC_1(VAR_21, VAR_2, VAR_24);
  FUNC_1(VAR_21, VAR_3, VAR_25);

  switch ((VAR_22[1] >> 5) & 3) {
  case 2:
   FUNC_2(VAR_21, VAR_7, VAR_22[1] & 0x04);
   VAR_26 = (VAR_22[6] & 0x01) ? -1 :
    (VAR_22[6] & 0x02) ? 1 : 0;
   FUNC_3(VAR_21, VAR_18, VAR_26);


  case 3:
   FUNC_2(VAR_21, VAR_6, VAR_22[1] & 0x01);
   FUNC_2(VAR_21, VAR_8, VAR_22[1] & 0x02);

   VAR_26 = 44 - (VAR_22[6] >> 2);
   if (VAR_26 < 0)
    VAR_26 = 0;
   else if (VAR_26 > 31)
    VAR_26 = 31;
   FUNC_1(VAR_21, VAR_0, VAR_26);
   break;

  default:
   FUNC_1(VAR_21, VAR_1,
     VAR_22[6] | (((__u16) (VAR_22[1] & 0x08)) << 5));
   FUNC_2(VAR_21, VAR_15, VAR_22[1] & 0x01);
   FUNC_2(VAR_21, VAR_9, VAR_22[1] & 0x02);
   FUNC_2(VAR_21, VAR_10, (VAR_23 == VAR_13) && VAR_22[1] & 0x04);
   break;
  }

  FUNC_4(VAR_21);
 }



 VAR_26 = VAR_22[7] & 0x03;
 if (VAR_26 != VAR_20->butstate) {
  VAR_20->butstate = VAR_26;
  FUNC_2(VAR_21, VAR_4, VAR_26 & 0x02);
  FUNC_2(VAR_21, VAR_5, VAR_26 & 0x01);
  FUNC_2(VAR_21, VAR_11, 0xf0);
  FUNC_0(VAR_21, VAR_16, VAR_17, 0xf0);
  FUNC_4(VAR_21);
 }

 return 1;
}
