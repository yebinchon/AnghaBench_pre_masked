
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {scalar_t__ function; int retries; struct dasd_device* startdev; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dasd_ccw_req*,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_2(struct dasd_ccw_req * VAR_2)
{

 struct dasd_device *VAR_3 = VAR_2->startdev;




 if (VAR_2->function != FUNC_2) {
  VAR_2->retries = 256;
  VAR_2->function = FUNC_2;

 } else {


  FUNC_0(VAR_0, VAR_3, "%s",
       "bus out parity error or BOPC requested by "
       "channel");

  FUNC_1(VAR_2, 60*VAR_1);

 }

 return VAR_2;

}
