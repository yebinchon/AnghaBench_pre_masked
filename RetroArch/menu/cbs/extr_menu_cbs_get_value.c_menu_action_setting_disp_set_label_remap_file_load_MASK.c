
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int remapfile; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;
typedef int file_list_t ;


 int FUNC_0 (char*,int ,size_t) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_4(
      file_list_t* VAR_0,
      unsigned *VAR_1, unsigned VAR_2, unsigned VAR_3,
      const char *VAR_4,
      char *VAR_5, size_t VAR_6,
      const char *VAR_7,
      char *VAR_8, size_t VAR_9)
{
   global_t *VAR_10 = FUNC_1();

   *VAR_1 = 19;
   FUNC_3(VAR_8, VAR_7, VAR_9);
   if (VAR_10 && !FUNC_2(VAR_10->name.remapfile))
      FUNC_0(VAR_5, VAR_10->name.remapfile,
            VAR_6);
}
