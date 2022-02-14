
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int magic; int flags; struct dasd_ccw_req* cpaddr; int * data; } ;
struct ccw1 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dasd_ccw_req* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dasd_device*) ;
 struct dasd_ccw_req* FUNC_3 (int,int,int) ;
 int FUNC_4 (struct dasd_ccw_req*) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int ,int *) ;

struct dasd_ccw_req *FUNC_7(int VAR_5, int VAR_6,
       int VAR_7,
       struct dasd_device *VAR_8)
{
 struct dasd_ccw_req *VAR_9;


 FUNC_0(VAR_7 > VAR_4 ||
      (VAR_6*sizeof(struct ccw1)) > VAR_4);

 VAR_9 = FUNC_5(sizeof(struct dasd_ccw_req), VAR_2);
 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_1);
 VAR_9->cpaddr = ((void*)0);
 if (VAR_6 > 0) {
  VAR_9->cpaddr = FUNC_3(VAR_6, sizeof(struct ccw1),
          VAR_2 | VAR_3);
  if (VAR_9->cpaddr == ((void*)0)) {
   FUNC_4(VAR_9);
   return FUNC_1(-VAR_1);
  }
 }
 VAR_9->data = ((void*)0);
 if (VAR_7 > 0) {
  VAR_9->data = FUNC_5(VAR_7, VAR_2 | VAR_3);
  if (VAR_9->data == ((void*)0)) {
   FUNC_4(VAR_9->cpaddr);
   FUNC_4(VAR_9);
   return FUNC_1(-VAR_1);
  }
 }
 VAR_9->magic = VAR_5;
 FUNC_6(VAR_0, &VAR_9->flags);
 FUNC_2(VAR_8);
 return VAR_9;
}
