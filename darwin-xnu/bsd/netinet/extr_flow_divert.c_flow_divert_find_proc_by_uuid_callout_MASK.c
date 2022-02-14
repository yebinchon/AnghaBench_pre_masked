
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_string_t ;
struct uuid_search_info {int target_uuid; int * found_signing_id; int found_proc; int found_multiple_signing_ids; } ;
typedef int proc_t ;


 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(proc_t VAR_5, void *VAR_6)
{
 struct uuid_search_info *VAR_7 = (struct uuid_search_info *)VAR_6;
 int VAR_8 = VAR_3;

 if (VAR_7->found_signing_id != ((void*)0)) {
  if (!VAR_7->found_multiple_signing_ids) {

   VAR_7->found_proc = VAR_5;
   VAR_8 = VAR_2;
  } else {
   uuid_string_t VAR_9;
   FUNC_2(VAR_7->target_uuid, VAR_9);
   FUNC_0(VAR_0, &VAR_4, "Found multiple processes with UUID %s with different signing identifiers", VAR_9);
  }
  FUNC_1(VAR_7->found_signing_id, VAR_1);
  VAR_7->found_signing_id = ((void*)0);
 }

 if (VAR_8 == VAR_3) {
  uuid_string_t VAR_10;
  FUNC_2(VAR_7->target_uuid, VAR_10);
  FUNC_0(VAR_0, &VAR_4, "Failed to find a process with UUID %s", VAR_10);
 }

 return VAR_8;
}
