
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {int * name; } ;
struct eap_sm {struct wpa_config_blob const* blob; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *,int ) ;

const struct wpa_config_blob * FUNC_1(struct eap_sm *VAR_2,
         const char *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->blob[VAR_4].name == ((void*)0))
   continue;
  if (FUNC_0(VAR_3, VAR_2->blob[VAR_4].name, VAR_0) == 0) {
   return &VAR_2->blob[VAR_4];
  }
 }
 return ((void*)0);
}
