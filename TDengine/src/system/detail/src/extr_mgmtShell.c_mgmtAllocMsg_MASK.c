
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int thandle; } ;
typedef int STaosRsp ;
typedef TYPE_1__ SConnObj ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1(SConnObj *VAR_1, int32_t VAR_2, char **VAR_3, STaosRsp **VAR_4) {
  char *VAR_5 = FUNC_0(VAR_1->thandle, VAR_0, VAR_2);
  if (VAR_5 == ((void*)0)) return 0;
  *VAR_3 = VAR_5;
  *VAR_4 = (STaosRsp *)(*VAR_3);

  return VAR_5;
}
