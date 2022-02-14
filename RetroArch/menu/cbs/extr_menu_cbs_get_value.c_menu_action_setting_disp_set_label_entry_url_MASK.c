
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {char* alt; char* path; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(
      file_list_t* VAR_0,
      unsigned *VAR_1, unsigned VAR_2, unsigned VAR_3,
      const char *VAR_4,
      char *VAR_5, size_t VAR_6,
      const char *VAR_7,
      char *VAR_8, size_t VAR_9)
{
   const char *VAR_10 = VAR_0->list[VAR_3].alt
      ? VAR_0->list[VAR_3].alt
      : VAR_0->list[VAR_3].path;
   *VAR_5 = '\0';
   *VAR_1 = 8;

   if (!FUNC_0(VAR_10))
      FUNC_1(VAR_8, VAR_10, VAR_9);
   else
      FUNC_1(VAR_8, VAR_7, VAR_9);
}
