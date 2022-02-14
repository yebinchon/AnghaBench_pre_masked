
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cpaddr; } ;
struct path_verification_work_data {TYPE_1__ rcd_buffer; TYPE_1__ cqr; int ccw; } ;
struct dasd_path {int opm; } ;
struct dasd_eckd_private {int conf_data; } ;
struct dasd_device {int cdev; struct dasd_path path_data; scalar_t__ private; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dasd_device*) ;
 scalar_t__ FUNC_2 (struct dasd_eckd_private*) ;
 int FUNC_3 (struct dasd_device*,TYPE_1__*,TYPE_1__,int) ;
 int FUNC_4 (int ,TYPE_1__,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct dasd_device *VAR_4,
         struct path_verification_work_data *VAR_5)
{
 struct dasd_eckd_private *VAR_6;
 struct dasd_path *VAR_7;
 __u8 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = -VAR_2;
 VAR_6 = (struct dasd_eckd_private *) VAR_4->private;
 VAR_7 = &VAR_4->path_data;
 VAR_9 = VAR_4->path_data.opm;

 for (VAR_8 = 0x80; VAR_8; VAR_8 >>= 1) {
  if (!(VAR_8 & VAR_9))
   continue;
  FUNC_5(&VAR_5->rcd_buffer, 0, sizeof(VAR_5->rcd_buffer));
  FUNC_5(&VAR_5->cqr, 0, sizeof(VAR_5->cqr));
  VAR_5->cqr.cpaddr = &VAR_5->ccw;
  VAR_10 = FUNC_3(VAR_4, &VAR_5->cqr,
           VAR_5->rcd_buffer,
           VAR_8);

  if (VAR_10) {
   if (VAR_10 == -VAR_3)
    continue;
   FUNC_0(VAR_1, VAR_4->cdev,
     "Read configuration data "
     "returned error %d", VAR_10);
   break;
  }
  FUNC_4(VAR_6->conf_data, VAR_5->rcd_buffer,
         VAR_0);
  if (FUNC_2(VAR_6)) {
   VAR_10 = -VAR_2;
  } else
   break;
 }

 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_4);

 return VAR_10;
}
