
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_entropy_encoder {int dummy; } ;
typedef TYPE_3__* phuff_entropy_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_9__ {struct jpeg_entropy_encoder* entropy; TYPE_2__* mem; } ;
struct TYPE_6__ {int start_pass; } ;
struct TYPE_8__ {int * bit_buffer; int ** count_ptrs; int ** derived_tbls; TYPE_1__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

void
FUNC_2 (j_compress_ptr VAR_4)
{
  phuff_entropy_ptr VAR_5;
  int VAR_6;

  VAR_5 = (phuff_entropy_ptr)
    (*VAR_4->mem->alloc_small) ((j_common_ptr) VAR_4, VAR_0,
    FUNC_0(VAR_2));
  VAR_4->entropy = (struct jpeg_entropy_encoder *) VAR_5;
  VAR_5->pub.start_pass = VAR_3;


  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    VAR_5->derived_tbls[VAR_6] = ((void*)0);
    VAR_5->count_ptrs[VAR_6] = ((void*)0);
  }
  VAR_5->bit_buffer = ((void*)0);
}
