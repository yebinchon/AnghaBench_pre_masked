
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 if (VAR_1 <= 0 || VAR_1 > 16) {
  FUNC_0("add_job_940: bad job: %i\n", VAR_1);
  return;
 }


 VAR_1--;
 VAR_0[(0x3B20+VAR_1*2)>>1] = 1;


}
