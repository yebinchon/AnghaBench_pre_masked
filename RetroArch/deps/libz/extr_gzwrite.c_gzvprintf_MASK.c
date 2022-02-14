
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef int va_list ;
typedef TYPE_3__* gz_statep ;
typedef int * gzFile ;
struct TYPE_7__ {int pos; } ;
struct TYPE_8__ {unsigned int avail_in; scalar_t__* next_in; } ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ err; scalar_t__* in; TYPE_1__ x; scalar_t__ size; int skip; scalar_t__ seek; TYPE_2__ strm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char const*,int ) ;
 int FUNC_5 (char*,char const*,int ) ;

int FUNC_6(gzFile VAR_3, const char *VAR_4, va_list VAR_5)
{
    int VAR_6, VAR_7;
    gz_statep VAR_8;
    z_streamp VAR_9;


    if (VAR_3 == ((void*)0))
        return -1;
    VAR_8 = (gz_statep)VAR_3;
    VAR_9 = &(VAR_8->strm);


    if (VAR_8->mode != VAR_0 || VAR_8->err != VAR_2)
        return 0;


    if (VAR_8->size == 0 && FUNC_1(VAR_8) == -1)
        return 0;


    if (VAR_8->seek) {
        VAR_8->seek = 0;
        if (FUNC_2(VAR_8, VAR_8->skip) == -1)
            return 0;
    }


    if (VAR_9->avail_in && FUNC_0(VAR_8, VAR_1) == -1)
        return 0;


    VAR_6 = (int)(VAR_8->size);
    VAR_8->in[VAR_6 - 1] = 0;
    VAR_7 = FUNC_4((char *)(VAR_8->in), VAR_6, VAR_4, VAR_5);




    if (VAR_7 <= 0 || VAR_7 >= (int)VAR_6 || VAR_8->in[VAR_6 - 1] != 0)
        return 0;


    VAR_9->avail_in = (unsigned)VAR_7;
    VAR_9->next_in = VAR_8->in;
    VAR_8->x.pos += VAR_7;
    return VAR_7;
}
