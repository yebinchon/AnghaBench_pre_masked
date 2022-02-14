
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fout; int * fin; scalar_t__ current_input_path; scalar_t__ junk_source; scalar_t__ current_output_path; scalar_t__ copy_stat; int test_integrity; } ;
typedef TYPE_1__ Context ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int VAR_3 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static BROTLI_BOOL FUNC_6(Context* VAR_4, BROTLI_BOOL VAR_5) {
  BROTLI_BOOL VAR_6 = VAR_1;
  if (!VAR_4->test_integrity && VAR_4->fout) {
    if (!VAR_5 && VAR_4->current_output_path) {
      FUNC_5(VAR_4->current_output_path);
    }
    if (FUNC_2(VAR_4->fout) != 0) {
      if (VAR_5) {
        FUNC_3(VAR_3, "fclose failed [%s]: %s\n",
                FUNC_1(VAR_4->current_output_path), FUNC_4(VAR_2));
      }
      VAR_6 = VAR_0;
    }


    if (VAR_5 && VAR_6 && VAR_4->copy_stat) {
      FUNC_0(VAR_4->current_input_path, VAR_4->current_output_path);
    }
  }

  if (VAR_4->fin) {
    if (FUNC_2(VAR_4->fin) != 0) {
      if (VAR_6) {
        FUNC_3(VAR_3, "fclose failed [%s]: %s\n",
                FUNC_1(VAR_4->current_input_path), FUNC_4(VAR_2));
      }
      VAR_6 = VAR_0;
    }
  }
  if (VAR_5 && VAR_4->junk_source && VAR_4->current_input_path) {
    FUNC_5(VAR_4->current_input_path);
  }

  VAR_4->fin = ((void*)0);
  VAR_4->fout = ((void*)0);

  return VAR_6;
}
