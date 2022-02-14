
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdshdr8 {size_t len; size_t alloc; char* buf; int flags; } ;
struct TYPE_4__ {int refcount; scalar_t__ notused; struct sdshdr8* ptr; int encoding; int type; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;
 TYPE_1__* FUNC_2 (int) ;

robj *FUNC_3(const char *VAR_3, size_t VAR_4) {
    robj *VAR_5 = FUNC_2(sizeof(robj)+sizeof(struct sdshdr8)+VAR_4+1);
    struct sdshdr8 *VAR_6 = (void*)(VAR_5+1);

    VAR_5->type = VAR_1;
    VAR_5->encoding = VAR_0;
    VAR_5->ptr = VAR_6+1;
    VAR_5->refcount = 1;
    VAR_5->notused = 0;

    VAR_6->len = VAR_4;
    VAR_6->alloc = VAR_4;
    VAR_6->flags = VAR_2;
    if (VAR_3) {
        FUNC_0(VAR_6->buf,VAR_3,VAR_4);
        VAR_6->buf[VAR_4] = '\0';
    } else {
        FUNC_1(VAR_6->buf,0,VAR_4+1);
    }
    return VAR_5;
}
