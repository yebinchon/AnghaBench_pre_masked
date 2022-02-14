
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_field {int value; int* bytes; int got; int nbytes; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const char *VAR_1, const char *VAR_2,
         struct insn_field *VAR_3)
{
 FUNC_0(VAR_0, "%s.%s = {\n", VAR_2, VAR_1);
 FUNC_0(VAR_0, "%s\t.value = %d, bytes[] = {%x, %x, %x, %x},\n",
  VAR_2, VAR_3->value, VAR_3->bytes[0], VAR_3->bytes[1],
  VAR_3->bytes[2], VAR_3->bytes[3]);
 FUNC_0(VAR_0, "%s\t.got = %d, .nbytes = %d},\n", VAR_2,
  VAR_3->got, VAR_3->nbytes);
}
