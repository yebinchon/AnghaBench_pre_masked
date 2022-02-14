
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {TYPE_1__* key; int end; } ;
struct TYPE_3__ {char** sval; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(int VAR_4, char **VAR_5)
{
    int VAR_6 = FUNC_1(VAR_4, VAR_5, (void **) &VAR_2);
    if (VAR_6 != 0) {
        FUNC_2(VAR_3, VAR_2.end, VAR_5[0]);
        return 1;
    }

    const char *VAR_7 = VAR_2.key->sval[0];

    esp_err_t VAR_8 = FUNC_3(VAR_7);

    if (VAR_8 != VAR_0) {
        FUNC_0(VAR_1, "%s", FUNC_4(VAR_8));
        return 1;
    }

    return 0;
}
