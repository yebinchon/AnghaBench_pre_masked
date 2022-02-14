
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_1(struct dasd_ccw_req * VAR_1, char *VAR_2)
{

 struct dasd_device *VAR_3 = VAR_1->startdev;

 VAR_1->retries = 256;
 VAR_1->function = FUNC_1;

 FUNC_0(VAR_0, VAR_3, "%s", "Perform logging requested");

 return VAR_1;

}
