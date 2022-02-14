
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct arguments {char* host; int is_use_passwd; char* password; char* timezone; char* user; char* commands; int is_raw_time; char* database; int abort; int file; } ;
struct argp_state {struct arguments* input; } ;
typedef int error_t ;


 int VAR_0 ;

 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static error_t FUNC_5(int VAR_4, char *VAR_5, struct argp_state *VAR_6) {


  struct arguments *VAR_7 = VAR_6->input;
  wordexp_t VAR_8;

  switch (VAR_4) {
    case 'h':
      VAR_7->host = VAR_5;
      break;
    case 'p':
      VAR_7->is_use_passwd = 1;
      if (VAR_5) VAR_7->password = VAR_5;
      break;
    case 'P':
      VAR_3 = FUNC_0(VAR_5);
      break;
    case 't':
      VAR_7->timezone = VAR_5;
      break;
    case 'u':
      VAR_7->user = VAR_5;
      break;
    case 'c':
      if (FUNC_3(VAR_5, &VAR_8, 0) != 0) {
        FUNC_1(VAR_2, "Invalid path %s\n", VAR_5);
        return -1;
      }
      FUNC_2(VAR_1, VAR_8.we_wordv[0]);
      FUNC_4(&VAR_8);
      break;
    case 's':
      VAR_7->commands = VAR_5;
      break;
    case 'r':
      VAR_7->is_raw_time = 1;
      break;
    case 'f':
      if (FUNC_3(VAR_5, &VAR_8, 0) != 0) {
        FUNC_1(VAR_2, "Invalid path %s\n", VAR_5);
        return -1;
      }
      FUNC_2(VAR_7->file, VAR_8.we_wordv[0]);
      FUNC_4(&VAR_8);
      break;
    case 'd':
      VAR_7->database = VAR_5;
      break;
    case 128:
      VAR_7->abort = 1;
      break;
    default:
      return VAR_0;
  }
  return 0;
}
