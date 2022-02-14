
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buffer; } ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {int (* Unlock ) (TYPE_2__*,int ,int ,int *,int ) ;} ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int *,int ) ;

void FUNC_1( void ) {

 if ( VAR_2 ) {
  VAR_2->lpVtbl->Unlock(VAR_2, VAR_0.buffer, VAR_1, ((void*)0), 0);
 }
}
