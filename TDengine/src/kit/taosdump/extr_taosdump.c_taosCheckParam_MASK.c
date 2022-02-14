
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {scalar_t__ start_time; scalar_t__ end_time; scalar_t__ arg_list_len; int * encode; scalar_t__ isDumpIn; int output; scalar_t__ all_databases; scalar_t__ databases; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(struct arguments *VAR_2) {
  if (VAR_2->all_databases && VAR_2->databases) {
    FUNC_0(VAR_1, "conflict option --all-databases and --databases\n");
    return -1;
  }

  if (VAR_2->start_time > VAR_2->end_time) {
    FUNC_0(VAR_1, "start time is larger than end time\n");
    return -1;
  }
  if (VAR_2->arg_list_len == 0) {
    if ((!VAR_2->all_databases) && (!VAR_2->isDumpIn)) {
      FUNC_0(VAR_1, "taosdump requires parameters\n");
      return -1;
    }
  }

  if (VAR_2->isDumpIn && (FUNC_1(VAR_2->output, VAR_0) != 0)) {
    FUNC_0(VAR_1, "duplicate parameter input and output file\n");
    return -1;
  }

  if (!VAR_2->isDumpIn && VAR_2->encode != ((void*)0)) {
    FUNC_0(VAR_1, "invalid option in dump out\n");
    return -1;
  }

  return 0;
}
