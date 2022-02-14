
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef TYPE_2__* gz_statep ;
typedef int * gzFile ;
struct TYPE_6__ {scalar_t__ avail_in; } ;
struct TYPE_7__ {scalar_t__ mode; scalar_t__ err; int level; int strategy; scalar_t__ size; int skip; scalar_t__ seek; TYPE_1__ strm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

int FUNC_3(gzFile VAR_4, int VAR_5, int VAR_6)
{
    gz_statep VAR_7;
    z_streamp VAR_8;


    if (VAR_4 == ((void*)0))
        return VAR_3;
    VAR_7 = (gz_statep)VAR_4;
    VAR_8 = &(VAR_7->strm);


    if (VAR_7->mode != VAR_0 || VAR_7->err != VAR_1)
        return VAR_3;


    if (VAR_5 == VAR_7->level && VAR_6 == VAR_7->strategy)
        return VAR_1;


    if (VAR_7->seek) {
        VAR_7->seek = 0;
        if (FUNC_2(VAR_7, VAR_7->skip) == -1)
            return -1;
    }


    if (VAR_7->size) {

        if (VAR_8->avail_in && FUNC_1(VAR_7, VAR_2) == -1)
            return VAR_7->err;
        FUNC_0(VAR_8, VAR_5, VAR_6);
    }
    VAR_7->level = VAR_5;
    VAR_7->strategy = VAR_6;
    return VAR_1;
}
