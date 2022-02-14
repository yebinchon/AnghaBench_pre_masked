
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct config_file_userdata {int conf; int * prefix; } ;
typedef int key ;
struct TYPE_2__ {int data; } ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int ,char*,char**) ;
 int FUNC_2 (char*,int ,char const*,char,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (float*,float const*,int) ;
 int FUNC_5 (struct string_list*) ;
 struct string_list* FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(void *VAR_0, const char *VAR_1,
      float **VAR_2, unsigned *VAR_3,
      const float *VAR_4, unsigned VAR_5)
{
   char VAR_6[2][256];
   struct config_file_userdata *VAR_7 = (struct config_file_userdata*)VAR_0;
   char *VAR_8 = ((void*)0);

   FUNC_2(VAR_6[0], VAR_7->prefix[0], VAR_1, '_', sizeof(VAR_6[0]));
   FUNC_2(VAR_6[1], VAR_7->prefix[1], VAR_1, '_', sizeof(VAR_6[1]));

   if ( FUNC_1(VAR_7->conf, VAR_6[0], &VAR_8) ||
         FUNC_1(VAR_7->conf, VAR_6[1], &VAR_8))
   {
      unsigned VAR_9;
      struct string_list *VAR_10 = FUNC_6(VAR_8, " ");
      *VAR_2 = (float*)FUNC_0(VAR_10->size, sizeof(float));
      for (VAR_9 = 0; VAR_9 < VAR_10->size; VAR_9++)
         (*VAR_2)[VAR_9] = (float)FUNC_7(VAR_10->elems[VAR_9].data, ((void*)0));
      *VAR_3 = (unsigned)VAR_10->size;
      FUNC_5(VAR_10);
      FUNC_3(VAR_8);
      return 1;
   }

   *VAR_2 = (float*)FUNC_0(VAR_5, sizeof(float));
   FUNC_4(*VAR_2, VAR_4, sizeof(float) * VAR_5);
   *VAR_3 = VAR_5;
   return 0;
}
