
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct winsize {int ts_cols; int ws_col; } ;
struct ttysize {int ts_cols; int ws_col; } ;
struct ProgressData {int width; int tick; int barmove; int out; int initial_size; } ;
struct OperationConfig {TYPE_2__* global; int resume_from; scalar_t__ use_resume; } ;
struct TYPE_5__ {scalar_t__ Left; scalar_t__ Right; } ;
struct TYPE_7__ {TYPE_1__ srWindow; } ;
struct TYPE_6__ {int errors; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,struct winsize*) ;
 int FUNC_5 (struct ProgressData*,int ,int) ;
 int FUNC_6 (char*) ;
 long FUNC_7 (char*,char**,int) ;

void FUNC_8(struct ProgressData *VAR_6,
                     struct OperationConfig *VAR_7)
{
  char *VAR_8;
  FUNC_5(VAR_6, 0, sizeof(struct ProgressData));




  if(VAR_7->use_resume)
    VAR_6->initial_size = VAR_7->resume_from;

  VAR_8 = FUNC_3("COLUMNS");
  if(VAR_8) {
    char *VAR_9;
    long VAR_10 = FUNC_7(VAR_8, &VAR_9, 10);
    if((VAR_9 != VAR_8) && (VAR_9 == VAR_8 + FUNC_6(VAR_8)) && (VAR_10 > 20) &&
       (VAR_10 < 10000))
      VAR_6->width = (int)VAR_10;
    FUNC_2(VAR_8);
  }

  if(!VAR_6->width) {
    int VAR_11 = 0;
    VAR_6->width = VAR_11;
  }

  if(!VAR_6->width)
    VAR_6->width = 79;
  else if(VAR_6->width > VAR_1)
    VAR_6->width = VAR_1;

  VAR_6->out = VAR_7->global->errors;
  VAR_6->tick = 150;
  VAR_6->barmove = 1;
}
