
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; char** argv; int* not_input_indices; char quality; int verbosity; char* output_path; int lgwin; char* suffix; size_t input_count; size_t longest_path_len; int decompress; int test_integrity; void* write_to_stdout; void* junk_source; void* copy_stat; void* force_overwrite; } ;
typedef TYPE_1__ Context ;
typedef scalar_t__ Command ;
typedef void* BROTLI_BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (char*) ;
 void* FUNC_1 (char const*,int ,int ,int*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,size_t) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static Command FUNC_9(Context* VAR_14) {
  int VAR_15 = VAR_14->argc;
  char** VAR_16 = VAR_14->argv;
  int VAR_17;
  int VAR_18 = 0;
  size_t VAR_19 = 0;
  size_t VAR_20 = 1;
  BROTLI_BOOL VAR_21 = VAR_0;
  BROTLI_BOOL VAR_22 = VAR_0;
  BROTLI_BOOL VAR_23 = VAR_0;
  BROTLI_BOOL VAR_24 = VAR_0;
  BROTLI_BOOL VAR_25 = VAR_0;
  BROTLI_BOOL VAR_26 = VAR_0;
  BROTLI_BOOL VAR_27 = VAR_0;
  Command VAR_28 = FUNC_0(VAR_16[0]);

  for (VAR_17 = 1; VAR_17 < VAR_15; ++VAR_17) {
    const char* VAR_29 = VAR_16[VAR_17];


    size_t VAR_30 = VAR_29 ? FUNC_6(VAR_29) : 0;

    if (VAR_30 == 0) {
      VAR_14->not_input_indices[VAR_18++] = VAR_17;
      continue;
    }





    if (VAR_18 > (VAR_12 - 2)) {
      FUNC_3(VAR_13, "too many options passed\n");
      return VAR_9;
    }


    if (VAR_27 || VAR_29[0] != '-' || VAR_30 == 1) {
      VAR_19++;
      if (VAR_20 < VAR_30) VAR_20 = VAR_30;
      continue;
    }


    VAR_14->not_input_indices[VAR_18++] = VAR_17;


    if (VAR_30 == 2 && VAR_29[1] == '-') {
      VAR_27 = VAR_6;
      continue;
    }


    if (VAR_29[1] != '-') {
      size_t VAR_31;
      for (VAR_31 = 1; VAR_31 < VAR_30; ++VAR_31) {
        char VAR_32 = VAR_29[VAR_31];
        if (VAR_32 >= '0' && VAR_32 <= '9') {
          if (VAR_22) {
            FUNC_3(VAR_13, "quality already set\n");
            return VAR_9;
          }
          VAR_22 = VAR_6;
          VAR_14->quality = VAR_32 - '0';
          continue;
        } else if (VAR_32 == 'c') {
          if (VAR_23) {
            FUNC_3(VAR_13, "write to standard output already set\n");
            return VAR_9;
          }
          VAR_23 = VAR_6;
          VAR_14->write_to_stdout = VAR_6;
          continue;
        } else if (VAR_32 == 'd') {
          if (VAR_21) {
            FUNC_3(VAR_13, "command already set when parsing -d\n");
            return VAR_9;
          }
          VAR_21 = VAR_6;
          VAR_28 = VAR_7;
          continue;
        } else if (VAR_32 == 'f') {
          if (VAR_14->force_overwrite) {
            FUNC_3(VAR_13, "force output overwrite already set\n");
            return VAR_9;
          }
          VAR_14->force_overwrite = VAR_6;
          continue;
        } else if (VAR_32 == 'h') {

          return VAR_8;
        } else if (VAR_32 == 'j' || VAR_32 == 'k') {
          if (VAR_24) {
            FUNC_3(VAR_13, "argument --rm / -j or --keep / -k already set\n");
            return VAR_9;
          }
          VAR_24 = VAR_6;
          VAR_14->junk_source = FUNC_2(VAR_32 == 'j');
          continue;
        } else if (VAR_32 == 'n') {
          if (!VAR_14->copy_stat) {
            FUNC_3(VAR_13, "argument --no-copy-stat / -n already set\n");
            return VAR_9;
          }
          VAR_14->copy_stat = VAR_0;
          continue;
        } else if (VAR_32 == 't') {
          if (VAR_21) {
            FUNC_3(VAR_13, "command already set when parsing -t\n");
            return VAR_9;
          }
          VAR_21 = VAR_6;
          VAR_28 = VAR_10;
          continue;
        } else if (VAR_32 == 'v') {
          if (VAR_14->verbosity > 0) {
            FUNC_3(VAR_13, "argument --verbose / -v already set\n");
            return VAR_9;
          }
          VAR_14->verbosity = 1;
          continue;
        } else if (VAR_32 == 'V') {

          return VAR_11;
        } else if (VAR_32 == 'Z') {
          if (VAR_22) {
            FUNC_3(VAR_13, "quality already set\n");
            return VAR_9;
          }
          VAR_22 = VAR_6;
          VAR_14->quality = 11;
          continue;
        }

        if (VAR_32 != 'o' && VAR_32 != 'q' && VAR_32 != 'w' && VAR_32 != 'D' && VAR_32 != 'S') {
          FUNC_3(VAR_13, "invalid argument -%c\n", VAR_32);
          return VAR_9;
        }
        if (VAR_31 + 1 != VAR_30) {
          FUNC_3(VAR_13, "expected parameter for argument -%c\n", VAR_32);
          return VAR_9;
        }
        VAR_17++;
        if (VAR_17 == VAR_15 || !VAR_16[VAR_17] || VAR_16[VAR_17][0] == 0) {
          FUNC_3(VAR_13, "expected parameter for argument -%c\n", VAR_32);
          return VAR_9;
        }
        VAR_14->not_input_indices[VAR_18++] = VAR_17;
        if (VAR_32 == 'o') {
          if (VAR_23) {
            FUNC_3(VAR_13, "write to standard output already set (-o)\n");
            return VAR_9;
          }
          VAR_14->output_path = VAR_16[VAR_17];
        } else if (VAR_32 == 'q') {
          if (VAR_22) {
            FUNC_3(VAR_13, "quality already set\n");
            return VAR_9;
          }
          VAR_22 = FUNC_1(VAR_16[VAR_17], VAR_4,
                                 VAR_2, &VAR_14->quality);
          if (!VAR_22) {
            FUNC_3(VAR_13, "error parsing quality value [%s]\n", VAR_16[VAR_17]);
            return VAR_9;
          }
        } else if (VAR_32 == 'w') {
          if (VAR_25) {
            FUNC_3(VAR_13, "lgwin parameter already set\n");
            return VAR_9;
          }
          VAR_25 = FUNC_1(VAR_16[VAR_17], 0,
                               VAR_3, &VAR_14->lgwin);
          if (!VAR_25) {
            FUNC_3(VAR_13, "error parsing lgwin value [%s]\n", VAR_16[VAR_17]);
            return VAR_9;
          }
          if (VAR_14->lgwin != 0 && VAR_14->lgwin < VAR_5) {
            FUNC_3(VAR_13,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    VAR_14->lgwin, VAR_5);
            return VAR_9;
          }
        } else if (VAR_32 == 'S') {
          if (VAR_26) {
            FUNC_3(VAR_13, "suffix already set\n");
            return VAR_9;
          }
          VAR_26 = VAR_6;
          VAR_14->suffix = VAR_16[VAR_17];
        }
      }
    } else {
      VAR_29 = &VAR_29[2];
      if (FUNC_5("best", VAR_29) == 0) {
        if (VAR_22) {
          FUNC_3(VAR_13, "quality already set\n");
          return VAR_9;
        }
        VAR_22 = VAR_6;
        VAR_14->quality = 11;
      } else if (FUNC_5("decompress", VAR_29) == 0) {
        if (VAR_21) {
          FUNC_3(VAR_13, "command already set when parsing --decompress\n");
          return VAR_9;
        }
        VAR_21 = VAR_6;
        VAR_28 = VAR_7;
      } else if (FUNC_5("force", VAR_29) == 0) {
        if (VAR_14->force_overwrite) {
          FUNC_3(VAR_13, "force output overwrite already set\n");
          return VAR_9;
        }
        VAR_14->force_overwrite = VAR_6;
      } else if (FUNC_5("help", VAR_29) == 0) {

        return VAR_8;
      } else if (FUNC_5("keep", VAR_29) == 0) {
        if (VAR_24) {
          FUNC_3(VAR_13, "argument --rm / -j or --keep / -k already set\n");
          return VAR_9;
        }
        VAR_24 = VAR_6;
        VAR_14->junk_source = VAR_0;
      } else if (FUNC_5("no-copy-stat", VAR_29) == 0) {
        if (!VAR_14->copy_stat) {
          FUNC_3(VAR_13, "argument --no-copy-stat / -n already set\n");
          return VAR_9;
        }
        VAR_14->copy_stat = VAR_0;
      } else if (FUNC_5("rm", VAR_29) == 0) {
        if (VAR_24) {
          FUNC_3(VAR_13, "argument --rm / -j or --keep / -k already set\n");
          return VAR_9;
        }
        VAR_24 = VAR_6;
        VAR_14->junk_source = VAR_6;
      } else if (FUNC_5("stdout", VAR_29) == 0) {
        if (VAR_23) {
          FUNC_3(VAR_13, "write to standard output already set\n");
          return VAR_9;
        }
        VAR_23 = VAR_6;
        VAR_14->write_to_stdout = VAR_6;
      } else if (FUNC_5("test", VAR_29) == 0) {
        if (VAR_21) {
          FUNC_3(VAR_13, "command already set when parsing --test\n");
          return VAR_9;
        }
        VAR_21 = VAR_6;
        VAR_28 = VAR_10;
      } else if (FUNC_5("verbose", VAR_29) == 0) {
        if (VAR_14->verbosity > 0) {
          FUNC_3(VAR_13, "argument --verbose / -v already set\n");
          return VAR_9;
        }
        VAR_14->verbosity = 1;
      } else if (FUNC_5("version", VAR_29) == 0) {

        return VAR_11;
      } else {

        const char* VAR_33 = FUNC_8(VAR_29, '=');
        size_t VAR_34;
        if (!VAR_33 || VAR_33[1] == 0) {
          FUNC_3(VAR_13, "must pass the parameter as --%s=value\n", VAR_29);
          return VAR_9;
        }
        VAR_34 = (size_t)(VAR_33 - VAR_29);
        VAR_33++;
        if (FUNC_7("lgwin", VAR_29, VAR_34) == 0) {
          if (VAR_25) {
            FUNC_3(VAR_13, "lgwin parameter already set\n");
            return VAR_9;
          }
          VAR_25 = FUNC_1(VAR_33, 0,
                               VAR_3, &VAR_14->lgwin);
          if (!VAR_25) {
            FUNC_3(VAR_13, "error parsing lgwin value [%s]\n", VAR_33);
            return VAR_9;
          }
          if (VAR_14->lgwin != 0 && VAR_14->lgwin < VAR_5) {
            FUNC_3(VAR_13,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    VAR_14->lgwin, VAR_5);
            return VAR_9;
          }
        } else if (FUNC_7("large_window", VAR_29, VAR_34) == 0) {

          if (VAR_25) {
            FUNC_3(VAR_13, "lgwin parameter already set\n");
            return VAR_9;
          }
          VAR_25 = FUNC_1(VAR_33, 0,
                               VAR_1, &VAR_14->lgwin);
          if (!VAR_25) {
            FUNC_3(VAR_13, "error parsing lgwin value [%s]\n", VAR_33);
            return VAR_9;
          }
          if (VAR_14->lgwin != 0 && VAR_14->lgwin < VAR_5) {
            FUNC_3(VAR_13,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    VAR_14->lgwin, VAR_5);
            return VAR_9;
          }
        } else if (FUNC_7("output", VAR_29, VAR_34) == 0) {
          if (VAR_23) {
            FUNC_3(VAR_13,
                    "write to standard output already set (--output)\n");
            return VAR_9;
          }
          VAR_14->output_path = VAR_33;
        } else if (FUNC_7("quality", VAR_29, VAR_34) == 0) {
          if (VAR_22) {
            FUNC_3(VAR_13, "quality already set\n");
            return VAR_9;
          }
          VAR_22 = FUNC_1(VAR_33, VAR_4,
                                 VAR_2, &VAR_14->quality);
          if (!VAR_22) {
            FUNC_3(VAR_13, "error parsing quality value [%s]\n", VAR_33);
            return VAR_9;
          }
        } else if (FUNC_7("suffix", VAR_29, VAR_34) == 0) {
          if (VAR_26) {
            FUNC_3(VAR_13, "suffix already set\n");
            return VAR_9;
          }
          VAR_26 = VAR_6;
          VAR_14->suffix = VAR_33;
        } else {
          FUNC_3(VAR_13, "invalid parameter: [%s]\n", VAR_29);
          return VAR_9;
        }
      }
    }
  }

  VAR_14->input_count = VAR_19;
  VAR_14->longest_path_len = VAR_20;
  VAR_14->decompress = (VAR_28 == VAR_7);
  VAR_14->test_integrity = (VAR_28 == VAR_10);

  if (VAR_19 > 1 && VAR_23) return VAR_9;
  if (VAR_14->test_integrity) {
    if (VAR_14->output_path) return VAR_9;
    if (VAR_14->write_to_stdout) return VAR_9;
  }
  if (FUNC_4(VAR_14->suffix, '/') || FUNC_4(VAR_14->suffix, '\\')) {
    return VAR_9;
  }

  return VAR_28;
}
