
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VC_MEM_ADDR_T ;
typedef TYPE_1__* VC_MEM_ACCESS_HANDLE_T ;
struct TYPE_5__ {size_t size; scalar_t__ addr; int label; } ;
typedef TYPE_2__ VC_DEBUG_SYMBOL_T ;
struct TYPE_4__ {unsigned int numSymbols; TYPE_2__* symbol; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;

int FUNC_1( VC_MEM_ACCESS_HANDLE_T VAR_1, unsigned VAR_2, char *VAR_3, size_t VAR_4, VC_MEM_ADDR_T *VAR_5, size_t *VAR_6 )
{
    VC_DEBUG_SYMBOL_T *VAR_7;

    if ( VAR_2 >= VAR_1->numSymbols )
    {
        return -VAR_0;
    }
    VAR_7 = &VAR_1->symbol[ VAR_2 ];

    FUNC_0( VAR_3, VAR_7->label, VAR_4 );
    VAR_3[VAR_4 - 1] = '\0';

    if ( VAR_5 != ((void*)0) )
    {
        *VAR_5 = (VC_MEM_ADDR_T)VAR_7->addr;
    }
    if ( VAR_6 != ((void*)0) )
    {
        *VAR_6 = VAR_7->size;
    }

    return 0;
}
