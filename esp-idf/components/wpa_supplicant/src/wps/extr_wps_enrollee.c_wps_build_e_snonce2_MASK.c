
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {scalar_t__ snonce; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,scalar_t__) ;
 int FUNC_2 (struct wpabuf*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_3, struct wpabuf *VAR_4)
{
 FUNC_0(VAR_1, "WPS:  * E-SNonce2");
 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_3->snonce + VAR_2,
   VAR_2);
 return 0;
}
