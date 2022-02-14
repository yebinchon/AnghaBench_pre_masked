
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_4__ {scalar_t__ (* key ) (int) ;} ;
struct TYPE_3__ {TYPE_2__* activemenu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_1__ VAR_2 ;

void FUNC_3( int VAR_3, int VAR_4 ) {
 sfxHandle_t VAR_5;

 if (!VAR_2.activemenu) {
  return;
 }

 if (!VAR_4) {
  return;
 }

 if (VAR_2.activemenu->key)
  VAR_5 = VAR_2.activemenu->key( VAR_3 );
 else
  VAR_5 = FUNC_0( VAR_2.activemenu, VAR_3 );

 if ((VAR_5 > 0) && (VAR_5 != VAR_1))
  FUNC_2( VAR_5, VAR_0 );
}
