
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*,char*) ;
 int FUNC_1 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*,char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_4(struct dasd_ccw_req * VAR_2, char *VAR_3)
{

 if ((VAR_2->function == FUNC_3) &&
     (VAR_2->status == VAR_1)) {

  FUNC_2(VAR_2, VAR_3);
 }

 if ((VAR_2->function == FUNC_2) &&
     (VAR_2->status == VAR_1)) {

  VAR_2 = FUNC_0(VAR_2, VAR_3);
 }

 if ((VAR_2->function == FUNC_0) &&
     (VAR_2->status == VAR_1)) {

  FUNC_1(VAR_2, VAR_3);
 }


 if (VAR_2->status == VAR_1)
  VAR_2->status = VAR_0;

 return VAR_2;

}
