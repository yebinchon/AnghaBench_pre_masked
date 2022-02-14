
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int texnum; int frameUsed; } ;
typedef TYPE_3__ image_t ;
struct TYPE_15__ {int* currenttextures; size_t currenttmu; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_12__ {int frameCount; TYPE_2__* dlightImage; TYPE_1__* defaultImage; } ;
struct TYPE_10__ {int texnum; } ;
struct TYPE_9__ {int texnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__ VAR_5 ;

void FUNC_2( image_t *VAR_6 ) {
 int VAR_7;

 if ( !VAR_6 ) {
  VAR_4.Printf( VAR_1, "GL_Bind: NULL image\n" );
  VAR_7 = VAR_5.defaultImage->texnum;
 } else {
  VAR_7 = VAR_6->texnum;
 }

 if ( VAR_3->integer && VAR_5.dlightImage ) {
  VAR_7 = VAR_5.dlightImage->texnum;
 }

 if ( VAR_2.currenttextures[VAR_2.currenttmu] != VAR_7 ) {
  VAR_6->frameUsed = VAR_5.frameCount;
  VAR_2.currenttextures[VAR_2.currenttmu] = VAR_7;
  FUNC_0 (VAR_0, VAR_7);
 }
}
