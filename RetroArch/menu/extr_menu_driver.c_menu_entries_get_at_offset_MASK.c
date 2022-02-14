
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_5__ {char* alt; char* path; } ;


 int FUNC_0 (TYPE_2__ const*,size_t,char const**,char const**,unsigned int*,size_t*) ;

void FUNC_1(const file_list_t *VAR_0, size_t VAR_1,
      const char **VAR_2, const char **VAR_3, unsigned *VAR_4,
      size_t *VAR_5, const char **VAR_6)
{
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   if (VAR_0 && VAR_6)
      *VAR_6 = VAR_0->list[VAR_1].alt
         ? VAR_0->list[VAR_1].alt
         : VAR_0->list[VAR_1].path;
}
