
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_status {int counter; int halted; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*,size_t,size_t,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_2(void *VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{
  struct transfer_status *VAR_6 = (struct transfer_status *)VAR_5;
  size_t VAR_7 = VAR_3 * VAR_4;
  VAR_6->counter++;
  if(VAR_6->counter > 1) {


    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
    return VAR_7;
  }
  FUNC_1("Got %d bytes but pausing!\n", (int)VAR_7);
  VAR_6->halted = 1;
  return VAR_0;
}
