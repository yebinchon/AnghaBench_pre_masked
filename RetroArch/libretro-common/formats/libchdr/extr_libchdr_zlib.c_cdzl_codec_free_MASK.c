
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buffer; int subcode_decompressor; int base_decompressor; } ;
typedef TYPE_1__ cdzl_codec_data ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(void *VAR_0)
{
 cdzl_codec_data* VAR_1 = (cdzl_codec_data*)VAR_0;

 FUNC_1(&VAR_1->base_decompressor);



 if (VAR_1->buffer)
  FUNC_0(VAR_1->buffer);
}
