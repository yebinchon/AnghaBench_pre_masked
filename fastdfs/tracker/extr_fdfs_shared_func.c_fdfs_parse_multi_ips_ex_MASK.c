
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__* ips; scalar_t__ index; } ;
struct TYPE_4__ {char* address; scalar_t__ type; } ;
typedef TYPE_2__ FDFSMultiIP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int VAR_4 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int const,char*,char*,...) ;
 int FUNC_4 (char*,char,char**,int) ;

int FUNC_5(char *VAR_5, FDFSMultiIP *VAR_6,
        char *VAR_7, const int VAR_8, const bool VAR_9)
{
    char *VAR_10[VAR_2];
    int VAR_11;

    VAR_6->index = 0;
    VAR_6->count = FUNC_4(VAR_5, ',', VAR_10, VAR_2);
    for (VAR_11=0; VAR_11<VAR_6->count; VAR_11++)
    {
        if (VAR_9)
        {
            if (FUNC_1(VAR_10[VAR_11], VAR_6->ips[VAR_11].address,
                        sizeof(VAR_6->ips[VAR_11].address)) == VAR_3)
            {
                FUNC_3(VAR_7, VAR_8,
                        "host \"%s\" is invalid, error info: %s",
                        VAR_10[VAR_11], FUNC_2(VAR_4));
                return VAR_0;
            }
        }
        else
        {
            FUNC_3(VAR_6->ips[VAR_11].address,
                    sizeof(VAR_6->ips[VAR_11].address), "%s", VAR_10[VAR_11]);
        }

        VAR_6->ips[VAR_11].type = FUNC_0(VAR_6->ips[VAR_11].address);
        if (VAR_6->ips[VAR_11].type == VAR_1)
        {
            FUNC_3(VAR_7, VAR_8,
                    "ip address \"%s\" is invalid",
                    VAR_6->ips[VAR_11].address);
            return VAR_0;
        }
    }

    *VAR_7 = '\0';
    return 0;
}
