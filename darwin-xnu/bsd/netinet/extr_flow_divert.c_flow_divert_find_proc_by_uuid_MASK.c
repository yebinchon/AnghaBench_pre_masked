
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
typedef int uuid_string_t ;
struct uuid_search_info {int found_proc; int target_uuid; } ;
typedef int proc_t ;
typedef int info ;
struct TYPE_3__ {scalar_t__ log_level; } ;


 int FUNC_0 (scalar_t__,TYPE_1__*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct uuid_search_info*,int ,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ,int ,struct uuid_search_info*,int ,struct uuid_search_info*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static proc_t
FUNC_5(uuid_t VAR_6)
{
 struct uuid_search_info VAR_7;

 if (VAR_0 <= VAR_5.log_level) {
  uuid_string_t VAR_8;
  FUNC_4(VAR_6, VAR_8);
  FUNC_0(VAR_0, &VAR_5, "Looking for process with UUID %s", VAR_8);
 }

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.found_proc = VAR_2;
 FUNC_3(VAR_7.target_uuid, VAR_6);

 FUNC_2(VAR_1, VAR_3, &VAR_7, VAR_4, &VAR_7);

 return VAR_7.found_proc;
}
