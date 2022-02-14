
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
struct TYPE_10__ {int flags; int fd; TYPE_2__* lastcmd; int reply; scalar_t__ bufpos; int querybuf; scalar_t__ lastinteraction; scalar_t__ ctime; TYPE_1__* name; scalar_t__ id; } ;
typedef TYPE_3__ client ;
struct TYPE_11__ {scalar_t__ unixtime; int el; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long,int ,int,char*,long long,long long,char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_4__ VAR_8 ;

sds FUNC_7(sds VAR_9, client *VAR_10) {
    char VAR_11[16], VAR_12[3], *VAR_13;
    int VAR_14;

    VAR_13 = VAR_11;
    if (VAR_10->flags & VAR_5) *VAR_13++ = 'O';
    if (VAR_10->flags & VAR_2) *VAR_13++ = 'b';
    if (VAR_10->flags & VAR_3) *VAR_13++ = 'c';
    if (VAR_10->flags & VAR_6) *VAR_13++ = 'u';
    if (VAR_10->flags & VAR_4) *VAR_13++ = 'A';
    if (VAR_10->flags & VAR_7) *VAR_13++ = 'U';
    if (VAR_13 == VAR_11) *VAR_13++ = 'N';
    *VAR_13++ = '\0';

    VAR_14 = VAR_10->fd == -1 ? 0 : FUNC_0(VAR_8.el,VAR_10->fd);
    VAR_13 = VAR_12;
    if (VAR_14 & VAR_0) *VAR_13++ = 'r';
    if (VAR_14 & VAR_1) *VAR_13++ = 'w';
    *VAR_13 = '\0';
    return FUNC_5(VAR_9,
        "id=%U addr=%s fd=%i name=%s age=%I idle=%I flags=%s qbuf=%U qbuf-free=%U obl=%U oll=%U omem=%U events=%s cmd=%s",
        (unsigned long long) VAR_10->id,
        FUNC_2(VAR_10),
        VAR_10->fd,
        VAR_10->name ? (char*)VAR_10->name->ptr : "",
        (long long)(VAR_8.unixtime - VAR_10->ctime),
        (long long)(VAR_8.unixtime - VAR_10->lastinteraction),
        VAR_11,
        (unsigned long long) FUNC_6(VAR_10->querybuf),
        (unsigned long long) FUNC_4(VAR_10->querybuf),
        (unsigned long long) VAR_10->bufpos,
        (unsigned long long) FUNC_3(VAR_10->reply),
        (unsigned long long) FUNC_1(VAR_10),
        VAR_12,
        VAR_10->lastcmd ? VAR_10->lastcmd->name : "NULL");
}
