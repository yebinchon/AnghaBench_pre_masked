
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct asus_oled_packet {int* bitmap; } ;
struct asus_oled_header {int dummy; } ;
struct asus_oled_dev {scalar_t__ enabled; TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct asus_oled_packet*) ;
 struct asus_oled_packet* FUNC_3 (int,int ) ;
 int FUNC_4 (struct asus_oled_packet*,int,int,int,int,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,struct asus_oled_packet*,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7(struct asus_oled_dev *VAR_1, uint8_t VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 struct asus_oled_packet *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct asus_oled_packet), VAR_0);

 if (!VAR_6) {
  FUNC_1(&VAR_1->udev->dev, "out of memory\n");
  return;
 }

 FUNC_4(VAR_6, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00);

 if (VAR_2)
  VAR_6->bitmap[0] = 0xaf;
 else
  VAR_6->bitmap[0] = 0xae;

 for (VAR_3 = 0; VAR_3 < 1; VAR_3++) {
  VAR_4 = FUNC_5(VAR_1->udev,
   FUNC_6(VAR_1->udev, 2),
   VAR_6,
   sizeof(struct asus_oled_header) + 1,
   &VAR_5,
   -1);

  if (VAR_4)
   FUNC_0(&VAR_1->udev->dev, "retval = %d\n", VAR_4);
 }

 VAR_1->enabled = VAR_2;

 FUNC_2(VAR_6);
}
