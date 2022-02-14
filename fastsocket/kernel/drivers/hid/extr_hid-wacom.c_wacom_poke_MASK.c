
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wacom_data {scalar_t__ high_speed; } ;
struct hid_device {int (* hid_output_raw_report ) (struct hid_device*,char*,int,int ) ;int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char,int) ;
 struct wacom_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,char*,int,int ) ;
 int FUNC_3 (struct hid_device*,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_1, u8 VAR_2)
{
 struct wacom_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;
 char VAR_6[2];

 VAR_6[0] = 0x03 ; VAR_6[1] = 0x00;
 VAR_4 = 3;
 do {
  VAR_5 = VAR_1->hid_output_raw_report(VAR_1, VAR_6, 2,
    VAR_0);
 } while (VAR_5 < 0 && VAR_4-- > 0);

 if (VAR_5 >= 0) {
  if (VAR_2 == 0)
   VAR_6[0] = 0x05;
  else
   VAR_6[0] = 0x06;

  VAR_6[1] = 0x00;
  VAR_4 = 3;
  do {
   VAR_5 = VAR_1->hid_output_raw_report(VAR_1, VAR_6, 2,
     VAR_0);
  } while (VAR_5 < 0 && VAR_4-- > 0);

  if (VAR_5 >= 0) {
   VAR_3->high_speed = VAR_2;
   return;
  }
 }





 FUNC_0(&VAR_1->dev, "failed to poke device, command %d, err %d\n",
    VAR_6[0], VAR_5);
 return;
}
