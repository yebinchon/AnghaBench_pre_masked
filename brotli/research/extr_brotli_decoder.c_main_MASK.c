
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {void* fout; int * output_buffer; int decoder; void* fin; int * input_buffer; } ;
typedef TYPE_1__ Context ;
typedef scalar_t__ BrotliDecoderResult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,size_t*,int const**,size_t*,int **,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 void* FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 size_t FUNC_8 (int *,int,int,void*) ;
 int FUNC_9 (int *,int,int,void*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(int VAR_7, char** VAR_8) {
  Context VAR_9;
  BrotliDecoderResult VAR_10 = VAR_1;
  size_t VAR_11;
  const uint8_t* VAR_12;
  size_t VAR_13 = VAR_4;
  uint8_t* VAR_14;
  FUNC_10(&VAR_9);

  VAR_9.fin = FUNC_5(VAR_5, "rb");
  if (!VAR_9.fin) FUNC_4(&VAR_9, "can't open input file");
  VAR_9.fout = FUNC_5(VAR_6, "wb");
  if (!VAR_9.fout) FUNC_4(&VAR_9, "can't open output file");
  VAR_9.input_buffer = (uint8_t*)FUNC_11(VAR_4);
  if (!VAR_9.input_buffer) FUNC_4(&VAR_9, "out of memory / input buffer");
  VAR_9.output_buffer = (uint8_t*)FUNC_11(VAR_4);
  if (!VAR_9.output_buffer) FUNC_4(&VAR_9, "out of memory / output buffer");
  VAR_9.decoder = FUNC_0(0, 0, 0);
  if (!VAR_9.decoder) FUNC_4(&VAR_9, "out of memory / decoder");
  FUNC_2(VAR_9.decoder, VAR_0, 1);

  VAR_14 = VAR_9.output_buffer;
  while (1) {
    if (VAR_10 == VAR_1) {
      if (FUNC_6(VAR_9.fin)) break;
      VAR_11 = FUNC_8(VAR_9.input_buffer, 1, VAR_4, VAR_9.fin);
      VAR_12 = VAR_9.input_buffer;
      if (FUNC_7(VAR_9.fin)) break;
    } else if (VAR_10 == VAR_2) {
      FUNC_9(VAR_9.output_buffer, 1, VAR_4, VAR_9.fout);
      if (FUNC_7(VAR_9.fout)) break;
      VAR_13 = VAR_4;
      VAR_14 = VAR_9.output_buffer;
    } else {
      break;
    }
    VAR_10 = FUNC_1(
        VAR_9.decoder, &VAR_11, &VAR_12, &VAR_13, &VAR_14, 0);
  }
  if (VAR_14 != VAR_9.output_buffer) {
    FUNC_9(VAR_9.output_buffer, 1, VAR_14 - VAR_9.output_buffer, VAR_9.fout);
  }
  if ((VAR_10 == VAR_2) || FUNC_7(VAR_9.fout)) {
    FUNC_4(&VAR_9, "failed to write output");
  } else if (VAR_10 != VAR_3) {
    FUNC_4(&VAR_9, "corrupt input");
  }
  FUNC_3(&VAR_9);
  return 0;
}
