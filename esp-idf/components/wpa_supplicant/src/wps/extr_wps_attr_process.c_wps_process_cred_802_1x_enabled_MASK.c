
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_credential {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int const) ;

__attribute__((used)) static int FUNC_1(struct wps_credential *VAR_1,
        const u8 *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_0(VAR_0, "WPS: 802.1X Enabled: %d", *VAR_2);

 return 0;
}
