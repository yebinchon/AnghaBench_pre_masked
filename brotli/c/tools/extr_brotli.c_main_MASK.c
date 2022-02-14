
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {int quality; int lgwin; int longest_path_len; int argc; char** argv; char* modified_path; char* buffer; char* input; char* output; void* iterator_error; int suffix; int * fout; int * fin; int * current_output_path; int * current_input_path; scalar_t__ ignore; scalar_t__ iterator; scalar_t__ input_count; scalar_t__* not_input_indices; int * output_path; void* large_window; void* decompress; void* write_to_stdout; void* test_integrity; void* copy_stat; void* junk_source; void* force_overwrite; scalar_t__ verbosity; } ;
typedef TYPE_1__ Context ;
typedef int Command ;
typedef int BROTLI_BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;







 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_6, char** VAR_7) {
  Command VAR_8;
  Context VAR_9;
  BROTLI_BOOL VAR_10 = VAR_1;
  int VAR_11;

  VAR_9.quality = 11;
  VAR_9.lgwin = -1;
  VAR_9.verbosity = 0;
  VAR_9.force_overwrite = VAR_0;
  VAR_9.junk_source = VAR_0;
  VAR_9.copy_stat = VAR_1;
  VAR_9.test_integrity = VAR_0;
  VAR_9.write_to_stdout = VAR_0;
  VAR_9.decompress = VAR_0;
  VAR_9.large_window = VAR_0;
  VAR_9.output_path = ((void*)0);
  VAR_9.suffix = VAR_2;
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) VAR_9.not_input_indices[VAR_11] = 0;
  VAR_9.longest_path_len = 1;
  VAR_9.input_count = 0;

  VAR_9.argc = VAR_6;
  VAR_9.argv = VAR_7;
  VAR_9.modified_path = ((void*)0);
  VAR_9.iterator = 0;
  VAR_9.ignore = 0;
  VAR_9.iterator_error = VAR_0;
  VAR_9.buffer = ((void*)0);
  VAR_9.current_input_path = ((void*)0);
  VAR_9.current_output_path = ((void*)0);
  VAR_9.fin = ((void*)0);
  VAR_9.fout = ((void*)0);

  VAR_8 = FUNC_3(&VAR_9);

  if (VAR_8 == 134 || VAR_8 == 133 ||
      VAR_8 == 129) {
    if (VAR_10) {
      size_t VAR_12 =
          VAR_9.longest_path_len + FUNC_10(VAR_9.suffix) + 1;
      VAR_9.modified_path = (char*)FUNC_9(VAR_12);
      VAR_9.buffer = (uint8_t*)FUNC_9(VAR_4 * 2);
      if (!VAR_9.modified_path || !VAR_9.buffer) {
        FUNC_7(VAR_5, "out of memory\n");
        VAR_10 = VAR_0;
      } else {
        VAR_9.input = VAR_9.buffer;
        VAR_9.output = VAR_9.buffer + VAR_4;
      }
    }
  }

  if (!VAR_10) VAR_8 = 130;

  switch (VAR_8) {
    case 130:
      break;

    case 128:
      FUNC_5();
      break;

    case 134:
      VAR_10 = FUNC_0(&VAR_9);
      break;

    case 133:
    case 129:
      VAR_10 = FUNC_1(&VAR_9);
      break;

    case 132:
    case 131:
    default:
      VAR_10 = (VAR_8 == 132);
      FUNC_4(FUNC_2(VAR_7[0]), VAR_10);
      break;
  }

  if (VAR_9.iterator_error) VAR_10 = VAR_0;

  FUNC_8(VAR_9.modified_path);
  FUNC_8(VAR_9.buffer);

  if (!VAR_10) FUNC_6(1);
  return 0;
}
