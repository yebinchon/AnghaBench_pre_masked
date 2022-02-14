
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ available_in; scalar_t__ available_out; scalar_t__ verbosity; int current_input_path; int next_out; int next_in; } ;
typedef TYPE_1__ Context ;
typedef int BrotliEncoderState ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,scalar_t__*,int *,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static BROTLI_BOOL FUNC_10(Context* VAR_5, BrotliEncoderState* VAR_6) {
  BROTLI_BOOL VAR_7 = VAR_0;
  FUNC_4(VAR_5);
  for (;;) {
    if (VAR_5->available_in == 0 && !VAR_7) {
      if (!FUNC_7(VAR_5)) return VAR_0;
      VAR_7 = !FUNC_3(VAR_5);
    }

    if (!FUNC_0(VAR_6,
        VAR_7 ? VAR_1 : VAR_2,
        &VAR_5->available_in, &VAR_5->next_in,
        &VAR_5->available_out, &VAR_5->next_out, ((void*)0))) {

      FUNC_9(VAR_4, "failed to compress data [%s]\n",
              FUNC_6(VAR_5->current_input_path));
      return VAR_0;
    }

    if (VAR_5->available_out == 0) {
      if (!FUNC_8(VAR_5)) return VAR_0;
    }

    if (FUNC_1(VAR_6)) {
      if (!FUNC_2(VAR_5)) return VAR_0;
      if (VAR_5->verbosity > 0) {
        FUNC_9(VAR_4, "Compressed ");
        FUNC_5(VAR_5);
        FUNC_9(VAR_4, "\n");
      }
      return VAR_3;
    }
  }
}
