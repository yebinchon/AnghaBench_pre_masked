
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ lgwin; int input_file_length; int force_overwrite; int current_output_path; scalar_t__ quality; } ;
typedef TYPE_1__ Context ;
typedef int BrotliEncoderState ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_10 ;

__attribute__((used)) static BROTLI_BOOL FUNC_10(Context* VAR_11) {
  while (FUNC_6(VAR_11)) {
    BROTLI_BOOL VAR_12 = VAR_7;
    BrotliEncoderState* VAR_13 = FUNC_1(((void*)0), ((void*)0), ((void*)0));
    if (!VAR_13) {
      FUNC_8(VAR_10, "out of memory\n");
      return VAR_0;
    }
    FUNC_3(VAR_13,
        VAR_5, (uint32_t)VAR_11->quality);
    if (VAR_11->lgwin > 0) {


      if (VAR_11->lgwin > VAR_1) {
        FUNC_3(VAR_13, VAR_3, 1u);
      }
      FUNC_3(VAR_13,
          VAR_4, (uint32_t)VAR_11->lgwin);
    } else {

      uint32_t VAR_14 = VAR_8;

      if (VAR_11->input_file_length >= 0) {
        VAR_14 = VAR_2;
        while (FUNC_0(VAR_14) <
               (uint64_t)VAR_11->input_file_length) {
          VAR_14++;
          if (VAR_14 == VAR_1) break;
        }
      }
      FUNC_3(VAR_13, VAR_4, VAR_14);
    }
    if (VAR_11->input_file_length > 0) {
      uint32_t VAR_15 = VAR_11->input_file_length < (1 << 30) ?
          (uint32_t)VAR_11->input_file_length : (1u << 30);
      FUNC_3(VAR_13, VAR_6, VAR_15);
    }
    VAR_12 = FUNC_7(VAR_11);
    if (VAR_12 && !VAR_11->current_output_path &&
        !VAR_11->force_overwrite && FUNC_9(VAR_9)) {
      FUNC_8(VAR_10, "Use -h help. Use -f to force output to a terminal.\n");
      VAR_12 = VAR_0;
    }
    if (VAR_12) VAR_12 = FUNC_5(VAR_11, VAR_13);
    FUNC_2(VAR_13);
    if (!FUNC_4(VAR_11, VAR_12)) VAR_12 = VAR_0;
    if (!VAR_12) return VAR_0;
  }
  return VAR_7;
}
