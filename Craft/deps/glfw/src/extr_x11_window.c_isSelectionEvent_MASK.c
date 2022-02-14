
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XPointer ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ XEvent ;
typedef int Display ;
typedef int Bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static Bool FUNC_0(Display* VAR_3, XEvent* VAR_4, XPointer VAR_5)
{
    return VAR_4->type == VAR_2 ||
           VAR_4->type == VAR_1 ||
           VAR_4->type == VAR_0;
}
