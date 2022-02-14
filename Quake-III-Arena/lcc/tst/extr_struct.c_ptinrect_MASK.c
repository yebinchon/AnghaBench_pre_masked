
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_9__ {TYPE_2__ pt2; TYPE_1__ pt1; } ;
typedef TYPE_3__ rect ;
struct TYPE_10__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_4__ point ;



int FUNC_0(point VAR_0, rect VAR_1) {
 return VAR_0.x >= VAR_1.pt1.x && VAR_0.x < VAR_1.pt2.x
  && VAR_0.y >= VAR_1.pt1.y && VAR_0.y < VAR_1.pt2.y;
}
