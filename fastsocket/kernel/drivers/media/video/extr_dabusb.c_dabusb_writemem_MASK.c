
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pdabusb_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_2__* usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int,int,int,int ,unsigned char*,int,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6 (pdabusb_t VAR_2, int VAR_3, const unsigned char *VAR_4,
       int VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7 = FUNC_2 (VAR_5, VAR_1);

 if (!VAR_7) {
  FUNC_0(&VAR_2->usbdev->dev,
   "dabusb_writemem: kmalloc(%d) failed.\n", VAR_5);
  return -VAR_0;
 }

 FUNC_3 (VAR_7, VAR_4, VAR_5);

 VAR_6=FUNC_4(VAR_2->usbdev, FUNC_5( VAR_2->usbdev, 0 ), 0xa0, 0x40, VAR_3, 0, VAR_7, VAR_5, 300);

 FUNC_1 (VAR_7);
 return VAR_6;
}
