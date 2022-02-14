
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amradio_device {int* buffer; int lock; int usbdev; scalar_t__ removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,void*,int,int*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct amradio_device *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned short VAR_8 = 0x10 + (VAR_5 >> 3) / 25;


 if (VAR_4->removed)
  return -VAR_2;

 FUNC_0(&VAR_4->lock);

 VAR_4->buffer[0] = 0x00;
 VAR_4->buffer[1] = 0x55;
 VAR_4->buffer[2] = 0xaa;
 VAR_4->buffer[3] = 0x03;
 VAR_4->buffer[4] = VAR_0;
 VAR_4->buffer[5] = 0x00;
 VAR_4->buffer[6] = 0x00;
 VAR_4->buffer[7] = 0x08;

 VAR_6 = FUNC_2(VAR_4->usbdev, FUNC_3(VAR_4->usbdev, 2),
  (void *) (VAR_4->buffer), VAR_1, &VAR_7, VAR_3);

 if (VAR_6 < 0 || VAR_7 != VAR_1) {
  FUNC_1(&VAR_4->lock);
  return VAR_6;
 }


 VAR_4->buffer[0] = (VAR_8 >> 8) & 0xff;
 VAR_4->buffer[1] = VAR_8 & 0xff;
 VAR_4->buffer[2] = 0x01;
 VAR_4->buffer[3] = 0x00;
 VAR_4->buffer[4] = 0x00;

 VAR_4->buffer[7] = 0x00;

 VAR_6 = FUNC_2(VAR_4->usbdev, FUNC_3(VAR_4->usbdev, 2),
  (void *) (VAR_4->buffer), VAR_1, &VAR_7, VAR_3);

 if (VAR_6 < 0 || VAR_7 != VAR_1) {
  FUNC_1(&VAR_4->lock);
  return VAR_6;
 }

 FUNC_1(&VAR_4->lock);

 return VAR_6;
}
