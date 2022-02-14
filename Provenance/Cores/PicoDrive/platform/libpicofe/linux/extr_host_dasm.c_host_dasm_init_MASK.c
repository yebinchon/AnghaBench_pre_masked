
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disassembler_options; int endian; int mach; int arch; int read_memory_func; int print_address_func; int memory_error_func; int flavour; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_9 ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
  FUNC_0();
  FUNC_3(VAR_9[0]);

  FUNC_2(&VAR_5, ((void*)0), VAR_11);
  VAR_5.flavour = VAR_4;
  VAR_5.memory_error_func = VAR_6;
  VAR_5.print_address_func = VAR_7;

  VAR_5.read_memory_func = VAR_8;
  VAR_5.arch = VAR_0;
  VAR_5.mach = VAR_2;
  VAR_5.endian = VAR_1;
  VAR_5.disassembler_options = VAR_3;
  FUNC_1(&VAR_5);
  VAR_10 = 1;
}
