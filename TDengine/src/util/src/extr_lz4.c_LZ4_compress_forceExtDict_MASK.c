
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int dictSize; int currentOffset; int const* dictionary; } ;
struct TYPE_7__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t_internal ;
typedef TYPE_2__ LZ4_stream_t ;
typedef int const BYTE ;


 int FUNC_0 (TYPE_1__*,char const*,char*,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2 (LZ4_stream_t* VAR_4, const char* VAR_5, char* VAR_6, int VAR_7)
{
    LZ4_stream_t_internal* VAR_8 = &VAR_4->internal_donotuse;
    int VAR_9;
    const BYTE* const VAR_10 = VAR_8->dictionary + VAR_8->dictSize;

    const BYTE* VAR_11 = VAR_10;
    if (VAR_11 > (const BYTE*) VAR_5) VAR_11 = (const BYTE*) VAR_5;
    FUNC_1(VAR_8, VAR_11);

    VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7, 0, VAR_2, VAR_0, VAR_3, VAR_1, 1);

    VAR_8->dictionary = (const BYTE*)VAR_5;
    VAR_8->dictSize = (U32)VAR_7;
    VAR_8->currentOffset += (U32)VAR_7;

    return VAR_9;
}
