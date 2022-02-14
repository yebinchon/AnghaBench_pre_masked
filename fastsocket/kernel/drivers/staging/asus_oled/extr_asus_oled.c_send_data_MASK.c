
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct asus_oled_packet {int dummy; } ;
struct asus_oled_dev {size_t buf_size; scalar_t__ pack_mode; int buf; TYPE_1__* udev; int pic_mode; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct asus_oled_packet*) ;
 struct asus_oled_packet* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,struct asus_oled_packet*,int ,int ,size_t) ;
 int FUNC_4 (TYPE_1__*,struct asus_oled_packet*,int ) ;

__attribute__((used)) static void FUNC_5(struct asus_oled_dev *VAR_6)
{
 size_t VAR_7 = VAR_6->buf_size / VAR_0;
 struct asus_oled_packet *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct asus_oled_packet), VAR_3);

 if (!VAR_8) {
  FUNC_0(&VAR_6->udev->dev, "out of memory\n");
  return;
 }

 if (VAR_6->pack_mode == VAR_4) {



  if (VAR_6->pic_mode == VAR_1)
   FUNC_3(VAR_6->udev, VAR_8, VAR_6->buf,
         VAR_2, 2);


  if (VAR_6->pic_mode != VAR_1 && VAR_7 > 2)
   VAR_7 = 2;

  FUNC_3(VAR_6->udev, VAR_8, VAR_6->buf,
        VAR_6->pic_mode, VAR_7);
 } else if (VAR_6->pack_mode == VAR_5) {
  FUNC_4(VAR_6->udev, VAR_8, VAR_6->buf);
 }

 FUNC_1(VAR_8);
}
