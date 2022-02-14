
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fastMode; scalar_t__ tableLog; } ;
struct TYPE_3__ {scalar_t__ nbBits; int symbol; scalar_t__ newState; } ;
typedef TYPE_1__ FSEv06_decode_t ;
typedef TYPE_2__ FSEv06_DTableHeader ;
typedef int FSEv06_DTable ;
typedef int BYTE ;



size_t FUNC_0 (FSEv06_DTable* VAR_0, BYTE VAR_1)
{
    void* VAR_2 = VAR_0;
    FSEv06_DTableHeader* const VAR_3 = (FSEv06_DTableHeader*)VAR_2;
    void* VAR_4 = VAR_0 + 1;
    FSEv06_decode_t* const VAR_5 = (FSEv06_decode_t*)VAR_4;

    VAR_3->tableLog = 0;
    VAR_3->fastMode = 0;

    VAR_5->newState = 0;
    VAR_5->symbol = VAR_1;
    VAR_5->nbBits = 0;

    return 0;
}
