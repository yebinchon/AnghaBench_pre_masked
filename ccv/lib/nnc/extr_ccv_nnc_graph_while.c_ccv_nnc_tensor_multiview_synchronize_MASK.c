
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {unsigned char* u8; } ;
struct TYPE_15__ {int off; TYPE_2__ data; } ;
typedef TYPE_4__ ccv_nnc_tensor_view_t ;
struct TYPE_14__ {unsigned char* u8; } ;
struct TYPE_16__ {TYPE_3__ data; } ;
typedef TYPE_5__ ccv_nnc_tensor_t ;
struct TYPE_17__ {struct TYPE_17__* p; TYPE_8__* sp; int offset; TYPE_10__* it; } ;
typedef TYPE_6__ ccv_nnc_tensor_multiview_t ;
struct TYPE_18__ {int rnum; } ;
struct TYPE_12__ {int u8; } ;
struct TYPE_11__ {TYPE_1__ data; } ;


 int FUNC_0 (TYPE_10__*) ;
 scalar_t__ FUNC_1 (TYPE_5__* const) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int) ;

void FUNC_4(ccv_nnc_tensor_multiview_t* const VAR_0)
{
 FUNC_2(VAR_0->it && !FUNC_0(VAR_0->it));

 unsigned char* const VAR_1 = VAR_0->it->data.u8 - VAR_0->offset;
 const ccv_nnc_tensor_multiview_t* VAR_2 = VAR_0;
 int VAR_3;
 do {
  if (VAR_2->sp)
   for (VAR_3 = 0; VAR_3 < VAR_2->sp->rnum; VAR_3++)
   {
    ccv_nnc_tensor_t* const VAR_4 = *(ccv_nnc_tensor_t**)FUNC_3(VAR_2->sp, VAR_3);
    if (FUNC_1(VAR_4))
    {
     ccv_nnc_tensor_view_t* const VAR_5 = (ccv_nnc_tensor_view_t*)VAR_4;
     VAR_5->data.u8 = VAR_1 + VAR_5->off;
    } else
     VAR_4->data.u8 = VAR_1;
   }
  VAR_2 = VAR_2->p;
 } while (VAR_2);
}
