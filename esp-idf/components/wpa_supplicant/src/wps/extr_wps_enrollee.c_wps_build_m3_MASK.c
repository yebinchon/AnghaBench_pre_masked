
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {int state; int dev_password_len; int * dev_password; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*,int ,int *,int ) ;
 int FUNC_9 (struct wps_data*,int *,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct wps_data *VAR_3)
{
 struct wpabuf *VAR_4;

 FUNC_0(VAR_0, "WPS: Building Message M3");

 if (VAR_3->dev_password == ((void*)0)) {
  FUNC_0(VAR_0, "WPS: No Device Password available");
  return ((void*)0);
 }
 FUNC_9(VAR_3, VAR_3->dev_password, VAR_3->dev_password_len);

 VAR_4 = FUNC_1(1000);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (FUNC_7(VAR_4) ||
     FUNC_5(VAR_4, VAR_2) ||
     FUNC_6(VAR_3, VAR_4) ||
     FUNC_4(VAR_3, VAR_4) ||
     FUNC_8(VAR_4, 0, ((void*)0), 0) ||
     FUNC_3(VAR_3, VAR_4)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_3->state = VAR_1;
 return VAR_4;
}
