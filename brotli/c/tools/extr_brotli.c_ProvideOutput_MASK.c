
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int output; int next_out; int available_out; } ;
typedef TYPE_1__ Context ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static BROTLI_BOOL FUNC_1(Context* VAR_3) {
  if (!FUNC_0(VAR_3)) return VAR_0;
  VAR_3->available_out = VAR_2;
  VAR_3->next_out = VAR_3->output;
  return VAR_1;
}
