
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct usbduxsub {TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (struct usbduxsub*) ;
 int FUNC_5 (struct usbduxsub*) ;
 int FUNC_6 (struct usbduxsub*,int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct usbduxsub *VAR_3,
     const u8 * VAR_4, int VAR_5)
{
 int VAR_6;
 uint8_t *VAR_7;

 if (!VAR_4)
  return 0;

 if (VAR_5 > VAR_1) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: usbdux firmware binary it too large for FX2.\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_7) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: mem alloc for firmware failed\n");
  return -VAR_0;
 }
 FUNC_3(VAR_7, VAR_4, VAR_5);

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: can not stop firmware\n");
  FUNC_1(VAR_7);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_3, VAR_7, 0, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: firmware upload failed\n");
  FUNC_1(VAR_7);
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->interface->dev,
   "comedi_: can not start firmware\n");
  FUNC_1(VAR_7);
  return VAR_6;
 }
 FUNC_1(VAR_7);
 return 0;
}
