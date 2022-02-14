
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct abituguru_data {scalar_t__ addr; scalar_t__ uguru_ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct abituguru_data*) ;
 scalar_t__ FUNC_2 (struct abituguru_data*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct abituguru_data *VAR_7,
 u8 VAR_8, u8 VAR_9, int VAR_10)
{


 int VAR_11 = VAR_10;

 for (;;) {


  if (FUNC_1(VAR_7) != 0)
   return -VAR_5;
  FUNC_3(VAR_8, VAR_7->addr + VAR_1);
  VAR_7->uguru_ready = 0;



  if (FUNC_2(VAR_7, VAR_3)) {
   if (VAR_10) {
    FUNC_0(3, "timeout exceeded "
     "waiting for more input state, %d "
     "tries remaining\n", VAR_10);
    FUNC_5(VAR_6);
    FUNC_4(VAR_2);
    VAR_10--;
    continue;
   }
   if (VAR_11)
    FUNC_0(1, "timeout exceeded "
     "waiting for more input state "
     "(bank: %d)\n", (int)VAR_8);
   return -VAR_4;
  }
  FUNC_3(VAR_9, VAR_7->addr + VAR_0);
  return 0;
 }
}
