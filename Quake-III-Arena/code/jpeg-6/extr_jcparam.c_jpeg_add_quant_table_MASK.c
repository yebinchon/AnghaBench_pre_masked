
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int sent_table; scalar_t__* quantval; } ;
struct TYPE_6__ {scalar_t__ global_state; TYPE_2__** quant_tbl_ptrs; } ;
typedef TYPE_2__ JQUANT_TBL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ) ;

void
FUNC_2 (j_compress_ptr VAR_4, int VAR_5,
        const unsigned int *VAR_6,
        int VAR_7, boolean VAR_8)





{
  JQUANT_TBL ** VAR_9 = & VAR_4->quant_tbl_ptrs[VAR_5];
  int VAR_10;
  long VAR_11;


  if (VAR_4->global_state != VAR_0)
    FUNC_0(VAR_4, VAR_3, VAR_4->global_state);

  if (*VAR_9 == ((void*)0))
    *VAR_9 = FUNC_1((j_common_ptr) VAR_4);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
    VAR_11 = ((long) VAR_6[VAR_10] * VAR_7 + 50L) / 100L;

    if (VAR_11 <= 0L) VAR_11 = 1L;
    if (VAR_11 > 32767L) VAR_11 = 32767L;
    if (VAR_8 && VAR_11 > 255L)
      VAR_11 = 255L;
    (*VAR_9)->quantval[VAR_10] = (UINT16) VAR_11;
  }


  (*VAR_9)->sent_table = VAR_2;
}
