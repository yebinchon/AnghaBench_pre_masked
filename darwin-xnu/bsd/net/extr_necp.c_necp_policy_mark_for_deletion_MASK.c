
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_policy {int pending_deletion; } ;
struct necp_session {int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_1(struct necp_session *VAR_4, struct necp_session_policy *VAR_5)
{
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  return (VAR_0);
 }

 VAR_5->pending_deletion = VAR_2;
 VAR_4->dirty = VAR_2;

 if (VAR_3) {
  FUNC_0(VAR_1, "Marked NECP policy for removal");
 }
 return (VAR_2);
}
