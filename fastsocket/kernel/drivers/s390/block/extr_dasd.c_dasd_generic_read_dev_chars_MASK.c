
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int memdev; } ;


 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_device*,void*,int,int) ;
 int FUNC_3 (struct dasd_ccw_req*,int ) ;
 int FUNC_4 (struct dasd_ccw_req*) ;

int FUNC_5(struct dasd_device *VAR_0, int VAR_1,
    void *VAR_2, int VAR_3)
{
 int VAR_4;
 struct dasd_ccw_req *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_3,
         VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_4(VAR_5);
 FUNC_3(VAR_5, VAR_5->memdev);
 return VAR_4;
}
