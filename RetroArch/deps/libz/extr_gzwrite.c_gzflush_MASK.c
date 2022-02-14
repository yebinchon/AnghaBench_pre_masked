
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_4__ {scalar_t__ mode; scalar_t__ err; int skip; scalar_t__ seek; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(gzFile VAR_4, int VAR_5)
{
    gz_statep VAR_6;


    if (VAR_4 == ((void*)0))
        return -1;
    VAR_6 = (gz_statep)VAR_4;


    if (VAR_6->mode != VAR_0 || VAR_6->err != VAR_2)
        return VAR_3;


    if (VAR_5 < 0 || VAR_5 > VAR_1)
        return VAR_3;


    if (VAR_6->seek) {
        VAR_6->seek = 0;
        if (FUNC_1(VAR_6, VAR_6->skip) == -1)
            return -1;
    }


    FUNC_0(VAR_6, VAR_5);
    return VAR_6->err;
}
