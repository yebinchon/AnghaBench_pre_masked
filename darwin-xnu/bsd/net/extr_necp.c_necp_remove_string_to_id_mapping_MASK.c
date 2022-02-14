
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_string_id_mapping_list {int dummy; } ;
struct necp_string_id_mapping {scalar_t__ refcount; struct necp_string_id_mapping* string; } ;


 int VAR_0 ;
 int FUNC_0 (struct necp_string_id_mapping*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct necp_string_id_mapping*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct necp_string_id_mapping* FUNC_3 (struct necp_string_id_mapping_list*,char*) ;

__attribute__((used)) static bool
FUNC_4(struct necp_string_id_mapping_list *VAR_6, char *VAR_7)
{
 struct necp_string_id_mapping *VAR_8 = ((void*)0);

 FUNC_1(&VAR_5, VAR_1);

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 != ((void*)0)) {
  if (--VAR_8->refcount == 0) {
   FUNC_2(VAR_8, VAR_4);
   FUNC_0(VAR_8->string, VAR_2);
   FUNC_0(VAR_8, VAR_2);
  }
  return (VAR_3);
 }

 return (VAR_0);
}
