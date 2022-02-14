
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long cBuffers; int * pBuffers; int ulVersion; } ;
typedef TYPE_1__ SecBufferDesc ;
typedef int SecBuffer ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SecBufferDesc *VAR_1, SecBuffer *VAR_2,
                                 unsigned long VAR_3)
{
    VAR_1->ulVersion = VAR_0;
    VAR_1->pBuffers = VAR_2;
    VAR_1->cBuffers = VAR_3;
}
