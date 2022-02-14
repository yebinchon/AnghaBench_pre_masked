
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ gametype; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,int ,int ) ;
 float FUNC_4 (float) ;
 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5( void ) {
 float VAR_8;

 VAR_8 = 0;

 if ( VAR_6.gametype >= VAR_0 && VAR_4.integer == 1 ) {
  VAR_8 = FUNC_3( VAR_8, VAR_7, VAR_7 );
 }
 if ( VAR_3.integer ) {
  VAR_8 = FUNC_2( VAR_8 );
 }
 if ( VAR_2.integer ) {
  VAR_8 = FUNC_1( VAR_8 );
 }
 if ( VAR_5.integer ) {
  VAR_8 = FUNC_4( VAR_8 );
 }
 if ( VAR_1.integer ) {
  VAR_8 = FUNC_0( VAR_8 );
 }

}
