
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {int dummy; } ;


 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_2(struct dasd_ccw_req * VAR_0)
{

 struct dasd_ccw_req *VAR_1 = ((void*)0);


 VAR_1 = FUNC_0(VAR_0);


 if (VAR_1 != VAR_0) {

  VAR_1 = FUNC_1(VAR_1);
 }

 return VAR_1;

}
