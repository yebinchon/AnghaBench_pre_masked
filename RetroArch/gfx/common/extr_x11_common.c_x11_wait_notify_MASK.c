
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ window; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ xmap; } ;
typedef TYPE_2__ XEvent ;
typedef int Display ;
typedef int Bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Bool FUNC_0(Display *VAR_2, XEvent *VAR_3, char *VAR_4)
{
   return VAR_3->type == VAR_0 && VAR_3->xmap.window == VAR_1;
}
