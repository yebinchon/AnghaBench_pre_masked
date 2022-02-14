
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wps_data {scalar_t__ dev_password_len; int state; TYPE_1__* wps; int dev_pw_id; int uuid_e; int pbc_in_m1; int nonce_e; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int config_methods; int dev; scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_8 (struct wpabuf*,int) ;
 scalar_t__ FUNC_9 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_11 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_16 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_18 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_19 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_20 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_21 (struct wpabuf*) ;
 scalar_t__ FUNC_22 (struct wpabuf*,int ,int *,int ) ;
 scalar_t__ FUNC_23 (struct wps_data*,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_24(struct wps_data *VAR_10)
{
 struct wpabuf *VAR_11;
 u16 VAR_12;

 if (FUNC_0(VAR_10->nonce_e, VAR_9) < 0)
  return ((void*)0);
 FUNC_1(VAR_0, "WPS: Enrollee Nonce",
      VAR_10->nonce_e, VAR_9);

 FUNC_2(VAR_0, "WPS: Building Message M1");
 VAR_11 = FUNC_3(1000);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 VAR_12 = VAR_10->wps->config_methods;
 if (VAR_10->wps->ap && !VAR_10->pbc_in_m1 &&
     (VAR_10->dev_password_len != 0 ||
      (VAR_12 & VAR_4))) {
  VAR_12 &= ~VAR_6;




 }

 if (FUNC_21(VAR_11) ||
     FUNC_15(VAR_11, VAR_8) ||
     FUNC_19(VAR_11, VAR_10->uuid_e) ||
     FUNC_14(VAR_10, VAR_11) ||
     FUNC_13(VAR_10, VAR_11) ||
     FUNC_17(VAR_10, VAR_11, VAR_2) ||
     FUNC_6(VAR_10, VAR_11) ||
     FUNC_12(VAR_10, VAR_11) ||
     FUNC_9(VAR_10, VAR_11) ||
     FUNC_8(VAR_11, VAR_12) ||
     FUNC_23(VAR_10, VAR_11) ||
     FUNC_11(&VAR_10->wps->dev, VAR_11) ||
     FUNC_18(&VAR_10->wps->dev, VAR_11) ||
     FUNC_5(VAR_10, VAR_11) ||
     FUNC_10(VAR_11, VAR_10->dev_pw_id) ||
     FUNC_7(VAR_11, VAR_3) ||
     FUNC_16(&VAR_10->wps->dev, VAR_11) ||
     FUNC_22(VAR_11, 0, ((void*)0), 0) ||
     FUNC_20(&VAR_10->wps->dev, VAR_11)) {
  FUNC_4(VAR_11);
  return ((void*)0);
 }

 VAR_10->state = VAR_1;
 return VAR_11;
}
