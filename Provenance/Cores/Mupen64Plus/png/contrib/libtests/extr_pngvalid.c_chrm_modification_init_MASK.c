
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* modifications; } ;
typedef TYPE_1__ png_modifier ;
struct TYPE_10__ {int blue; int green; int red; } ;
typedef TYPE_2__ color_encoding ;
struct TYPE_12__ {struct TYPE_12__* next; int add; int modify_fn; int chunk; } ;
struct TYPE_11__ {TYPE_5__ this; void* by; void* bx; void* gy; void* gx; void* ry; void* rx; void* wy; void* wx; TYPE_2__ const* encoding; } ;
typedef TYPE_3__ chrm_modification ;
typedef int CIE_color ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_2__ const*) ;

__attribute__((used)) static void
FUNC_5(chrm_modification *VAR_3, png_modifier *VAR_4,
   const color_encoding *VAR_5)
{
   CIE_color VAR_6 = FUNC_4(VAR_5);


   VAR_3->encoding = VAR_5;


   VAR_3->wx = FUNC_2(FUNC_0(VAR_6));
   VAR_3->wy = FUNC_2(FUNC_1(VAR_6));

   VAR_3->rx = FUNC_2(FUNC_0(VAR_5->red));
   VAR_3->ry = FUNC_2(FUNC_1(VAR_5->red));
   VAR_3->gx = FUNC_2(FUNC_0(VAR_5->green));
   VAR_3->gy = FUNC_2(FUNC_1(VAR_5->green));
   VAR_3->bx = FUNC_2(FUNC_0(VAR_5->blue));
   VAR_3->by = FUNC_2(FUNC_1(VAR_5->blue));

   FUNC_3(&VAR_3->this);
   VAR_3->this.chunk = VAR_1;
   VAR_3->this.modify_fn = VAR_2;
   VAR_3->this.add = VAR_0;
   VAR_3->this.next = VAR_4->modifications;
   VAR_4->modifications = &VAR_3->this;
}
