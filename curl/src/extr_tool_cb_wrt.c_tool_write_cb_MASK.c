
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct OutStruct {int bytes; scalar_t__ stream; scalar_t__ init; scalar_t__ is_cd_filename; scalar_t__ alloc_filename; scalar_t__ fopened; scalar_t__ s_isreg; int * filename; struct OperationConfig* config; } ;
struct per_transfer {int curl; struct OutStruct outs; } ;
struct OperationConfig {int readbusy; scalar_t__ nobuffer; int synthetic_error; TYPE_1__* global; int terminal_binary_ok; scalar_t__ show_headers; } ;
struct TYPE_2__ {int isatty; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CONSOLE_SCREEN_BUFFER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,int,int*,int *) ;
 intptr_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (char*,size_t,size_t,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char*,int ,size_t) ;
 int FUNC_14 (struct OutStruct*) ;
 int FUNC_15 (TYPE_1__*,char*) ;

size_t FUNC_16(char *VAR_7, size_t VAR_8, size_t VAR_9, void *VAR_10)
{
  size_t VAR_11;
  struct per_transfer *VAR_12 = VAR_10;
  struct OutStruct *VAR_13 = &VAR_12->outs;
  struct OperationConfig *VAR_14 = VAR_13->config;
  size_t VAR_15 = VAR_8 * VAR_9;
  bool VAR_16 = VAR_14->global->isatty;
  const size_t VAR_17 = VAR_15 ? 0 : 1;
  if(!VAR_13->stream && !FUNC_14(VAR_13))
    return VAR_17;

  if(VAR_16 && (VAR_13->bytes < 2000) && !VAR_14->terminal_binary_ok) {

    if(FUNC_13(VAR_7, 0, VAR_15)) {
      FUNC_15(VAR_14->global, "Binary output can mess up your terminal. "
            "Use \"--output -\" to tell curl to output it to your terminal "
            "anyway, or consider \"--output <FILE>\" to save to a file.\n");
      VAR_14->synthetic_error = VAR_4;
      return VAR_17;
    }
  }
    VAR_11 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_13->stream);

  if(VAR_15 == VAR_11)

    VAR_13->bytes += VAR_15;

  if(VAR_14->readbusy) {
    VAR_14->readbusy = VAR_5;
    FUNC_4(VAR_12->curl, VAR_1);
  }

  if(VAR_14->nobuffer) {

    int VAR_18 = FUNC_7(VAR_13->stream);
    if(VAR_18)
      return VAR_17;
  }

  return VAR_11;
}
