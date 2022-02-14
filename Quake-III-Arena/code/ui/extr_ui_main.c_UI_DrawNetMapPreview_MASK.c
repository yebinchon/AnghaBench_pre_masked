
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_5__ {scalar_t__ currentServerPreview; } ;
struct TYPE_7__ {TYPE_1__ serverStatus; } ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3) {

 if (VAR_0.serverStatus.currentServerPreview > 0) {
  FUNC_0( VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h, VAR_0.serverStatus.currentServerPreview);
 } else {
  FUNC_0( VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h, FUNC_1("menu/art/unknownmap"));
 }
}
