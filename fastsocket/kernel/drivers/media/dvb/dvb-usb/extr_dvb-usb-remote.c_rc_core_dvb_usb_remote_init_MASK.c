
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct rc_dev {char* input_name; struct dvb_usb_device* priv; TYPE_1__ dev; int input_phys; int input_id; int driver_type; int allowed_protos; int change_protocol; int map_name; int driver_name; } ;
struct TYPE_6__ {int rc_interval; scalar_t__ bulk_mode; int rc_query; int allowed_protos; int change_protocol; int rc_codes; int module_name; } ;
struct TYPE_7__ {TYPE_2__ rc_core; } ;
struct dvb_usb_device {int rc_query_work; TYPE_3__ props; struct rc_dev* rc_dev; int * rc_input_dev; TYPE_4__* udev; int rc_phys; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 struct rc_dev* FUNC_3 () ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct rc_dev *VAR_6;

 VAR_6 = FUNC_3();
 if (!VAR_6)
  return -VAR_0;

 VAR_6->driver_name = VAR_3->props.rc_core.module_name;
 VAR_6->map_name = VAR_3->props.rc_core.rc_codes;
 VAR_6->change_protocol = VAR_3->props.rc_core.change_protocol;
 VAR_6->allowed_protos = VAR_3->props.rc_core.allowed_protos;
 VAR_6->driver_type = VAR_1;
 FUNC_7(VAR_3->udev, &VAR_6->input_id);
 VAR_6->input_name = "IR-receiver inside an USB DVB receiver";
 VAR_6->input_phys = VAR_3->rc_phys;
 VAR_6->dev.parent = &VAR_3->udev->dev;
 VAR_6->priv = VAR_3;

 VAR_4 = FUNC_5(VAR_6);
 if (VAR_4 < 0) {
  FUNC_4(VAR_6);
  return VAR_4;
 }

 VAR_3->rc_input_dev = ((void*)0);
 VAR_3->rc_dev = VAR_6;

 if (!VAR_3->props.rc_core.rc_query || VAR_3->props.rc_core.bulk_mode)
  return 0;


 FUNC_0(&VAR_3->rc_query_work, VAR_2);

 VAR_5 = VAR_3->props.rc_core.rc_interval;

 FUNC_1("schedule remote query interval to %d msecs.", VAR_5);
 FUNC_6(&VAR_3->rc_query_work,
         FUNC_2(VAR_5));

 return 0;
}
