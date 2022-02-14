
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps_key_entry {int code; } ;


 struct tps_key_entry* VAR_0 ;

__attribute__((used)) static struct tps_key_entry *FUNC_0(int VAR_1)
{
 struct tps_key_entry *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->code; VAR_2++)
  if (VAR_1 == VAR_2->code)
   return VAR_2;

 return ((void*)0);
}
