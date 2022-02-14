
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {int dummy; } ;
typedef int maps ;
struct TYPE_2__ {char* member_0; char* member_1; int format; int pattern; } ;
typedef TYPE_1__ datemap ;


 int FUNC_0 (char const*,int ,struct tm*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, struct tm *VAR_1)
{
    datemap VAR_2 = {"[0-9]{4}-[0-1]?[0-9]-[0-3]?[0-9]T[0-9]{2}:[0-9]{2}:[0-9]{2}Z", "%Y-%m-%dT%H:%M:%SZ"};

    datemap VAR_3[1] = { VAR_2 };

    for (int VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++)
    {
        if (FUNC_1(VAR_3[VAR_4].pattern, VAR_0))
        {
            FUNC_0(VAR_0, VAR_3[VAR_4].format, VAR_1);
            return 1;
        }
    }
    return 0;
}
