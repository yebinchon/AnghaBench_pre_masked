
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int (* set_num_dnts ) (struct wusbhc*,int ,int) ;int * wuie_host_info; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct wusbhc*,int ,int) ;
 int FUNC_3 (struct wusbhc*) ;
 int FUNC_4 (struct wusbhc*) ;
 int FUNC_5 (struct wusbhc*) ;
 int FUNC_6 (struct wusbhc*) ;
 int FUNC_7 (struct wusbhc*) ;
 int FUNC_8 (struct wusbhc*) ;
 int FUNC_9 (struct wusbhc*) ;

int FUNC_10(struct wusbhc *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = VAR_0->dev;

 FUNC_0(VAR_0->wuie_host_info != ((void*)0));

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_2, "cannot establish cluster reservation: %d\n",
   VAR_1);
  goto error_rsv_establish;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_2, "error enabling device connections: %d\n", VAR_1);
  goto error_devconnect_start;
 }

 VAR_1 = FUNC_8(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_2, "error starting security in the HC: %d\n", VAR_1);
  goto error_sec_start;
 }


 VAR_1 = VAR_0->set_num_dnts(VAR_0, 0, 15);
 if (VAR_1 < 0) {
  FUNC_1(VAR_2, "Cannot set DNTS parameters: %d\n", VAR_1);
  goto error_set_num_dnts;
 }
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0) {
  FUNC_1(VAR_2, "error starting wusbch: %d\n", VAR_1);
  goto error_wusbhc_start;
 }

 return 0;

error_wusbhc_start:
 FUNC_9(VAR_0);
error_set_num_dnts:
error_sec_start:
 FUNC_4(VAR_0);
error_devconnect_start:
 FUNC_7(VAR_0);
error_rsv_establish:
 return VAR_1;
}
