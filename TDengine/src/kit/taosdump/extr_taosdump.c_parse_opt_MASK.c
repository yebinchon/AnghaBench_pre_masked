
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct arguments {int allow_sys; char* host; char* user; char* password; int isDumpIn; char* encode; int all_databases; int databases; int schemaonly; int with_property; int abort; int arg_list_len; int * arg_list; void* data_batch; void* end_time; void* start_time; int input; int output; void* port; } ;
struct argp_state {scalar_t__ argc; scalar_t__ next; int * argv; struct arguments* input; } ;
typedef int error_t ;


 int VAR_0 ;


 void* FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static error_t FUNC_6(int VAR_3, char *VAR_4, struct argp_state *VAR_5) {


  struct arguments *VAR_6 = VAR_5->input;
  wordexp_t VAR_7;

  switch (VAR_3) {

    case 'a':
      VAR_6->allow_sys = 1;
      break;
    case 'h':
      VAR_6->host = VAR_4;
      break;
    case 'u':
      VAR_6->user = VAR_4;
      break;
    case 'p':
      VAR_6->password = VAR_4;
      break;
    case 'P':
      VAR_6->port = FUNC_0(VAR_4);
      break;

    case 'o':
      if (FUNC_4(VAR_4, &VAR_7, 0) != 0) {
        FUNC_2(VAR_2, "Invalid path %s\n", VAR_4);
        return -1;
      }
      FUNC_3(VAR_6->output, VAR_7.we_wordv[0]);
      FUNC_5(&VAR_7);
      break;
    case 'i':
      VAR_6->isDumpIn = 1;
      if (FUNC_4(VAR_4, &VAR_7, 0) != 0) {
        FUNC_2(VAR_2, "Invalid path %s\n", VAR_4);
        return -1;
      }
      FUNC_3(VAR_6->input, VAR_7.we_wordv[0]);
      FUNC_5(&VAR_7);
      break;
    case 'c':
      if (FUNC_4(VAR_4, &VAR_7, 0) != 0) {
        FUNC_2(VAR_2, "Invalid path %s\n", VAR_4);
        return -1;
      }
      FUNC_3(VAR_1, VAR_7.we_wordv[0]);
      FUNC_5(&VAR_7);
      break;
    case 'e':
      VAR_6->encode = VAR_4;
      break;

    case 'A':
      VAR_6->all_databases = 1;
      break;
    case 'B':
      VAR_6->databases = 1;
      break;

    case 's':
      VAR_6->schemaonly = 1;
      break;
    case 'M':
      VAR_6->with_property = 1;
      break;
    case 'S':

      VAR_6->start_time = FUNC_1(VAR_4);
      break;
    case 'E':
      VAR_6->end_time = FUNC_1(VAR_4);
      break;
    case 'N':
      VAR_6->data_batch = FUNC_0(VAR_4);
      break;
    case 128:
      VAR_6->abort = 1;
      break;
    case 129:
      VAR_6->arg_list = &VAR_5->argv[VAR_5->next - 1];
      VAR_6->arg_list_len = VAR_5->argc - VAR_5->next + 1;
      VAR_5->next = VAR_5->argc;
      break;

    default:
      return VAR_0;
  }
  return 0;
}
