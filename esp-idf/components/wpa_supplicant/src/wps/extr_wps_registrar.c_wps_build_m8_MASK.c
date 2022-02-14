
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int state; scalar_t__ er; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_10 (struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ,int *,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct wps_data *VAR_3)
{
 struct wpabuf *VAR_4, *VAR_5;

 FUNC_0(VAR_0, "WPS: Building Message M8");

 VAR_5 = FUNC_1(500);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(1000);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 if (FUNC_10(VAR_4) ||
     FUNC_9(VAR_4, VAR_2) ||
     FUNC_7(VAR_3, VAR_4) ||
     ((VAR_3->wps->ap || VAR_3->er) && FUNC_5(VAR_3, VAR_5)) ||
     (!VAR_3->wps->ap && !VAR_3->er && FUNC_3(VAR_3, VAR_5)) ||
     FUNC_8(VAR_3, VAR_5) ||
     FUNC_6(VAR_3, VAR_4, VAR_5) ||
     FUNC_11(VAR_4, 0, ((void*)0), 0) ||
     FUNC_4(VAR_3, VAR_4)) {
  FUNC_2(VAR_5);
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 FUNC_2(VAR_5);

 VAR_3->state = VAR_1;
 return VAR_4;
}
