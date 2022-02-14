
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_input_path; int fin; int input; int next_in; scalar_t__ available_in; int total_in; } ;
typedef TYPE_1__ Context ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_5(Context* VAR_5) {
  VAR_5->available_in =
      FUNC_3(VAR_5->input, 1, VAR_3, VAR_5->fin);
  VAR_5->total_in += VAR_5->available_in;
  VAR_5->next_in = VAR_5->input;
  if (FUNC_1(VAR_5->fin)) {
    FUNC_2(VAR_4, "failed to read input [%s]: %s\n",
            FUNC_0(VAR_5->current_input_path), FUNC_4(VAR_2));
    return VAR_0;
  }
  return VAR_1;
}
