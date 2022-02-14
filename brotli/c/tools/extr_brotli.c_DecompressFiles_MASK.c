
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int force_overwrite; int current_input_path; } ;
typedef TYPE_1__ Context ;
typedef int BrotliDecoderState ;
typedef scalar_t__ BROTLI_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static BROTLI_BOOL FUNC_9(Context* VAR_5) {
  while (FUNC_5(VAR_5)) {
    BROTLI_BOOL VAR_6 = VAR_2;
    BrotliDecoderState* VAR_7 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
    if (!VAR_7) {
      FUNC_7(VAR_4, "out of memory\n");
      return VAR_1;
    }



    FUNC_2(VAR_7, VAR_0, 1u);
    VAR_6 = FUNC_6(VAR_5);
    if (VAR_6 && !VAR_5->current_input_path &&
        !VAR_5->force_overwrite && FUNC_8(VAR_3)) {
      FUNC_7(VAR_4, "Use -h help. Use -f to force input from a terminal.\n");
      VAR_6 = VAR_1;
    }
    if (VAR_6) VAR_6 = FUNC_4(VAR_5, VAR_7);
    FUNC_1(VAR_7);
    if (!FUNC_3(VAR_5, VAR_6)) VAR_6 = VAR_1;
    if (!VAR_6) return VAR_1;
  }
  return VAR_2;
}
