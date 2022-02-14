
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_inverse_dct {int dummy; } ;
typedef TYPE_3__* my_idct_ptr ;
struct TYPE_10__ {scalar_t__ dct_table; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_11__ {int num_components; TYPE_2__* mem; TYPE_4__* comp_info; struct jpeg_inverse_dct* idct; } ;
struct TYPE_7__ {int start_pass; } ;
struct TYPE_9__ {int* cur_method; TYPE_1__ pub; } ;
struct TYPE_8__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void
FUNC_4 (j_decompress_ptr VAR_4)
{
  my_idct_ptr VAR_5;
  int VAR_6;
  jpeg_component_info *VAR_7;

  VAR_5 = (my_idct_ptr)
    (*VAR_4->mem->alloc_small) ((j_common_ptr) VAR_4, VAR_0,
    FUNC_1(VAR_2));
  VAR_4->idct = (struct jpeg_inverse_dct *) VAR_5;
  VAR_5->pub.start_pass = VAR_3;

  for (VAR_6 = 0, VAR_7 = VAR_4->comp_info; VAR_6 < VAR_4->num_components;
       VAR_6++, VAR_7++) {

    VAR_7->dct_table =
      (*VAR_4->mem->alloc_small) ((j_common_ptr) VAR_4, VAR_0,
      FUNC_1(VAR_1));
    FUNC_0(VAR_7->dct_table, FUNC_1(VAR_1));

    VAR_5->cur_method[VAR_6] = -1;
  }
}
