
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int uuid_e; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_2, const u8 *VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No UUID-E received");
  return -1;
 }

 FUNC_0(VAR_2->uuid_e, VAR_3, VAR_1);
 FUNC_1(VAR_0, "WPS: UUID-E", VAR_2->uuid_e, VAR_1);

 return 0;
}
