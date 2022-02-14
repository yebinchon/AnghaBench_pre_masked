
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int unit; int user_device; int user_cdev; } ;
typedef int name ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_4)
{
 char VAR_5[10];
 int VAR_6;

 if (FUNC_0(&VAR_1) == 1) {
  VAR_6 = FUNC_1(0, "ipath", &VAR_0,
        &VAR_2, &VAR_3);
  if (VAR_6)
   goto done;
 }

 FUNC_3(VAR_5, sizeof(VAR_5), "ipath%d", VAR_4->unit);
 VAR_6 = FUNC_1(VAR_4->unit + 1, VAR_5, &VAR_0,
       &VAR_4->user_cdev, &VAR_4->user_device);
 if (VAR_6)
  FUNC_2(VAR_4);
done:
 return VAR_6;
}
