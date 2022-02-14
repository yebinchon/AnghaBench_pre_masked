
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int grank_status; } ;
struct TYPE_3__ {int value; } ;




 int VAR_0 ;





 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_1( int VAR_4 )
{
 if( !VAR_2 )
 {
  return;
 }

 FUNC_0( VAR_1 != ((void*)0) );
 FUNC_0( VAR_4 >= 0 );
 FUNC_0( VAR_4 < VAR_3->value );

 switch( VAR_1[VAR_4].grank_status )
 {
 case 130:
 case 131:
 case 134:
 case 128:
 case 132:
 case 129:
 case 133:
  VAR_1[VAR_4].grank_status = VAR_0;
  break;
 default:
  break;
 }
}
