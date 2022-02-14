
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_14__ {scalar_t__ modified; } ;
struct TYPE_13__ {scalar_t__ modified; } ;
struct TYPE_12__ {scalar_t__ modified; } ;
struct TYPE_11__ {scalar_t__ modified; } ;
struct TYPE_10__ {scalar_t__ modified; } ;
struct TYPE_9__ {scalar_t__ modified; } ;
struct TYPE_8__ {scalar_t__ modified; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,char*,int) ;
 TYPE_7__* VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static qboolean FUNC_1( void ) {
 qboolean VAR_11;

 VAR_11 = VAR_9;

 if( VAR_3 && VAR_3->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_3 = FUNC_0( "net_noudp", "0", VAR_1 | VAR_0 );

 if( VAR_2 && VAR_2->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_2 = FUNC_0( "net_noipx", "0", VAR_1 | VAR_0 );


 if( VAR_4 && VAR_4->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_4 = FUNC_0( "net_socksEnabled", "0", VAR_1 | VAR_0 );

 if( VAR_7 && VAR_7->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_7 = FUNC_0( "net_socksServer", "", VAR_1 | VAR_0 );

 if( VAR_6 && VAR_6->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_6 = FUNC_0( "net_socksPort", "1080", VAR_1 | VAR_0 );

 if( VAR_8 && VAR_8->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_8 = FUNC_0( "net_socksUsername", "", VAR_1 | VAR_0 );

 if( VAR_5 && VAR_5->modified ) {
  VAR_11 = VAR_10;
 }
 VAR_5 = FUNC_0( "net_socksPassword", "", VAR_1 | VAR_0 );


 return VAR_11;
}
