
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {int verbose; int list; char* dumpfile; char** args; } ;
struct argp_state {int arg_num; struct arguments* input; } ;
typedef int error_t ;


 int VAR_0 ;


 int FUNC_0 (struct argp_state*) ;

__attribute__((used)) static error_t
FUNC_1 (int VAR_1, char *VAR_2, struct argp_state *VAR_3)
{
  struct arguments *VAR_4 = VAR_3->input;

  switch (VAR_1)
    {
    case 'v':
      VAR_4->verbose = 1;
      break;
    case 'l':
      VAR_4->list = 1;
      break;
    case 'd':
      VAR_4->dumpfile = VAR_2;
      break;
    case 129:
      if (VAR_3->arg_num >= 3)
 {
   FUNC_0(VAR_3);
 }
      VAR_4->args[VAR_3->arg_num] = VAR_2;
      break;
    case 128:
      if (VAR_3->arg_num < 1)
 {
   FUNC_0 (VAR_3);
 }
      break;
    default:
      return VAR_0;
    }
  return 0;
}
