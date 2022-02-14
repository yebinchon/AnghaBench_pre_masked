
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fin; scalar_t__ fout; scalar_t__ input_buffer; scalar_t__ output_buffer; scalar_t__ decoder; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(Context* VAR_0) {
  if (VAR_0->decoder) FUNC_0(VAR_0->decoder);
  if (VAR_0->output_buffer) FUNC_2(VAR_0->output_buffer);
  if (VAR_0->input_buffer) FUNC_2(VAR_0->input_buffer);
  if (VAR_0->fout) FUNC_1(VAR_0->fout);
  if (VAR_0->fin) FUNC_1(VAR_0->fin);
}
