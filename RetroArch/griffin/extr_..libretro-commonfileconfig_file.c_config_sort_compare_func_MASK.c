
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {int key; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct config_entry_list *VAR_0,
      struct config_entry_list *VAR_1)
{
   return (VAR_0 && VAR_1) ? FUNC_0(VAR_0->key, VAR_1->key) : 0;
}
