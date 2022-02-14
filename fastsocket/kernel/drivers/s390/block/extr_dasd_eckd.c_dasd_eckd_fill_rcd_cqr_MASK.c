
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int expires; int lpm; int retries; int flags; int status; int buildclk; int * block; struct dasd_device* memdev; struct dasd_device* startdev; int magic; struct ccw1* cpaddr; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct dasd_device *VAR_6,
       struct dasd_ccw_req *VAR_7,
       __u8 *VAR_8,
       __u8 VAR_9)
{
 struct ccw1 *VAR_10;




 VAR_8[0] = 0xE5;
 VAR_8[1] = 0xF1;
 VAR_8[2] = 0x4B;
 VAR_8[3] = 0xF0;

 VAR_10 = VAR_7->cpaddr;
 VAR_10->cmd_code = VAR_2;
 VAR_10->flags = 0;
 VAR_10->cda = (__u32)(addr_t)VAR_8;
 VAR_10->count = VAR_4;
 VAR_7->magic = VAR_3;

 VAR_7->startdev = VAR_6;
 VAR_7->memdev = VAR_6;
 VAR_7->block = ((void*)0);
 VAR_7->expires = 10*VAR_5;
 VAR_7->lpm = VAR_9;
 VAR_7->retries = 256;
 VAR_7->buildclk = FUNC_0();
 VAR_7->status = VAR_0;
 FUNC_1(VAR_1, &VAR_7->flags);
}
