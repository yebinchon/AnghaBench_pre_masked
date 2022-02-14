
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int renderfx; } ;
struct TYPE_6__ {int* ambientLight; int* directedLight; TYPE_1__ e; } ;
typedef TYPE_2__ trRefEntity_t ;
struct TYPE_7__ {int (* Printf ) (int ,char*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1( trRefEntity_t *VAR_3 ) {
 int VAR_4, VAR_5;

 if ( !(VAR_3->e.renderfx & VAR_1 ) ) {
  return;
 }

 VAR_4 = VAR_3->ambientLight[0];
 if ( VAR_3->ambientLight[1] > VAR_4 ) {
  VAR_4 = VAR_3->ambientLight[1];
 } else if ( VAR_3->ambientLight[2] > VAR_4 ) {
  VAR_4 = VAR_3->ambientLight[2];
 }

 VAR_5 = VAR_3->directedLight[0];
 if ( VAR_3->directedLight[1] > VAR_5 ) {
  VAR_5 = VAR_3->directedLight[1];
 } else if ( VAR_3->directedLight[2] > VAR_5 ) {
  VAR_5 = VAR_3->directedLight[2];
 }

 VAR_2.Printf( VAR_0, "amb:%i  dir:%i\n", VAR_4, VAR_5 );
}
