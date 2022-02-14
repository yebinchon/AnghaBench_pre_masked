
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int csh ;
struct TYPE_2__ {char* member_1; int member_0; } ;
typedef TYPE_1__ cs_opt_mnem ;
typedef int cs_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6()
{
 csh VAR_4;
 cs_err VAR_5;

 cs_opt_mnem VAR_6 = { VAR_3, "jnz" };

 cs_opt_mnem VAR_7 = { VAR_3, ((void*)0) };

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (VAR_5) {
  FUNC_5("Failed on cs_open() with error returned: %u\n", VAR_5);
  FUNC_0();
 }


 FUNC_5("Disassemble X86 code with default instruction mnemonic\n");
 FUNC_4(VAR_4);


 FUNC_5("\nNow customize engine to change mnemonic from 'JNE' to 'JNZ'\n");
 FUNC_3(VAR_4, VAR_2, (size_t)&VAR_6);


 FUNC_4(VAR_4);


 FUNC_5("\nReset engine to use the default mnemonic\n");
 FUNC_3(VAR_4, VAR_2, (size_t)&VAR_7);


 FUNC_4(VAR_4);


 FUNC_1(&VAR_4);
}
