
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int task_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(uint32_t VAR_10)
{
 FUNC_1(VAR_7, VAR_4);

 FUNC_0(VAR_6 | VAR_1);

 kern_return_t VAR_11 = FUNC_3();
 if (VAR_11 != VAR_3) {
  FUNC_0(VAR_5, VAR_2, VAR_11);
  FUNC_0(VAR_6 | VAR_0, 0);
  return;
 }

 for (unsigned int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  task_t VAR_13 = VAR_8[VAR_12];

  FUNC_2(VAR_13, VAR_10);
 }

 for(unsigned int VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  FUNC_4(VAR_8[VAR_14]);
 }

 FUNC_0(VAR_6 | VAR_0, VAR_9);
}
