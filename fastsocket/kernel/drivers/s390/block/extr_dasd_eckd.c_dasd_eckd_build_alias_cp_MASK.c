
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dasd_eckd_private {scalar_t__ count; } ;
struct dasd_device {int features; int cdev; scalar_t__ private; } ;
struct dasd_ccw_req {int dummy; } ;
struct dasd_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dasd_ccw_req* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_device* FUNC_2 (struct dasd_device*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_device*,struct dasd_block*,struct request*) ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_device*,struct dasd_block*,struct request*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_8(struct dasd_device *VAR_3,
           struct dasd_block *VAR_4,
           struct request *VAR_5)
{
 struct dasd_eckd_private *VAR_6;
 struct dasd_device *VAR_7;
 unsigned long VAR_8;
 struct dasd_ccw_req *VAR_9;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  VAR_7 = VAR_3;
 VAR_6 = (struct dasd_eckd_private *) VAR_7->private;
 if (VAR_6->count >= VAR_0)
  return FUNC_0(-VAR_2);

 FUNC_6(FUNC_5(VAR_7->cdev), VAR_8);
 VAR_6->count++;
 if ((VAR_3->features & VAR_1))
  VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_5);
 else
  VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_5);
 if (FUNC_1(VAR_9))
  VAR_6->count--;
 FUNC_7(FUNC_5(VAR_7->cdev), VAR_8);
 return VAR_9;
}
