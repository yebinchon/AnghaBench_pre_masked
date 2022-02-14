
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ file_list_t ;


 int FUNC_0 (TYPE_1__ const*,scalar_t__,char const**,char const**,unsigned int*,size_t*) ;

void FUNC_1(const file_list_t *VAR_0,
      const char **VAR_1, const char **VAR_2,
      unsigned *VAR_3, size_t *VAR_4)
{
   if (VAR_0 && VAR_0->size)
      FUNC_0(VAR_0, VAR_0->size - 1, VAR_1, VAR_2, VAR_3, VAR_4);
}
