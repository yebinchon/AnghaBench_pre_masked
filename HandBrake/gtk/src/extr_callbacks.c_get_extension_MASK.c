
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_6__ {int format; char const* default_extension; } ;
typedef TYPE_2__ hb_container_t ;
typedef char gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 char* FUNC_1 (int *,char*) ;
 TYPE_2__* FUNC_2 (char const*) ;

__attribute__((used)) static const gchar*
FUNC_3(signal_user_data_t *VAR_1, GhbValue *VAR_2)
{
    const char *VAR_3;
    const hb_container_t *VAR_4;

    VAR_3 = FUNC_1(VAR_2, "FileFormat");
    VAR_4 = FUNC_2(VAR_3);

    if ((VAR_4->format & VAR_0) &&
        FUNC_0(VAR_1->prefs, "UseM4v"))
    {
        return "m4v";
    }
    return VAR_4->default_extension;
}
