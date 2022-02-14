
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* j_compress_ptr ;
typedef void* boolean ;
struct TYPE_7__ {void* sent_table; } ;
struct TYPE_6__ {void* sent_table; } ;
struct TYPE_5__ {TYPE_3__** ac_huff_tbl_ptrs; TYPE_3__** dc_huff_tbl_ptrs; TYPE_2__** quant_tbl_ptrs; } ;
typedef TYPE_2__ JQUANT_TBL ;
typedef TYPE_3__ JHUFF_TBL ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0 (j_compress_ptr VAR_2, boolean VAR_3)
{
  int VAR_4;
  JQUANT_TBL * VAR_5;
  JHUFF_TBL * VAR_6;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if ((VAR_5 = VAR_2->quant_tbl_ptrs[VAR_4]) != ((void*)0))
      VAR_5->sent_table = VAR_3;
  }

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if ((VAR_6 = VAR_2->dc_huff_tbl_ptrs[VAR_4]) != ((void*)0))
      VAR_6->sent_table = VAR_3;
    if ((VAR_6 = VAR_2->ac_huff_tbl_ptrs[VAR_4]) != ((void*)0))
      VAR_6->sent_table = VAR_3;
  }
}
