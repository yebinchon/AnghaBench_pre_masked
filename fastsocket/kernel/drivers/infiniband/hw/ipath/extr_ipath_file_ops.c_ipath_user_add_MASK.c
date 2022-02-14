
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_unit; int user_dev; int user_cdev; } ;
typedef int name ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int *,int *,int *) ;
 int FUNC_3 (struct ipath_devdata*,char*,int,...) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7(struct ipath_devdata *VAR_5)
{
 char VAR_6[10];
 int VAR_7;

 if (FUNC_0(&VAR_1) == 1) {
  VAR_7 = FUNC_6();
  if (VAR_7 < 0) {
   FUNC_3(VAR_5, "Unable to set up user support: "
          "error %d\n", -VAR_7);
   goto bail;
  }
  VAR_7 = FUNC_2(0, "ipath", &VAR_0, &VAR_3,
    &VAR_4);
  if (VAR_7 < 0) {
   FUNC_3(VAR_5, "Could not create wildcard "
          "minor: error %d\n", -VAR_7);
   goto bail_user;
  }

  FUNC_1(&VAR_2, 1);
 }

 FUNC_4(VAR_6, sizeof(VAR_6), "ipath%d", VAR_5->ipath_unit);

 VAR_7 = FUNC_2(VAR_5->ipath_unit + 1, VAR_6, &VAR_0,
   &VAR_5->user_cdev, &VAR_5->user_dev);
 if (VAR_7 < 0)
  FUNC_3(VAR_5, "Could not create user minor %d, %s\n",
         VAR_5->ipath_unit + 1, VAR_6);

 goto bail;

bail_user:
 FUNC_5();
bail:
 return VAR_7;
}
