
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum database_type { ____Placeholder_database_type } database_type ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ database_info_handle_t ;


 int VAR_0 ;

__attribute__((used)) static enum database_type FUNC_0(
      database_info_handle_t *VAR_1)
{
   if (!VAR_1)
      return VAR_0;
   return VAR_1->type;
}
