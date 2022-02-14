
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int VC_URI_PARTS_T ;
struct TYPE_7__ {char* before; int * after; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_7 (int *,char*,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_3, char **VAR_4)
{
   VC_URI_PARTS_T *VAR_5;
   int VAR_6 = 0;
   size_t VAR_7;

   VAR_5 = FUNC_8();
   if (!VAR_5)
   {
      FUNC_1(((void*)0), "*** Failed to create URI structure.");
      return 1;
   }

   FUNC_2(((void*)0), "Test parameter validation");
   VAR_6 += FUNC_6(VAR_5);

   FUNC_2(((void*)0), "Test parsing URIs:");
   for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
   {
      VAR_6 += FUNC_7(VAR_5, VAR_2[VAR_7].before, VAR_2[VAR_7].after);
   }

   FUNC_2(((void*)0), "Test building URIs:");
   for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
   {
      VAR_6 += FUNC_4(VAR_5, &VAR_0[VAR_7]);
   }

   FUNC_2(((void*)0), "Test merging URIs:");
   for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
   {
      VAR_6 += FUNC_5(VAR_5, &VAR_1[VAR_7]);
   }

   if (VAR_3 > 1)
   {
      FUNC_2(((void*)0), "Test parsing URIs from command line:");

      while (VAR_3-- > 1)
      {


         VAR_6 += FUNC_7(VAR_5, VAR_4[VAR_3], ((void*)0));
      }
   }

   FUNC_9(VAR_5);

   if (VAR_6)
      FUNC_1(((void*)0), "*** %d errors reported", VAR_6);






   return VAR_6;
}
