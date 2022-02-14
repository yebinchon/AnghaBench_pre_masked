
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telnet_info {int dummy; } ;
typedef int port_t ;
typedef int ipv4_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;
 struct telnet_info* FUNC_5 (char*,char*,char*,int ,int ,struct telnet_info*) ;

struct telnet_info *FUNC_6(char *VAR_0, struct telnet_info *VAR_1)
{
    char *VAR_2, *VAR_3, *VAR_4;
    char *VAR_5, *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    ipv4_t VAR_9;
    port_t VAR_10;

    if ((VAR_2 = FUNC_4(VAR_0, " ")) == ((void*)0))
        return ((void*)0);
    if ((VAR_3 = FUNC_4(((void*)0), " ")) == ((void*)0))
        return ((void*)0);
    VAR_4 = FUNC_4(((void*)0), " ");

    if ((VAR_5 = FUNC_4(VAR_2, ":")) == ((void*)0))
        return ((void*)0);
    if ((VAR_6 = FUNC_4(((void*)0), ":")) == ((void*)0))
        return ((void*)0);

    if (FUNC_3(VAR_3) == 1)
    {
        if (VAR_3[0] == ':')
        {
            VAR_7 = "";
            VAR_8 = "";
        }
        else if (VAR_3[0] != '?')
            return ((void*)0);
    }
    else
    {
        VAR_7 = FUNC_4(VAR_3, ":");
        VAR_8 = FUNC_4(((void*)0), ":");
    }

    VAR_9 = FUNC_2(VAR_5);
    VAR_10 = FUNC_1(FUNC_0(VAR_6));

    return FUNC_5(VAR_7, VAR_8, VAR_4, VAR_9, VAR_10, VAR_1);
}
