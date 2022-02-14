
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int int_reg; int state; TYPE_1__* wps; int dev_pw_id; int uuid_r; int nonce_r; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dev; int registrar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_9 (int ,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_12 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_16 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_18 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_19 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_20 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_21 (struct wpabuf*) ;
 scalar_t__ FUNC_22 (struct wpabuf*,int ,int *,int ) ;
 scalar_t__ FUNC_23 (struct wps_data*) ;

__attribute__((used)) static struct wpabuf * FUNC_24(struct wps_data *VAR_7)
{
 struct wpabuf *VAR_8;

 if (FUNC_0(VAR_7->nonce_r, VAR_5) < 0)
  return ((void*)0);
 FUNC_1(VAR_0, "WPS: Registrar Nonce",
      VAR_7->nonce_r, VAR_5);
 FUNC_1(VAR_0, "WPS: UUID-R", VAR_7->uuid_r, VAR_6);

 FUNC_2(VAR_0, "WPS: Building Message M2");
 VAR_8 = FUNC_3(1000);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 if (FUNC_21(VAR_8) ||
     FUNC_15(VAR_8, VAR_4) ||
     FUNC_14(VAR_7, VAR_8) ||
     FUNC_18(VAR_7, VAR_8) ||
     FUNC_20(VAR_7, VAR_8) ||
     FUNC_17(VAR_7, VAR_8, VAR_2) ||
     FUNC_23(VAR_7) ||
     FUNC_6(VAR_7, VAR_8) ||
     FUNC_13(VAR_7, VAR_8) ||
     FUNC_10(VAR_7, VAR_8) ||
     FUNC_9(VAR_7->wps->registrar, VAR_8) ||
     FUNC_12(&VAR_7->wps->dev, VAR_8) ||
     FUNC_19(&VAR_7->wps->dev, VAR_8) ||
     FUNC_5(VAR_7, VAR_8) ||
     FUNC_8(VAR_8, VAR_3) ||
     FUNC_11(VAR_8, VAR_7->dev_pw_id) ||
     FUNC_16(&VAR_7->wps->dev, VAR_8) ||
     FUNC_22(VAR_8, 0, ((void*)0), 0) ||
     FUNC_7(VAR_7, VAR_8)) {
  FUNC_4(VAR_8);
  return ((void*)0);
 }

 VAR_7->int_reg = 1;
 VAR_7->state = VAR_1;
 return VAR_8;
}
