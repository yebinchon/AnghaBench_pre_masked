
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eckd_count {int dummy; } ;
struct dasd_eckd_private {struct eckd_count* count_area; } ;
struct dasd_device {scalar_t__ private; } ;
struct dasd_ccw_req {int retries; int status; int buildclk; struct dasd_device* memdev; struct dasd_device* startdev; int * block; struct LO_eckd_data* data; struct ccw1* cpaddr; } ;
struct ccw1 {int count; void* cda; scalar_t__ flags; void* cmd_code; } ;
struct LO_eckd_data {int dummy; } ;
struct DE_eckd_data {int dummy; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (int ,int,int,struct dasd_device*) ;
 int FUNC_2 (int ,struct LO_eckd_data*,int ,int,void*,struct dasd_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int,int ,int,void*,struct dasd_device*,int ) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_5(struct dasd_device *VAR_4)
{
 struct dasd_eckd_private *VAR_5;
 struct eckd_count *VAR_6;
 struct LO_eckd_data *VAR_7;
 struct dasd_ccw_req *VAR_8;
 struct ccw1 *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_5 = (struct dasd_eckd_private *) VAR_4->private;

 VAR_10 = 8;
 VAR_11 = sizeof(struct DE_eckd_data) + 2*sizeof(struct LO_eckd_data);
 VAR_8 = FUNC_1(VAR_3, VAR_10, VAR_11, VAR_4);
 if (FUNC_0(VAR_8))
  return VAR_8;
 VAR_9 = VAR_8->cpaddr;

 FUNC_2(VAR_9++, VAR_8->data, 0, 2,
        VAR_2, VAR_4);
 VAR_7 = VAR_8->data + sizeof(struct DE_eckd_data);

 VAR_9[-1].flags |= VAR_0;
 FUNC_4(VAR_9++, VAR_7++, 0, 0, 4,
        VAR_2, VAR_4, 0);

 VAR_6 = VAR_5->count_area;
 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  VAR_9[-1].flags |= VAR_0;
  VAR_9->cmd_code = VAR_2;
  VAR_9->flags = 0;
  VAR_9->count = 8;
  VAR_9->cda = (__u32)(addr_t) VAR_6;
  VAR_9++;
  VAR_6++;
 }


 VAR_9[-1].flags |= VAR_0;
 FUNC_4(VAR_9++, VAR_7++, 2, 0, 1,
        VAR_2, VAR_4, 0);

 VAR_9[-1].flags |= VAR_0;
 VAR_9->cmd_code = VAR_2;
 VAR_9->flags = 0;
 VAR_9->count = 8;
 VAR_9->cda = (__u32)(addr_t) VAR_6;

 VAR_8->block = ((void*)0);
 VAR_8->startdev = VAR_4;
 VAR_8->memdev = VAR_4;
 VAR_8->retries = 255;
 VAR_8->buildclk = FUNC_3();
 VAR_8->status = VAR_1;
 return VAR_8;
}
