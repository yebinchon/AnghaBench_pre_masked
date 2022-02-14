
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct necp_session {int dummy; } ;
struct fileglob {int * fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct necp_session*) ;
 int FUNC_1 (struct necp_session*) ;
 int FUNC_2 (struct necp_session*) ;

__attribute__((used)) static int
FUNC_3(struct fileglob *VAR_1, vfs_context_t VAR_2)
{
#pragma unused(ctx)
 struct necp_session *VAR_3 = (struct necp_session *)VAR_1->fg_data;
 VAR_1->fg_data = ((void*)0);

 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
  return (0);
 } else {
  return (VAR_0);
 }
}
