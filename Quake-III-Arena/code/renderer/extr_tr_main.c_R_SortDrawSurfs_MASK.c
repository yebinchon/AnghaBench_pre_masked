
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sort; int name; } ;
typedef TYPE_1__ shader_t ;
struct TYPE_11__ {int sort; } ;
typedef TYPE_2__ drawSurf_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int (* Error ) (int ,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int*,TYPE_1__**,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5( drawSurf_t *VAR_6, int VAR_7 ) {
 shader_t *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;


 if ( VAR_7 < 1 ) {

  FUNC_0( VAR_6, VAR_7 );
  return;
 }




 if ( VAR_7 > VAR_1 ) {
  VAR_7 = VAR_1;
 }


 FUNC_3 (VAR_6, VAR_7, sizeof(drawSurf_t) );



 for ( VAR_12 = 0 ; VAR_12 < VAR_7 ; VAR_12++ ) {
  FUNC_1( (VAR_6+VAR_12)->sort, &VAR_10, &VAR_8, &VAR_9, &VAR_11 );

  if ( VAR_8->sort > VAR_3 ) {
   break;
  }


  if ( VAR_8->sort == VAR_2 ) {
   VAR_5.Error (VAR_0, "Shader '%s'with sort == SS_BAD", VAR_8->name );
  }


  if ( FUNC_2( (VAR_6+VAR_12), VAR_10) ) {

   if ( VAR_4->integer ) {
    return;
   }
   break;
  }
 }

 FUNC_0( VAR_6, VAR_7 );
}
