
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int state; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int ,int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct wps_data *VAR_4)
{
 struct wpabuf *VAR_5;

 FUNC_0(VAR_0, "WPS: Building Message WSC_Done");

 VAR_5 = FUNC_1(1000);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (FUNC_6(VAR_5) ||
     FUNC_4(VAR_5, VAR_3) ||
     FUNC_3(VAR_4, VAR_5) ||
     FUNC_5(VAR_4, VAR_5) ||
     FUNC_7(VAR_5, 0, ((void*)0), 0)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 if (VAR_4->wps->ap)
  VAR_4->state = VAR_1;
 else {
  FUNC_8(VAR_4->wps);
  VAR_4->state = VAR_2;
 }
 return VAR_5;
}
