
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_6__ {scalar_t__ mode; int err; int fd; struct TYPE_6__* path; struct TYPE_6__* in; struct TYPE_6__* out; int strm; int direct; scalar_t__ size; int skip; scalar_t__ seek; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(gzFile VAR_5)
{
    int VAR_6 = VAR_3;
    gz_statep VAR_7;


    if (VAR_5 == ((void*)0))
        return VAR_4;
    VAR_7 = (gz_statep)VAR_5;


    if (VAR_7->mode != VAR_0)
        return VAR_4;


    if (VAR_7->seek) {
        VAR_7->seek = 0;
        if (FUNC_5(VAR_7, VAR_7->skip) == -1)
            VAR_6 = VAR_7->err;
    }


    if (FUNC_3(VAR_7, VAR_2) == -1)
        VAR_6 = VAR_7->err;
    if (VAR_7->size) {
        if (!VAR_7->direct) {
            (void)FUNC_1(&(VAR_7->strm));
            FUNC_2(VAR_7->out);
        }
        FUNC_2(VAR_7->in);
    }
    FUNC_4(VAR_7, VAR_3, ((void*)0));
    FUNC_2(VAR_7->path);
    if (FUNC_0(VAR_7->fd) == -1)
        VAR_6 = VAR_1;
    FUNC_2(VAR_7);
    return VAR_6;
}
