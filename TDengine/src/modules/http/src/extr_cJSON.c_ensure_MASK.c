
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* deallocate ) (unsigned char*) ;scalar_t__ (* allocate ) (size_t) ;scalar_t__ (* reallocate ) (unsigned char*,size_t) ;} ;
struct TYPE_5__ {unsigned char* buffer; size_t length; size_t offset; TYPE_1__ hooks; scalar_t__ noalloc; } ;
typedef TYPE_2__ printbuffer ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static unsigned char* FUNC_6(printbuffer * const VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    size_t VAR_4 = 0;

    if ((VAR_1 == ((void*)0)) || (VAR_1->buffer == ((void*)0)))
    {
        return ((void*)0);
    }

    if ((VAR_1->length > 0) && (VAR_1->offset >= VAR_1->length))
    {

        return ((void*)0);
    }

    if (VAR_2 > VAR_0)
    {

        return ((void*)0);
    }

    VAR_2 += VAR_1->offset + 1;
    if (VAR_2 <= VAR_1->length)
    {
        return VAR_1->buffer + VAR_1->offset;
    }

    if (VAR_1->noalloc) {
        return ((void*)0);
    }


    if (VAR_2 > (VAR_0 / 2))
    {

        if (VAR_2 <= VAR_0)
        {
            VAR_4 = VAR_0;
        }
        else
        {
            return ((void*)0);
        }
    }
    else
    {
        VAR_4 = VAR_2 * 2;
    }

    if (VAR_1->hooks.reallocate != ((void*)0))
    {

        VAR_3 = (unsigned char*)VAR_1->hooks.reallocate(VAR_1->buffer, VAR_4);
        if (VAR_3 == ((void*)0))
        {
            VAR_1->hooks.deallocate(VAR_1->buffer);
            VAR_1->length = 0;
            VAR_1->buffer = ((void*)0);

            return ((void*)0);
        }
    }
    else
    {

        VAR_3 = (unsigned char*)VAR_1->hooks.allocate(VAR_4);
        if (!VAR_3)
        {
            VAR_1->hooks.deallocate(VAR_1->buffer);
            VAR_1->length = 0;
            VAR_1->buffer = ((void*)0);

            return ((void*)0);
        }
        if (VAR_3)
        {
            FUNC_0(VAR_3, VAR_1->buffer, VAR_1->offset + 1);
        }
        VAR_1->hooks.deallocate(VAR_1->buffer);
    }
    VAR_1->length = VAR_4;
    VAR_1->buffer = VAR_3;

    return VAR_3 + VAR_1->offset;
}
