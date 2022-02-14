
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
typedef int uint8_t ;
typedef int tmp ;
struct string_list {int size; TYPE_1__* elems; } ;
typedef scalar_t__ int64_t ;
typedef int include_path ;
typedef int include_file ;
struct TYPE_2__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,void**,scalar_t__*) ;
 int FUNC_3 (char*,char const*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,int) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char*,int,char*,unsigned int,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_10 (struct string_list*) ;
 int FUNC_11 (char*,char) ;
 struct string_list* FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char const*,int ) ;

bool FUNC_14(const char *VAR_1,
      struct string_list *VAR_2, bool VAR_3)
{
   char VAR_4[VAR_0];
   union string_list_elem_attr VAR_5;
   size_t VAR_6;
   const char *VAR_7 = ((void*)0);
   uint8_t *VAR_8 = ((void*)0);
   int64_t VAR_9 = 0;
   struct string_list *VAR_10 = ((void*)0);

   VAR_4[0] = '\0';
   VAR_5.i = 0;


   if (FUNC_8(VAR_1) || !VAR_2)
      return 0;

   VAR_7 = FUNC_6(VAR_1);

   if (FUNC_8(VAR_7))
      return 0;


   if (!FUNC_2(VAR_1, (void**)&VAR_8, &VAR_9))
   {
      FUNC_0("Failed to open shader file: \"%s\".\n", VAR_1);
      return 0;
   }

   if (VAR_9 > 0)
   {

      FUNC_11((char*)VAR_8, '\r');



      VAR_10 = FUNC_12((char*)VAR_8, "\n");
   }


   if (VAR_8)
      FUNC_4(VAR_8);


   if (!VAR_10)
      return 0;

   if (VAR_10->size < 1)
      goto error;



   if (VAR_3)
   {
      const char *VAR_11 = VAR_10->elems[0].data;

      if (FUNC_13("#version ", VAR_11, FUNC_1("#version ")))
      {
         FUNC_0("First line of the shader must contain a valid #version string.\n");
         goto error;
      }

      if (!FUNC_9(VAR_2, VAR_11, VAR_5))
         goto error;





      if (!FUNC_9(VAR_2, "#extension GL_GOOGLE_cpp_style_line_directive : require", VAR_5))
         goto error;
   }



   FUNC_7(VAR_4, sizeof(VAR_4), "#line %u \"%s\"", VAR_3 ? 2 : 1, VAR_7);
   if (!FUNC_9(VAR_2, VAR_4, VAR_5))
      goto error;


   for (VAR_6 = VAR_3 ? 1 : 0; VAR_6 < VAR_10->size; VAR_6++)
   {
      unsigned VAR_12 = 0;
      const char *VAR_13 = VAR_10->elems[VAR_6].data;


      if (!FUNC_13("#include ", VAR_13, FUNC_1("#include ")))
      {
         char VAR_14[VAR_0];
         char VAR_15[VAR_0];

         VAR_14[0] = '\0';
         VAR_15[0] = '\0';


         FUNC_5(VAR_13, VAR_14, sizeof(VAR_14));

         if (FUNC_8(VAR_14))
         {
            FUNC_0("Invalid include statement \"%s\".\n", VAR_13);
            goto error;
         }

         FUNC_3(
               VAR_15, VAR_1, VAR_14, sizeof(VAR_15));


         if (!FUNC_14(VAR_15, VAR_2, 0))
            goto error;



         VAR_12 = 1;
      }
      else if (!FUNC_13("#endif", VAR_13, FUNC_1("#endif")) ||
               !FUNC_13("#pragma", VAR_13, FUNC_1("#pragma")))
      {





         VAR_12 = 2;
         if (!FUNC_9(VAR_2, VAR_13, VAR_5))
            goto error;
      }
      else
         if (!FUNC_9(VAR_2, VAR_13, VAR_5))
            goto error;

      if (VAR_12 != 0)
      {
         FUNC_7(VAR_4, sizeof(VAR_4), "#line %u \"%s\"",
               (unsigned)(VAR_6 + VAR_12), VAR_7);
         if (!FUNC_9(VAR_2, VAR_4, VAR_5))
            goto error;
      }
   }

   FUNC_10(VAR_10);

   return 1;

error:

   if (VAR_10)
      FUNC_10(VAR_10);

   return 0;
}
