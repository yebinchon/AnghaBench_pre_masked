
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_verification_work_data {int isglobal; int worker; int tbvpm; struct dasd_device* device; } ;
struct dasd_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dasd_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct path_verification_work_data* FUNC_2 (int,int) ;
 int FUNC_3 (struct path_verification_work_data*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 struct path_verification_work_data* VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dasd_device *VAR_6, __u8 VAR_7)
{
 struct path_verification_work_data *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1 | VAR_2);
 if (!VAR_8) {
  if (FUNC_4(&VAR_3)) {
   VAR_8 = VAR_5;
   VAR_8->isglobal = 1;
  } else
   return -VAR_0;
 } else {
  FUNC_3(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->isglobal = 0;
 }
 FUNC_0(&VAR_8->worker, VAR_4);
 FUNC_1(VAR_6);
 VAR_8->device = VAR_6;
 VAR_8->tbvpm = VAR_7;
 FUNC_5(&VAR_8->worker);
 return 0;
}
