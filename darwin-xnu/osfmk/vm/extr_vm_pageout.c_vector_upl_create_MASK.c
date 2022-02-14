
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* vm_offset_t ;
typedef TYPE_2__* vector_upl_t ;
typedef TYPE_3__* upl_t ;
struct _vector_upl {int dummy; } ;
struct TYPE_8__ {void* offset; TYPE_2__* vector_upl; } ;
struct TYPE_7__ {TYPE_1__* upl_iostates; int * pagelist; scalar_t__ num_upls; scalar_t__ invalid_upls; void* offset; scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ,int ,int ) ;

upl_t
FUNC_2(vm_offset_t VAR_2)
{
 int VAR_3 = sizeof(struct _vector_upl);
 int VAR_4=0;
 upl_t VAR_5;
 vector_upl_t VAR_6 = (vector_upl_t)FUNC_0(VAR_3);

 VAR_5 = FUNC_1(0,VAR_1,0);
 VAR_5->vector_upl = VAR_6;
 VAR_5->offset = VAR_2;
 VAR_6->size = 0;
 VAR_6->offset = VAR_2;
 VAR_6->invalid_upls=0;
 VAR_6->num_upls=0;
 VAR_6->pagelist = ((void*)0);

 for(VAR_4=0; VAR_4 < VAR_0 ; VAR_4++) {
  VAR_6->upl_iostates[VAR_4].size = 0;
  VAR_6->upl_iostates[VAR_4].offset = 0;

 }
 return VAR_5;
}
