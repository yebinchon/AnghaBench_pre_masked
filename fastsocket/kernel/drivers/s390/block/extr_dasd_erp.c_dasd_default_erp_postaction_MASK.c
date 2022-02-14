
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; int stopclk; int memdev; int blocklist; struct dasd_ccw_req* refers; int * function; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dasd_ccw_req*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

struct dasd_ccw_req *FUNC_4(struct dasd_ccw_req *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->refers == ((void*)0) || VAR_2->function == ((void*)0));

 VAR_3 = VAR_2->status == VAR_0;


 while (VAR_2->refers != ((void*)0)) {
  struct dasd_ccw_req *VAR_4;

  VAR_4 = VAR_2->refers;

  FUNC_3(&VAR_2->blocklist);

  FUNC_1(VAR_2, VAR_2->memdev);
  VAR_2 = VAR_4;
 }


 if (VAR_3)
  VAR_2->status = VAR_0;
 else {
  VAR_2->status = VAR_1;
  VAR_2->stopclk = FUNC_2();
 }

 return VAR_2;

}
