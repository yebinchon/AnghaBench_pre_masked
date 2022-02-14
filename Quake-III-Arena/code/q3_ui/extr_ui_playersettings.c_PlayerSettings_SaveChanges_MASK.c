
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {size_t curvalue; } ;
struct TYPE_8__ {int curvalue; } ;
struct TYPE_6__ {int buffer; } ;
struct TYPE_7__ {TYPE_1__ field; } ;
struct TYPE_10__ {TYPE_4__ effects; TYPE_3__ handicap; TYPE_2__ name; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2( void ) {

 FUNC_0( "name", VAR_0.name.field.buffer );


 FUNC_1( "handicap", 100 - VAR_0.handicap.curvalue * 5 );


 FUNC_1( "color1", VAR_1[VAR_0.effects.curvalue] );
}
