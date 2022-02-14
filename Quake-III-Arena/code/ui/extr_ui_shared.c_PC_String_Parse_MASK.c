
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int string; } ;
typedef TYPE_1__ pc_token_t ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,TYPE_1__*) ;

qboolean FUNC_2(int VAR_2, const char **VAR_3) {
 pc_token_t VAR_4;

 if (!FUNC_1(VAR_2, &VAR_4))
  return VAR_0;

 *(VAR_3) = FUNC_0(VAR_4.string);
    return VAR_1;
}
