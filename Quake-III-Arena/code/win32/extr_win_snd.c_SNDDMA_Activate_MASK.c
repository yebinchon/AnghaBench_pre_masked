
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hWnd; } ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {scalar_t__ (* SetCooperativeLevel ) (TYPE_2__*,int ,int ) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_4__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;

void FUNC_3( void ) {
 if ( !VAR_3 ) {
  return;
 }

 if ( VAR_1 != VAR_3->lpVtbl->SetCooperativeLevel( VAR_3, VAR_2.hWnd, VAR_0 ) ) {
  FUNC_0 ("sound SetCooperativeLevel failed\n");
  FUNC_1 ();
 }
}
