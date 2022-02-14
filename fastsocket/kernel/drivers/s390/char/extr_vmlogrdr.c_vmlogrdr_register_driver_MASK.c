
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_5;


 VAR_5 = FUNC_7(&VAR_4, 1);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_4(&VAR_3);
 if (VAR_5)
  goto out_iucv;

 VAR_5 = FUNC_3(&VAR_3,
     &VAR_1);
 if (VAR_5)
  goto out_driver;

 VAR_2 = FUNC_2(VAR_0, "vmlogrdr");
 if (FUNC_0(VAR_2)) {
  VAR_5 = FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
  goto out_attr;
 }
 return 0;

out_attr:
 FUNC_5(&VAR_3, &VAR_1);
out_driver:
 FUNC_6(&VAR_3);
out_iucv:
 FUNC_8(&VAR_4, 1);
out:
 return VAR_5;
}
