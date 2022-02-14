
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_out; int total_in; int current_input_path; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(Context* VAR_1) {
  FUNC_2(VAR_0, "[%s]: ", FUNC_1(VAR_1->current_input_path));
  FUNC_0(VAR_1->total_in);
  FUNC_2(VAR_0, " -> ");
  FUNC_0(VAR_1->total_out);
}
