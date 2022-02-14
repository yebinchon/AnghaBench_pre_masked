
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int ,int *,int ) ;

struct wpabuf * FUNC_8(struct wps_data *VAR_2)
{
 struct wpabuf *VAR_3;

 FUNC_0(VAR_0, "WPS: Building Message WSC_ACK");

 VAR_3 = FUNC_1(1000);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (FUNC_6(VAR_3) ||
     FUNC_4(VAR_3, VAR_1) ||
     FUNC_3(VAR_2, VAR_3) ||
     FUNC_5(VAR_2, VAR_3) ||
     FUNC_7(VAR_3, 0, ((void*)0), 0)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
