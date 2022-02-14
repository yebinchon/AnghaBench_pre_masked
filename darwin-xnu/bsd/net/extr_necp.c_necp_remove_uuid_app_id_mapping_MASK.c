
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_uuid_id_mapping {scalar_t__ refcount; int table_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct necp_uuid_id_mapping*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct necp_uuid_id_mapping*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct necp_uuid_id_mapping* FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(uuid_t VAR_6, bool *VAR_7, bool VAR_8)
{
 struct necp_uuid_id_mapping *VAR_9 = ((void*)0);

 FUNC_1(&VAR_5, VAR_1);

 if (VAR_7) {
  *VAR_7 = VAR_0;
 }

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 != ((void*)0)) {
  if (VAR_8) {
   VAR_9->table_refcount--;
  }
  if (--VAR_9->refcount == 0) {
   FUNC_2(VAR_9, VAR_4);
   FUNC_0(VAR_9, VAR_2);
   if (VAR_7) {
    *VAR_7 = VAR_3;
   }
  }
  return (VAR_3);
 }

 return (VAR_0);
}
