
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wps_data {scalar_t__ config_error; int state; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dev; int registrar; scalar_t__ ap_setup_locked; scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_12 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_16 (struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wpabuf*,int ,int *,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_18(struct wps_data *VAR_5)
{
 struct wpabuf *VAR_6;
 u16 VAR_7 = VAR_5->config_error;

 FUNC_0(VAR_0, "WPS: Building Message M2D");
 VAR_6 = FUNC_1(1000);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_5->wps->ap && VAR_5->wps->ap_setup_locked &&
     VAR_7 == VAR_2)
  VAR_7 = VAR_3;

 if (FUNC_16(VAR_6) ||
     FUNC_11(VAR_6, VAR_4) ||
     FUNC_10(VAR_5, VAR_6) ||
     FUNC_13(VAR_5, VAR_6) ||
     FUNC_15(VAR_5, VAR_6) ||
     FUNC_4(VAR_5, VAR_6) ||
     FUNC_9(VAR_5, VAR_6) ||
     FUNC_7(VAR_5, VAR_6) ||
     FUNC_6(VAR_5->wps->registrar, VAR_6) ||
     FUNC_8(&VAR_5->wps->dev, VAR_6) ||
     FUNC_14(&VAR_5->wps->dev, VAR_6) ||
     FUNC_3(VAR_5, VAR_6) ||
     FUNC_5(VAR_6, VAR_7) ||
     FUNC_12(&VAR_5->wps->dev, VAR_6) ||
     FUNC_17(VAR_6, 0, ((void*)0), 0)) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_5->state = VAR_1;
 return VAR_6;
}
