
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef char const* voidpc ;
typedef TYPE_3__* gz_statep ;
typedef int * gzFile ;
struct TYPE_8__ {unsigned int pos; } ;
struct TYPE_9__ {scalar_t__ avail_in; scalar_t__ next_in; } ;
struct TYPE_10__ {scalar_t__ mode; scalar_t__ err; scalar_t__ size; scalar_t__ in; TYPE_1__ x; int skip; scalar_t__ seek; TYPE_2__ strm; } ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (scalar_t__,char const*,unsigned int) ;

int FUNC_5(gzFile VAR_4, voidpc VAR_5, unsigned VAR_6)
{
    unsigned VAR_7 = VAR_6;
    gz_statep VAR_8;
    z_streamp VAR_9;


    if (VAR_4 == ((void*)0))
        return 0;
    VAR_8 = (gz_statep)VAR_4;
    VAR_9 = &(VAR_8->strm);


    if (VAR_8->mode != VAR_0 || VAR_8->err != VAR_3)
        return 0;



    if ((int)VAR_6 < 0) {
        FUNC_1(VAR_8, VAR_1, "requested length does not fit in int");
        return 0;
    }


    if (VAR_6 == 0)
        return 0;


    if (VAR_8->size == 0 && FUNC_2(VAR_8) == -1)
        return 0;


    if (VAR_8->seek) {
        VAR_8->seek = 0;
        if (FUNC_3(VAR_8, VAR_8->skip) == -1)
            return 0;
    }


    if (VAR_6 < VAR_8->size) {

        do {
            unsigned VAR_10, VAR_11;

            if (VAR_9->avail_in == 0)
                VAR_9->next_in = VAR_8->in;
            VAR_10 = (unsigned)((VAR_9->next_in + VAR_9->avail_in) - VAR_8->in);
            VAR_11 = VAR_8->size - VAR_10;
            if (VAR_11 > VAR_6)
                VAR_11 = VAR_6;
            FUNC_4(VAR_8->in + VAR_10, VAR_5, VAR_11);
            VAR_9->avail_in += VAR_11;
            VAR_8->x.pos += VAR_11;
            VAR_5 = (const char *)VAR_5 + VAR_11;
            VAR_6 -= VAR_11;
            if (VAR_6 && FUNC_0(VAR_8, VAR_2) == -1)
                return 0;
        } while (VAR_6);
    }
    else {

        if (VAR_9->avail_in && FUNC_0(VAR_8, VAR_2) == -1)
            return 0;


        VAR_9->avail_in = VAR_6;
        VAR_9->next_in = (Bytef *)VAR_5;
        VAR_8->x.pos += VAR_6;
        if (FUNC_0(VAR_8, VAR_2) == -1)
            return 0;
    }


    return (int)VAR_7;
}
