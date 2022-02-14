
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* hostsocket; char* hostip; int hostport; } ;
struct TYPE_6__ {char* errstr; int fd; scalar_t__ err; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_5__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* FUNC_4 (char*,int) ;
 TYPE_1__* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(int VAR_6) {
    if (VAR_4 == ((void*)0) || VAR_6) {
        if (VAR_4 != ((void*)0))
            FUNC_6(VAR_4);

        if (VAR_3.hostsocket == ((void*)0)) {
            VAR_4 = FUNC_4(VAR_3.hostip,VAR_3.hostport);
        } else {
            VAR_4 = FUNC_5(VAR_3.hostsocket);
        }

        if (VAR_4->err) {
            FUNC_3(VAR_5,"Could not connect to Disque at ");
            if (VAR_3.hostsocket == ((void*)0))
                FUNC_3(VAR_5,"%s:%d: %s\n",VAR_3.hostip,VAR_3.hostport,VAR_4->errstr);
            else
                FUNC_3(VAR_5,"%s: %s\n",VAR_3.hostsocket,VAR_4->errstr);
            FUNC_6(VAR_4);
            VAR_4 = ((void*)0);
            return VAR_1;
        }





        FUNC_0(((void*)0), VAR_4->fd, VAR_0);


        if (FUNC_1() != VAR_2)
            return VAR_1;
        if (FUNC_2() != VAR_2)
            return VAR_1;
    }
    return VAR_2;
}
