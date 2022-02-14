
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ip ;
struct TYPE_4__ {int flags; int fd; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {char* unixsocket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int*) ;
 int FUNC_1 (char*,size_t,char*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (char*,size_t,char*,char*) ;

int FUNC_3(client *VAR_5, char *VAR_6, size_t VAR_7) {
    char VAR_8[VAR_3];
    int VAR_9;

    if (VAR_5->flags & VAR_0) {

        FUNC_2(VAR_6,VAR_7,"%s:0",VAR_4.unixsocket);
        return VAR_2;
    } else {

        int VAR_10 = FUNC_0(VAR_5->fd,VAR_8,sizeof(VAR_8),&VAR_9);
        FUNC_1(VAR_6,VAR_7,VAR_8,VAR_9);
        return (VAR_10 == -1) ? VAR_1 : VAR_2;
    }
}
