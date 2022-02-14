
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct uea_softc {TYPE_2__* usb_dev; } ;
typedef int mac_str ;
struct TYPE_3__ {int iSerialNumber; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct uea_softc *VAR_1, u_char * VAR_2)
{
 unsigned char VAR_3[2 * VAR_0 + 1];
 int VAR_4;
 if (FUNC_1
     (VAR_1->usb_dev, VAR_1->usb_dev->descriptor.iSerialNumber, VAR_3,
      sizeof(VAR_3)) != 2 * VAR_0)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_3[2 * VAR_4]) * 16 + FUNC_0(VAR_3[2 * VAR_4 + 1]);

 return 0;
}
