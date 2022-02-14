
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telnet_info {int has_auth; int has_arch; int port; int addr; int arch; int pass; int user; } ;
typedef int port_t ;
typedef int ipv4_t ;


 int FUNC_0 (int ,char*) ;

struct telnet_info *FUNC_1(char *VAR_0, char *VAR_1, char *VAR_2, ipv4_t VAR_3, port_t VAR_4, struct telnet_info *VAR_5)
{
    if (VAR_0 != ((void*)0))
        FUNC_0(VAR_5->user, VAR_0);
    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_5->pass, VAR_1);
    if (VAR_2 != ((void*)0))
        FUNC_0(VAR_5->arch, VAR_2);
    VAR_5->addr = VAR_3;
    VAR_5->port = VAR_4;

    VAR_5->has_auth = VAR_0 != ((void*)0) || VAR_1 != ((void*)0);
    VAR_5->has_arch = VAR_2 != ((void*)0);

    return VAR_5;
}
