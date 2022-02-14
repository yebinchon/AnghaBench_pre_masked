
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ h; scalar_t__ w; } ;
struct TYPE_8__ {int h; int w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int h; int w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ border; TYPE_2__ rectClient; TYPE_1__ rect; scalar_t__ borderSize; } ;
struct TYPE_11__ {TYPE_4__ textRect; TYPE_3__ window; } ;
typedef TYPE_5__ itemDef_t ;



void FUNC_0(itemDef_t *VAR_0, float VAR_1, float VAR_2) {

  if (VAR_0 == ((void*)0)) {
    return;
  }

  if (VAR_0->window.border != 0) {
    VAR_1 += VAR_0->window.borderSize;
    VAR_2 += VAR_0->window.borderSize;
  }

  VAR_0->window.rect.x = VAR_1 + VAR_0->window.rectClient.x;
  VAR_0->window.rect.y = VAR_2 + VAR_0->window.rectClient.y;
  VAR_0->window.rect.w = VAR_0->window.rectClient.w;
  VAR_0->window.rect.h = VAR_0->window.rectClient.h;


  VAR_0->textRect.w = 0;
  VAR_0->textRect.h = 0;
}
