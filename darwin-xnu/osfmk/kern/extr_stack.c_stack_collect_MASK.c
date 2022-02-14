
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int spl_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 unsigned int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

void
FUNC_9(void)
{
 if (VAR_8 != VAR_6) {
  unsigned int VAR_14;
  vm_offset_t VAR_15;
  spl_t VAR_16;

  VAR_16 = FUNC_2();
  FUNC_4();

  VAR_14 = VAR_12 + (VAR_2 * VAR_7);
  VAR_14 += (VAR_10 >= 0)? VAR_10: -VAR_10;

  while (VAR_9 > VAR_14) {
   VAR_15 = VAR_11;
   VAR_11 = FUNC_5(VAR_15);
   VAR_9--; VAR_13--;
   FUNC_6();
   FUNC_3(VAR_16);
   VAR_15 = (vm_offset_t)FUNC_8(
    VAR_15,
    FUNC_0(VAR_4));
   VAR_15 -= VAR_1;
   if (FUNC_7(
        VAR_4,
        VAR_15,
        VAR_15 + VAR_5+(2*VAR_1),
        VAR_3)
       != VAR_0)
    FUNC_1("stack_collect: vm_map_remove");
   VAR_15 = 0;

   VAR_16 = FUNC_2();
   FUNC_4();

   VAR_14 = VAR_12 + (VAR_2 * VAR_7);
   VAR_14 += (VAR_10 >= 0)? VAR_10: -VAR_10;
  }

  VAR_6 = VAR_8;

  FUNC_6();
  FUNC_3(VAR_16);
 }
}
