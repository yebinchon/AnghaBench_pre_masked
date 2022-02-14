
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int page; scalar_t__ currentmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_1( void* VAR_4, int VAR_5 ) {
 if( VAR_5 != VAR_2) {
  return;
 }

 VAR_3.currentmap = (VAR_3.page*VAR_1) + (((menucommon_s*)VAR_4)->id - VAR_0);
 FUNC_0();
}
