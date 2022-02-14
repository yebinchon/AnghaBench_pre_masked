
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* snap; } ;
struct TYPE_7__ {int icon; } ;
struct TYPE_5__ {int* stats; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;


 int FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_2( void ) {
 int VAR_5;

 VAR_5 = VAR_3.snap->ps.stats[VAR_2];
 if ( VAR_5 ) {
  FUNC_1( VAR_5 );
  FUNC_0( 640-VAR_0, (VAR_1-VAR_0)/2, VAR_0, VAR_0, VAR_4[ VAR_5 ].icon );
 }

}
