
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int mutex; int trust_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wusbhc*) ;
 int FUNC_2 (struct wusbhc*) ;
 int FUNC_3 (struct wusbhc*) ;
 int FUNC_4 (struct wusbhc*) ;
 int FUNC_5 (struct wusbhc*) ;
 int FUNC_6 (struct wusbhc*) ;
 int FUNC_7 (struct wusbhc*) ;

int FUNC_8(struct wusbhc *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->trust_timeout = VAR_0;
 FUNC_0(&VAR_1->mutex);
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  goto error_mmcie_create;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  goto error_devconnect_create;
 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 < 0)
  goto error_rh_create;
 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 < 0)
  goto error_sec_create;
 return 0;

error_sec_create:
 FUNC_6(VAR_1);
error_rh_create:
 FUNC_2(VAR_1);
error_devconnect_create:
 FUNC_4(VAR_1);
error_mmcie_create:
 return VAR_2;
}
