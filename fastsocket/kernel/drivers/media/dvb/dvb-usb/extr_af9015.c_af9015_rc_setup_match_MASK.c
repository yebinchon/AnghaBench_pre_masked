
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct af9015_rc_setup {char* rc_codes; unsigned int id; } ;



__attribute__((used)) static char *FUNC_0(unsigned int VAR_0,
 const struct af9015_rc_setup *VAR_1)
{
 for (; VAR_1->rc_codes; VAR_1++)
  if (VAR_1->id == VAR_0)
   return VAR_1->rc_codes;
 return ((void*)0);
}
