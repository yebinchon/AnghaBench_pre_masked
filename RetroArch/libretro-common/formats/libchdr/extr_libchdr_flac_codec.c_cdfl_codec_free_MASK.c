
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buffer; int subcode_decompressor; int decoder; } ;
typedef TYPE_1__ cdfl_codec_data ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0)
{
 cdfl_codec_data *VAR_1 = (cdfl_codec_data*)VAR_0;
 FUNC_0(&VAR_1->decoder);



 if (VAR_1->buffer)
  FUNC_1(VAR_1->buffer);
}
