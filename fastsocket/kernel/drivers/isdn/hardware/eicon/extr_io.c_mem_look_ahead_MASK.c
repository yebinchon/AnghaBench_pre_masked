
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int io; } ;
struct TYPE_14__ {int * RBuffer; } ;
struct TYPE_13__ {int P; int length; } ;
struct TYPE_11__ {int length; int P; } ;
struct TYPE_12__ {TYPE_1__ RBuffer; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef TYPE_3__ PBUFFER ;
typedef TYPE_4__ ENTITY ;
typedef int DBUFFER ;
typedef TYPE_5__ ADAPTER ;


 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int *) ;

void FUNC_2 (ADAPTER *VAR_0, PBUFFER *VAR_1, ENTITY *VAR_2)
{
 PISDN_ADAPTER VAR_3 = (PISDN_ADAPTER)VAR_0->io ;
 VAR_3->RBuffer.length = FUNC_1 (VAR_0, &VAR_1->length) ;
 FUNC_0 (VAR_0, VAR_1->P, VAR_3->RBuffer.P,
                VAR_3->RBuffer.length) ;
 VAR_2->RBuffer = (DBUFFER *)&VAR_3->RBuffer ;
}
