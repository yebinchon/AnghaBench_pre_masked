
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct necp_uuid_id_mapping {int uuid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct necp_uuid_id_mapping* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(u_int32_t *VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct necp_uuid_id_mapping *VAR_8 = ((void*)0);
  u_int32_t VAR_9 = VAR_5[VAR_7];
  if (VAR_9 == 0) {
   break;
  }
  VAR_8 = FUNC_0(VAR_9);
  if (VAR_8 != ((void*)0)) {
   u_int32_t VAR_10 = 0;
   VAR_10 = FUNC_1(VAR_8->uuid);
   if (VAR_10 & VAR_2) {
    if (VAR_10 & VAR_1) {
     continue;
    } else if ((VAR_10 & VAR_3) == 0) {
     return (VAR_0);
    }
   }
  }
 }
 return (VAR_4);
}
