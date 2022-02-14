
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; scalar_t__ value; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(const char *VAR_0, gss_buffer_t VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = VAR_1->length > 128 ? 128 : VAR_1->length;

 FUNC_0("%s:   len = %d value = %p\n", VAR_0 ? VAR_0 : "buffer", (int)VAR_1->length, VAR_1->value);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  const char *VAR_4 = ((VAR_2 + 1) % 8) ? " " : ((VAR_2 + 1) % 16) ? "    " : "\n";
  FUNC_0("%02x%s", ((uint8_t *)VAR_1->value)[VAR_2], VAR_4);
 }
 if (VAR_2 % 16)
  FUNC_0("\n");
}
