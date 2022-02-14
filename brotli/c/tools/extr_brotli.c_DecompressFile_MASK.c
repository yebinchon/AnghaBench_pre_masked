
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ available_in; scalar_t__ verbosity; int next_out; int available_out; int next_in; int current_input_path; } ;
typedef TYPE_1__ Context ;
typedef int BrotliDecoderState ;
typedef scalar_t__ BrotliDecoderResult ;
typedef int BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,int *,int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static BROTLI_BOOL FUNC_9(Context* VAR_6, BrotliDecoderState* VAR_7) {
  BrotliDecoderResult VAR_8 = VAR_0;
  FUNC_3(VAR_6);
  for (;;) {
    if (VAR_8 == VAR_0) {
      if (!FUNC_2(VAR_6)) {
        FUNC_8(VAR_5, "corrupt input [%s]\n",
                FUNC_5(VAR_6->current_input_path));
        return VAR_3;
      }
      if (!FUNC_6(VAR_6)) return VAR_3;
    } else if (VAR_8 == VAR_1) {
      if (!FUNC_7(VAR_6)) return VAR_3;
    } else if (VAR_8 == VAR_2) {
      if (!FUNC_1(VAR_6)) return VAR_3;
      if (VAR_6->available_in != 0 || FUNC_2(VAR_6)) {
        FUNC_8(VAR_5, "corrupt input [%s]\n",
                FUNC_5(VAR_6->current_input_path));
        return VAR_3;
      }
      if (VAR_6->verbosity > 0) {
        FUNC_8(VAR_5, "Decompressed ");
        FUNC_4(VAR_6);
        FUNC_8(VAR_5, "\n");
      }
      return VAR_4;
    } else {
      FUNC_8(VAR_5, "corrupt input [%s]\n",
              FUNC_5(VAR_6->current_input_path));
      return VAR_3;
    }

    VAR_8 = FUNC_0(VAR_7, &VAR_6->available_in,
        &VAR_6->next_in, &VAR_6->available_out, &VAR_6->next_out, 0);
  }
}
