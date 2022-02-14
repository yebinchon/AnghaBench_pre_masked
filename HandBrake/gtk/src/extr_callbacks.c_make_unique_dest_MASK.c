
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_7__ {int str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,int const*,int ,int,...) ;

__attribute__((used)) static void
FUNC_5(const gchar *VAR_2, GString *VAR_3, const gchar * VAR_4)
{
    GString * VAR_5 = FUNC_3(VAR_3->str);
    int VAR_6 = 0;

    FUNC_4(VAR_5, "%s/%s.%s", VAR_2, VAR_3->str, VAR_4);
    while (FUNC_0(VAR_5->str, VAR_0))
    {
        FUNC_4(VAR_5, "%s/%s (%d).%s", VAR_2, VAR_3->str, ++VAR_6, VAR_4);
    }
    if (VAR_6)
    {
        FUNC_1(VAR_3, " (%d)", VAR_6);
    }
    FUNC_2(VAR_5, VAR_1);
}
