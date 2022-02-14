
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ks959_speedparams {int dummy; } ;
struct TYPE_6__ {int flags; int baudrate; } ;
struct ks959_cb {TYPE_1__* speed_urb; TYPE_3__ speedparams; int * speed_setuprequest; int usbdev; } ;
struct TYPE_5__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,unsigned char*,TYPE_3__*,int,int ,struct ks959_cb*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ks959_cb *VAR_5, unsigned VAR_6)
{
 static unsigned int VAR_7[] = { 2400, 9600, 19200, 38400,
  57600, 115200, 576000, 1152000, 4000000, 0
 };
 int VAR_8;
 unsigned int VAR_9;

 if (VAR_5->speed_setuprequest == ((void*)0) || VAR_5->speed_urb == ((void*)0))
  return -VAR_0;


 for (VAR_9 = 0; VAR_7[VAR_9] && VAR_7[VAR_9] != VAR_6; VAR_9++) ;
 if (VAR_7[VAR_9] == 0)
  return -VAR_1;

 FUNC_1(&(VAR_5->speedparams), 0, sizeof(struct ks959_speedparams));
 VAR_5->speedparams.baudrate = FUNC_0(VAR_6);
 VAR_5->speedparams.flags = VAR_3;


 FUNC_2(VAR_5->speed_urb, VAR_5->usbdev,
        FUNC_3(VAR_5->usbdev, 0),
        (unsigned char *)VAR_5->speed_setuprequest,
        &(VAR_5->speedparams),
        sizeof(struct ks959_speedparams), VAR_4,
        VAR_5);
 VAR_5->speed_urb->status = 0;
 VAR_8 = FUNC_4(VAR_5->speed_urb, VAR_2);

 return VAR_8;
}
