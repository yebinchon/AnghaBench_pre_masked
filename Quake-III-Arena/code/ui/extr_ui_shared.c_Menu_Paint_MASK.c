
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec4_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
struct TYPE_8__ {int flags; TYPE_1__ rect; scalar_t__ background; scalar_t__ ownerDrawFlags; } ;
struct TYPE_7__ {int itemCount; TYPE_3__ window; int * items; int fadeCycle; int fadeClamp; int fadeAmount; scalar_t__ fullScreen; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_9__ {int (* drawRect ) (int ,int ,int ,int ,int,int*) ;int (* drawHandlePic ) (int ,int ,int ,int ,scalar_t__) ;int (* ownerDrawVisible ) (scalar_t__) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int,int*) ;

void FUNC_5(menuDef_t *VAR_6, qboolean VAR_7) {
 int VAR_8;

 if (VAR_6 == ((void*)0)) {
  return;
 }

 if (!(VAR_6->window.flags & VAR_4) && !VAR_7) {
  return;
 }

 if (VAR_6->window.ownerDrawFlags && VAR_0->ownerDrawVisible && !VAR_0->ownerDrawVisible(VAR_6->window.ownerDrawFlags)) {
  return;
 }

 if (VAR_7) {
  VAR_6->window.flags |= VAR_3;
 }


 if (VAR_6->fullScreen) {


  VAR_0->drawHandlePic( 0, 0, VAR_2, VAR_1, VAR_6->window.background );
 } else if (VAR_6->window.background) {


 }


 FUNC_1(&VAR_6->window, VAR_6->fadeAmount, VAR_6->fadeClamp, VAR_6->fadeCycle );

 for (VAR_8 = 0; VAR_8 < VAR_6->itemCount; VAR_8++) {
  FUNC_0(VAR_6->items[VAR_8]);
 }

 if (VAR_5) {
  vec4_t VAR_9;
  VAR_9[0] = VAR_9[2] = VAR_9[3] = 1;
  VAR_9[1] = 0;
  VAR_0->drawRect(VAR_6->window.rect.x, VAR_6->window.rect.y, VAR_6->window.rect.w, VAR_6->window.rect.h, 1, VAR_9);
 }
}
