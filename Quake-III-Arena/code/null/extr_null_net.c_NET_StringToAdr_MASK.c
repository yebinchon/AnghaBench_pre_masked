
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ netadr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,char*) ;

qboolean FUNC_2 (char *VAR_1, netadr_t *VAR_2)
{
 if (!FUNC_1 (VAR_1, "localhost")) {
  FUNC_0 (VAR_2, 0, sizeof(*VAR_2));
  VAR_2->type = VAR_0;
  return 1;
 }

 return 0;
}
