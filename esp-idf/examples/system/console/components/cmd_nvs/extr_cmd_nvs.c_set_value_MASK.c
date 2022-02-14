
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* value; TYPE_2__* type; TYPE_1__* key; int end; } ;
struct TYPE_7__ {char** sval; } ;
struct TYPE_6__ {char** sval; } ;
struct TYPE_5__ {char** sval; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char const*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(int VAR_4, char **VAR_5)
{
    int VAR_6 = FUNC_1(VAR_4, VAR_5, (void **) &VAR_2);
    if (VAR_6 != 0) {
        FUNC_2(VAR_3, VAR_2.end, VAR_5[0]);
        return 1;
    }

    const char *VAR_7 = VAR_2.key->sval[0];
    const char *VAR_8 = VAR_2.type->sval[0];
    const char *VAR_9 = VAR_2.value->sval[0];

    esp_err_t VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9);

    if (VAR_10 != VAR_0) {
        FUNC_0(VAR_1, "%s", FUNC_3(VAR_10));
        return 1;
    }

    return 0;
}
