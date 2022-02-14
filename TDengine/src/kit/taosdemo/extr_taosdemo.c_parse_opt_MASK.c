
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct arguments {char* host; char* user; char* password; char* output_file; char* database; char** datatype; char* tb_prefix; int use_metric; int insert_only; int abort; void* len_of_binary; void* num_of_CPR; void* num_of_DPT; void* num_of_tables; void* num_of_RPR; void* num_of_connections; void* mode; void* port; } ;
struct argp_state {struct arguments* input; } ;
typedef int error_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct argp_state*,char*) ;
 int FUNC_1 (struct argp_state*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static error_t FUNC_11(int VAR_3, char *VAR_4, struct argp_state *VAR_5) {


  struct arguments *VAR_6 = VAR_5->input;
  wordexp_t VAR_7;
  char **VAR_8;
  switch (VAR_3) {
    case 'h':
      VAR_6->host = VAR_4;
      break;
    case 'p':
      VAR_6->port = FUNC_2(VAR_4);
      break;
    case 'u':
      VAR_6->user = VAR_4;
      break;
    case 'a':
      VAR_6->password = VAR_4;
      break;
    case 'o':
      VAR_6->output_file = VAR_4;
      break;
    case 'q':
      VAR_6->mode = FUNC_2(VAR_4);
      break;
    case 'c':
      VAR_6->num_of_connections = FUNC_2(VAR_4);
      break;
    case 'r':
      VAR_6->num_of_RPR = FUNC_2(VAR_4);
      break;
    case 't':
      VAR_6->num_of_tables = FUNC_2(VAR_4);
      break;
    case 'n':
      VAR_6->num_of_DPT = FUNC_2(VAR_4);
      break;
    case 'd':
      VAR_6->database = VAR_4;
      break;
    case 'l':
      VAR_6->num_of_CPR = FUNC_2(VAR_4);
      break;
    case 'b':
      VAR_8 = VAR_6->datatype;
      if (FUNC_7(VAR_4, ",") == ((void*)0)) {
        if (FUNC_4(VAR_4, "INT") != 0 && FUNC_4(VAR_4, "FLOAT") != 0 &&
            FUNC_4(VAR_4, "TINYINT") != 0 && FUNC_4(VAR_4, "BOOL") != 0 &&
            FUNC_4(VAR_4, "SMALLINT") != 0 &&
            FUNC_4(VAR_4, "BIGINT") != 0 && FUNC_4(VAR_4, "DOUBLE") != 0 &&
            FUNC_4(VAR_4, "BINARY")) {
          FUNC_0(VAR_5, "Invalid data_type!");
        }
        VAR_8[0] = VAR_4;
      } else {
        int VAR_9 = 0;
        char *VAR_10 = FUNC_5(VAR_4);
        char *VAR_11 = VAR_10;
        char *VAR_12 = FUNC_6(&VAR_11, ",");
        while (VAR_12 != ((void*)0)) {
          if (FUNC_4(VAR_12, "INT") != 0 &&
              FUNC_4(VAR_12, "FLOAT") != 0 &&
              FUNC_4(VAR_12, "TINYINT") != 0 &&
              FUNC_4(VAR_12, "BOOL") != 0 &&
              FUNC_4(VAR_12, "SMALLINT") != 0 &&
              FUNC_4(VAR_12, "BIGINT") != 0 &&
              FUNC_4(VAR_12, "DOUBLE") != 0 && FUNC_4(VAR_12, "BINARY")) {
            FUNC_0(VAR_5, "Invalid data_type!");
          }
          VAR_8[VAR_9++] = VAR_12;
          VAR_12 = FUNC_6(&VAR_11, ", ");
        }
      }
      break;
    case 'w':
      VAR_6->len_of_binary = FUNC_2(VAR_4);
      break;
    case 'm':
      VAR_6->tb_prefix = VAR_4;
      break;
    case 'M':
      VAR_6->use_metric = 1;
      break;
    case 'x':
      VAR_6->insert_only = 1;
      break;
    case 'f':
      if (FUNC_9(VAR_4, &VAR_7, 0) != 0) {
        FUNC_3(VAR_2, "Invalid path %s\n", VAR_4);
        return -1;
      }
      FUNC_8(VAR_1, VAR_7.we_wordv[0]);
      FUNC_10(&VAR_7);
      break;
    case 128:
      VAR_6->abort = 1;
      break;
    case 129:


      FUNC_1(VAR_5);
      break;

    default:
      return VAR_0;
  }
  return 0;
}
