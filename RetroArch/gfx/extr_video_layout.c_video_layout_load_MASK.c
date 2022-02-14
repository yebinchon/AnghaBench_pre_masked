
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rxml_document_t ;
typedef int respath ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int view_array; int base_path; scalar_t__ is_archive; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*,void**,int *,scalar_t__*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (void*,size_t) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;

bool FUNC_16(const char *VAR_2)
{
   rxml_document_t *VAR_3;
   bool VAR_4;

   if(!VAR_2 || !FUNC_13(VAR_2))
      return 1;

   VAR_1->is_archive = FUNC_5(VAR_2);

   VAR_3 = ((void*)0);

   if(VAR_1->is_archive)
   {
      void *VAR_5;
      int64_t VAR_6;

      char VAR_7[VAR_0];
      FUNC_12(VAR_7, VAR_2, sizeof(VAR_7));
      FUNC_11(VAR_7, "#", sizeof(VAR_7));
      FUNC_10(&VAR_1->base_path, VAR_7);

      FUNC_11(VAR_7, "default.lay", sizeof(VAR_7));
      if (FUNC_1(VAR_7, &VAR_5, ((void*)0), &VAR_6))
      {
         char *VAR_8;
         if ((VAR_8 = (char*)FUNC_6(VAR_5, (size_t)VAR_6 + 1)))
         {
            VAR_8[(size_t)VAR_6] = '\0';
            VAR_3 = FUNC_9(VAR_8);
            FUNC_3(VAR_8);
         }
         else FUNC_3(VAR_5);
      }
   }
   else
   {
      char VAR_9[VAR_0];
      FUNC_2(VAR_9, VAR_2, sizeof(VAR_9));
      FUNC_10(&VAR_1->base_path, VAR_9);
      VAR_3 = FUNC_8(VAR_2);
   }

   if (!VAR_3)
   {
      FUNC_0("video_layout: unable to open file \"%s\"\n", VAR_2);
      return 0;
   }

   VAR_4 = FUNC_4(&VAR_1->view_array, VAR_3);
   FUNC_7(VAR_3);

   FUNC_15(FUNC_14());
   return VAR_4;
}
