
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int eer_cqr; } ;
struct dasd_ccw_req {int dummy; } ;






 int FUNC_0 (struct dasd_device*,struct dasd_ccw_req*,unsigned int) ;
 int FUNC_1 (struct dasd_device*,struct dasd_ccw_req*,unsigned int) ;

void FUNC_2(struct dasd_device *VAR_0, struct dasd_ccw_req *VAR_1,
      unsigned int VAR_2)
{
 if (!VAR_0->eer_cqr)
  return;
 switch (VAR_2) {
 case 131:
 case 129:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, ((void*)0), VAR_2);
  break;
 case 128:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_1(VAR_0, ((void*)0), VAR_2);
  break;
 }
}
