
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_psf_ssc_data {int suborder; int* reserved; int order; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int retries; int expires; int status; int buildclk; int * block; struct dasd_device* memdev; struct dasd_device* startdev; struct ccw1* cpaddr; scalar_t__ data; } ;
struct ccw1 {int count; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_5 ;
 struct dasd_ccw_req* FUNC_2 (int ,int,int,struct dasd_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_4(struct dasd_device *VAR_6,
          int VAR_7)
{
 struct dasd_ccw_req *VAR_8;
 struct dasd_psf_ssc_data *VAR_9;
 struct ccw1 *VAR_10;

 VAR_8 = FUNC_2(VAR_2, 1 ,
      sizeof(struct dasd_psf_ssc_data),
      VAR_6);

 if (FUNC_1(VAR_8)) {
  FUNC_0(VAR_3, VAR_6, "%s",
      "Could not allocate PSF-SSC request");
  return VAR_8;
 }
 VAR_9 = (struct dasd_psf_ssc_data *)VAR_8->data;
 VAR_9->order = VAR_5;
 VAR_9->suborder = 0xc0;
 if (VAR_7) {
  VAR_9->suborder |= 0x08;
  VAR_9->reserved[0] = 0x88;
 }
 VAR_10 = VAR_8->cpaddr;
 VAR_10->cmd_code = VAR_1;
 VAR_10->cda = (__u32)(addr_t)VAR_9;
 VAR_10->count = 66;

 VAR_8->startdev = VAR_6;
 VAR_8->memdev = VAR_6;
 VAR_8->block = ((void*)0);
 VAR_8->retries = 256;
 VAR_8->expires = 10*VAR_4;
 VAR_8->buildclk = FUNC_3();
 VAR_8->status = VAR_0;
 return VAR_8;
}
