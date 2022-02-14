
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uuid_command {int cmdsize; int * uuid; } ;
typedef int load_return_t ;
struct TYPE_3__ {int * uuid; } ;
typedef TYPE_1__ load_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static
load_return_t
FUNC_1(
 struct uuid_command *VAR_2,
 char *VAR_3,
 load_result_t *VAR_4
)
{






  if ((VAR_2->cmdsize < sizeof(struct uuid_command)) ||
      (((char *)VAR_2 + sizeof(struct uuid_command)) > VAR_3)) {
   return (VAR_0);
  }

  FUNC_0(&VAR_4->uuid[0], &VAR_2->uuid[0], sizeof(VAR_4->uuid));
  return (VAR_1);
}
