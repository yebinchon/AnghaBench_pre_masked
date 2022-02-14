
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t total_out; int current_output_path; int fout; scalar_t__ output; scalar_t__ test_integrity; scalar_t__ next_out; } ;
typedef TYPE_1__ Context ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (scalar_t__,int,size_t,int ) ;
 int VAR_3 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_5(Context* VAR_4) {
  size_t VAR_5 = (size_t)(VAR_4->next_out - VAR_4->output);
  VAR_4->total_out += VAR_5;
  if (VAR_5 == 0) return VAR_1;
  if (VAR_4->test_integrity) return VAR_1;

  FUNC_3(VAR_4->output, 1, VAR_5, VAR_4->fout);
  if (FUNC_1(VAR_4->fout)) {
    FUNC_2(VAR_3, "failed to write output [%s]: %s\n",
            FUNC_0(VAR_4->current_output_path), FUNC_4(VAR_2));
    return VAR_0;
  }
  return VAR_1;
}
