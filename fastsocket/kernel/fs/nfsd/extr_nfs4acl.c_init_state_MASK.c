
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_user_ace_state {int dummy; } ;
struct posix_acl_state {int empty; void* users; void* groups; } ;
struct posix_ace_state_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct posix_acl_state*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct posix_acl_state *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, 0, sizeof(struct posix_acl_state));
 VAR_2->empty = 1;





 VAR_4 = sizeof(struct posix_ace_state_array)
  + VAR_3*sizeof(struct posix_user_ace_state);
 VAR_2->users = FUNC_1(VAR_4, VAR_1);
 if (!VAR_2->users)
  return -VAR_0;
 VAR_2->groups = FUNC_1(VAR_4, VAR_1);
 if (!VAR_2->groups) {
  FUNC_0(VAR_2->users);
  return -VAR_0;
 }
 return 0;
}
