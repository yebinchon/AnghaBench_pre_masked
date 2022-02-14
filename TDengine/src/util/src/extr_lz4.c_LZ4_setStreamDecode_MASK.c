
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t prefixSize; scalar_t__ extDictSize; int * externalDict; int const* prefixEnd; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamDecode_t_internal ;
typedef TYPE_2__ LZ4_streamDecode_t ;
typedef int BYTE ;



int FUNC_0 (LZ4_streamDecode_t* VAR_0, const char* VAR_1, int VAR_2)
{
    LZ4_streamDecode_t_internal* VAR_3 = &VAR_0->internal_donotuse;
    VAR_3->prefixSize = (size_t) VAR_2;
    VAR_3->prefixEnd = (const BYTE*) VAR_1 + VAR_2;
    VAR_3->externalDict = ((void*)0);
    VAR_3->extDictSize = 0;
    return 1;
}
