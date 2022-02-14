
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fpga_t ;
struct TYPE_3__ {int only_munmap; scalar_t__ only_mmap; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
   fpga_t *VAR_3 = (fpga_t*)VAR_2;

   if (VAR_0)
   {
      FUNC_2(VAR_0);
      VAR_0 = ((void*)0);
   }

   if (!VAR_3)
      return;

   FUNC_1();
   FUNC_3();

   FUNC_2(VAR_3);

   VAR_1.only_mmap = 0;
   VAR_1.only_munmap = 1;

   FUNC_0(&VAR_1);
}
