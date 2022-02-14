
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int grank_status_t ;
struct TYPE_4__ {int grank_status; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

grank_status_t FUNC_1( int VAR_4 )
{
 if( !VAR_2 )
 {
  return VAR_0;
 }

 FUNC_0( VAR_1 != ((void*)0) );
 FUNC_0( VAR_4 >= 0 );
 FUNC_0( VAR_4 < VAR_3->value );

 return VAR_1[VAR_4].grank_status;
}
