
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {int output; } ;


 long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static long FUNC_2(struct callback_data *VAR_1)
{
  if(VAR_1->output) {
    FUNC_1("DOWNLOADED\n");
    FUNC_0(VAR_1->output);
    VAR_1->output = 0x0;
  }
  return VAR_0;
}
