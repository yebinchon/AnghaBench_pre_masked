
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int adrstr; } ;
typedef TYPE_3__ servernode_t ;
struct TYPE_6__ {size_t curvalue; } ;
struct TYPE_8__ {TYPE_2__ list; TYPE_1__* table; } ;
struct TYPE_5__ {TYPE_3__* servernode; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2( void ) {
 servernode_t* VAR_2;

 VAR_2 = VAR_1.table[VAR_1.list.curvalue].servernode;
 if( VAR_2 ) {
  FUNC_0( VAR_0, FUNC_1( "connect %s\n", VAR_2->adrstr ) );
 }
}
