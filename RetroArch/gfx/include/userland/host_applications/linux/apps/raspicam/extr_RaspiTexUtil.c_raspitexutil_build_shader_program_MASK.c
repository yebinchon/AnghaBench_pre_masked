
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int log ;
struct TYPE_5__ {char** attribute_names; int* attribute_locations; char** uniform_names; int* uniform_locations; void* vs; void* fs; int program; struct TYPE_5__* fragment_source; struct TYPE_5__* vertex_source; } ;
typedef TYPE_1__ RASPITEXUTIL_SHADER_PROGRAM_T ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int,int*,char*) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (void*,int,int*,char*) ;
 int FUNC_10 (void*,int ,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*,int,TYPE_1__**,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,char*,int) ;

int FUNC_17(RASPITEXUTIL_SHADER_PROGRAM_T *VAR_7)
{
   GLint VAR_8;
   int VAR_9 = 0;
   char VAR_10[1024];
   int VAR_11 = 0;
   FUNC_14(VAR_7);
   FUNC_14(VAR_7->vertex_source);
   FUNC_14(VAR_7->fragment_source);

   if (! (VAR_7 && VAR_7->vertex_source && VAR_7->fragment_source))
      goto fail;

   VAR_7->vs = VAR_7->fs = 0;

   VAR_7->vs = FUNC_3(VAR_3);
   FUNC_13(VAR_7->vs, 1, &VAR_7->vertex_source, ((void*)0));
   FUNC_1(VAR_7->vs);
   FUNC_10(VAR_7->vs, VAR_0, &VAR_8);
   if (! VAR_8)
   {
      FUNC_9(VAR_7->vs, sizeof(VAR_10), &VAR_11, VAR_10);
      FUNC_15("Program info log %s", VAR_10);
      goto fail;
   }

   VAR_7->fs = FUNC_3(VAR_1);
   FUNC_13(VAR_7->fs, 1, &VAR_7->fragment_source, ((void*)0));
   FUNC_1(VAR_7->fs);

   FUNC_10(VAR_7->fs, VAR_0, &VAR_8);
   if (! VAR_8)
   {
      FUNC_9(VAR_7->fs, sizeof(VAR_10), &VAR_11, VAR_10);
      FUNC_15("Program info log %s", VAR_10);
      goto fail;
   }

   VAR_7->program = FUNC_2();
   FUNC_0(VAR_7->program, VAR_7->vs);
   FUNC_0(VAR_7->program, VAR_7->fs);
   FUNC_12(VAR_7->program);
   FUNC_8(VAR_7->program, VAR_2, &VAR_8);
   if (! VAR_8)
   {
      FUNC_15("Failed to link shader program");
      FUNC_7(VAR_7->program, sizeof(VAR_10), &VAR_11, VAR_10);
      FUNC_15("Program info log %s", VAR_10);
      goto fail;
   }

   for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
   {
      if (! VAR_7->attribute_names[VAR_9])
         break;
      VAR_7->attribute_locations[VAR_9] = FUNC_6(VAR_7->program, VAR_7->attribute_names[VAR_9]);
      if (VAR_7->attribute_locations[VAR_9] == -1)
      {
         FUNC_15("Failed to get location for attribute %s",
                        VAR_7->attribute_names[VAR_9]);
         goto fail;
      }
      else
      {
         FUNC_16("Attribute for %s is %d",
                        VAR_7->attribute_names[VAR_9], VAR_7->attribute_locations[VAR_9]);
      }
   }

   for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9)
   {
      if (! VAR_7->uniform_names[VAR_9])
         break;
      VAR_7->uniform_locations[VAR_9] = FUNC_11(VAR_7->program, VAR_7->uniform_names[VAR_9]);
      if (VAR_7->uniform_locations[VAR_9] == -1)
      {
         FUNC_15("Failed to get location for uniform %s",
                        VAR_7->uniform_names[VAR_9]);
         goto fail;
      }
      else
      {
         FUNC_16("Uniform for %s is %d",
                        VAR_7->uniform_names[VAR_9], VAR_7->uniform_locations[VAR_9]);
      }
   }

   return 0;

fail:
   FUNC_15("%s: Failed to build shader program", VAR_6);
   if (VAR_7)
   {
      FUNC_4(VAR_7->program);
      FUNC_5(VAR_7->fs);
      FUNC_5(VAR_7->vs);
   }
   return -1;
}
