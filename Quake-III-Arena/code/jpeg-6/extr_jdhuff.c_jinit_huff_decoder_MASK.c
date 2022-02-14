
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_entropy_decoder {int dummy; } ;
typedef TYPE_3__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef TYPE_4__* huff_entropy_ptr ;
struct TYPE_6__ {int decode_mcu; int start_pass; } ;
struct TYPE_9__ {int ** ac_derived_tbls; int * dc_derived_tbls; TYPE_1__ pub; } ;
struct TYPE_8__ {struct jpeg_entropy_decoder* entropy; TYPE_2__* mem; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

void
FUNC_2 (j_decompress_ptr VAR_5)
{
  huff_entropy_ptr VAR_6;
  int VAR_7;

  VAR_6 = (huff_entropy_ptr)
    (*VAR_5->mem->alloc_small) ((j_common_ptr) VAR_5, VAR_0,
    FUNC_0(VAR_3));
  VAR_5->entropy = (struct jpeg_entropy_decoder *) VAR_6;
  VAR_6->pub.start_pass = VAR_4;
  VAR_6->pub.decode_mcu = VAR_2;


  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    VAR_6->dc_derived_tbls[VAR_7] = *(VAR_6->ac_derived_tbls[VAR_7] = ((void*)0));
  }
}
