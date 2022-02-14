
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* y; void* x; } ;
struct TYPE_7__ {void* y; void* x; } ;
struct TYPE_8__ {TYPE_1__ pt2; TYPE_2__ pt1; } ;
typedef TYPE_3__ rect ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;

rect FUNC_2(rect VAR_0) {
 rect VAR_1;

 VAR_1.pt1.x = FUNC_1(VAR_0.pt1.x, VAR_0.pt2.x);
 VAR_1.pt1.y = FUNC_1(VAR_0.pt1.y, VAR_0.pt2.y);
 VAR_1.pt2.x = FUNC_0(VAR_0.pt1.x, VAR_0.pt2.x);
 VAR_1.pt2.y = FUNC_0(VAR_0.pt1.y, VAR_0.pt2.y);
 return VAR_1;
}
