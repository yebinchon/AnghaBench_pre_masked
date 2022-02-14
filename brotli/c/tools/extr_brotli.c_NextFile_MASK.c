
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iterator; int input_file_length; scalar_t__ input_count; char const* current_input_path; int* not_input_indices; size_t ignore; int argc; char** argv; char* suffix; scalar_t__ modified_path; void* iterator_error; scalar_t__ decompress; scalar_t__ current_output_path; scalar_t__ write_to_stdout; scalar_t__ output_path; } ;
typedef TYPE_1__ Context ;
typedef void* BROTLI_BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (scalar_t__,char const*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static BROTLI_BOOL FUNC_7(Context* VAR_3) {
  const char* VAR_4;
  size_t VAR_5;


  VAR_3->iterator++;

  VAR_3->input_file_length = -1;


  if (VAR_3->input_count == 0) {
    if (VAR_3->iterator > 1) return VAR_0;
    VAR_3->current_input_path = ((void*)0);

    VAR_3->current_output_path = VAR_3->output_path;
    return VAR_1;
  }


  while (VAR_3->iterator == VAR_3->not_input_indices[VAR_3->ignore]) {
    VAR_3->iterator++;
    VAR_3->ignore++;
  }


  if (VAR_3->iterator >= VAR_3->argc) return VAR_0;


  VAR_4 = VAR_3->argv[VAR_3->iterator];
  VAR_5 = FUNC_6(VAR_4);

  if (VAR_5 == 1 && VAR_4[0] == '-') {
    VAR_3->current_input_path = ((void*)0);
    VAR_3->current_output_path = VAR_3->output_path;
    return VAR_1;
  }

  VAR_3->current_input_path = VAR_4;
  VAR_3->input_file_length = FUNC_1(VAR_4);
  VAR_3->current_output_path = VAR_3->output_path;

  if (VAR_3->output_path) return VAR_1;
  if (VAR_3->write_to_stdout) return VAR_1;

  FUNC_5(VAR_3->modified_path, VAR_4);
  VAR_3->current_output_path = VAR_3->modified_path;

  if (VAR_3->decompress) {
    size_t VAR_6 = FUNC_6(VAR_3->suffix);
    char* VAR_7 = (char*)FUNC_0(VAR_3->modified_path);
    char* VAR_8;
    size_t VAR_9 = FUNC_6(VAR_7);
    if (VAR_9 < VAR_6 + 1) {
      FUNC_3(VAR_2, "empty output file name for [%s] input file\n",
              FUNC_2(VAR_4));
      VAR_3->iterator_error = VAR_1;
      return VAR_0;
    }
    VAR_8 = VAR_7 + VAR_9 - VAR_6;
    if (FUNC_4(VAR_3->suffix, VAR_8) != 0) {
      FUNC_3(VAR_2, "input file [%s] suffix mismatch\n",
              FUNC_2(VAR_4));
      VAR_3->iterator_error = VAR_1;
      return VAR_0;
    }
    VAR_8[0] = 0;
    return VAR_1;
  } else {
    FUNC_5(VAR_3->modified_path + VAR_5, VAR_3->suffix);
    return VAR_1;
  }
}
