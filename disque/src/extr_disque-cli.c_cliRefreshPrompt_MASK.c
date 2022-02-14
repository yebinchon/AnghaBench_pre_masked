
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* hostsocket; int dbnum; scalar_t__ last_cmd_type; scalar_t__ prompt; int hostip; int hostport; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,char*,...) ;
 scalar_t__ FUNC_1 (int ,char) ;

__attribute__((used)) static void FUNC_2(void) {
    int VAR_2;

    if (VAR_1.hostsocket != ((void*)0))
        VAR_2 = FUNC_0(VAR_1.prompt,sizeof(VAR_1.prompt),"disque %s",
                       VAR_1.hostsocket);
    else
        VAR_2 = FUNC_0(VAR_1.prompt,sizeof(VAR_1.prompt),
                       FUNC_1(VAR_1.hostip,':') ? "[%s]:%d" : "%s:%d",
                       VAR_1.hostip, VAR_1.hostport);

    if (VAR_1.dbnum != 0 && VAR_1.last_cmd_type != VAR_0)
        VAR_2 += FUNC_0(VAR_1.prompt+VAR_2,sizeof(VAR_1.prompt)-VAR_2,"[%d]",
            VAR_1.dbnum);
    FUNC_0(VAR_1.prompt+VAR_2,sizeof(VAR_1.prompt)-VAR_2,"> ");
}
