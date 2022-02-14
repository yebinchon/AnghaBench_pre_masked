
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; int keycode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct key_entry* VAR_2 ;

__attribute__((used)) static struct key_entry *FUNC_0(int VAR_3)
{
 struct key_entry *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->type != VAR_0; VAR_4++)
  if (VAR_4->type == VAR_1 && VAR_3 == VAR_4->keycode)
   return VAR_4;

 return ((void*)0);
}
