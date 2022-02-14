
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int status; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,char*) ;
 int FUNC_2 (struct dasd_ccw_req*,char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_3(struct dasd_ccw_req * VAR_2, char *VAR_3)
{

 struct dasd_device *VAR_4 = VAR_2->startdev;

 VAR_2->function = FUNC_3;

 FUNC_0(VAR_1, VAR_4, "%s", "Environmental data present");

 FUNC_2(VAR_2, VAR_3);


 if (VAR_3[7] != 0x0F) {
  VAR_2 = FUNC_1(VAR_2, VAR_3);
 } else {
  VAR_2->status = VAR_0;
 }

 return VAR_2;

}
