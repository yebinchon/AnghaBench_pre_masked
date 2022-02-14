
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;} ;


 char VAR_0 ;
 int VAR_1 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*,int) ;
 int FUNC_1 (struct dasd_ccw_req*,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_2(struct dasd_ccw_req * VAR_2, char *VAR_3)
{

 if (VAR_3[25] & VAR_0) {

  switch (VAR_3[28]) {
  case 0x17:


   VAR_2 = FUNC_0(VAR_2, 0x20);
   break;

  case 0x25:

   VAR_2->retries = 1;

   FUNC_1 (VAR_2, 5*VAR_1);
   break;

  default:

   break;
  }
 }

 VAR_2->function = FUNC_2;

 return VAR_2;

}
