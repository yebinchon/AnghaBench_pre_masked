
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int retries; int expires; int status; int buildclk; int * block; struct dasd_device* memdev; struct dasd_device* startdev; int flags; scalar_t__ data; struct ccw1* cpaddr; int magic; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct alias_lcu {struct dasd_ccw_req* rsu_cqr; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct alias_lcu *VAR_4,
        struct dasd_device *VAR_5,
        char VAR_6)
{
 struct dasd_ccw_req *VAR_7;
 int VAR_8 = 0;
 struct ccw1 *VAR_9;

 VAR_7 = VAR_4->rsu_cqr;
 FUNC_4((char *) &VAR_7->magic, "ECKD", 4);
 FUNC_0((char *) &VAR_7->magic, 4);
 VAR_9 = VAR_7->cpaddr;
 VAR_9->cmd_code = VAR_2;
 VAR_9->flags = 0 ;
 VAR_9->count = 16;
 VAR_9->cda = (__u32)(addr_t) VAR_7->data;
 ((char *)VAR_7->data)[0] = VAR_6;

 FUNC_1(VAR_1, &VAR_7->flags);
 VAR_7->retries = 255;
 VAR_7->startdev = VAR_5;
 VAR_7->memdev = VAR_5;
 VAR_7->block = ((void*)0);
 VAR_7->expires = 5 * VAR_3;
 VAR_7->buildclk = FUNC_3();
 VAR_7->status = VAR_0;

 VAR_8 = FUNC_2(VAR_7);
 return VAR_8;
}
