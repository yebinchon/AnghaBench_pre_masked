
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_URI_PARTS_T ;
struct TYPE_3__ {int merged; int relative; int base; } ;
typedef TYPE_1__ MERGE_URI_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(VC_URI_PARTS_T *VAR_0, MERGE_URI_T *VAR_1)
{
   VC_URI_PARTS_T *VAR_2;

   FUNC_1(((void*)0), "Base <%s>, relative <%s>, expect <%s>", VAR_1->base, VAR_1->relative, VAR_1->merged);

   FUNC_3(VAR_0);
   VAR_2 = FUNC_4();
   if (!VAR_2)
   {
      FUNC_0(((void*)0), "*** Failed to allocate base URI structure");
      return 1;
   }

   if (!FUNC_6(VAR_2, VAR_1->base))
   {
      FUNC_0(((void*)0), "*** Failed to parse base URI structure");
      return 1;
   }
   if (!FUNC_6(VAR_0, VAR_1->relative))
   {
      FUNC_0(((void*)0), "*** Failed to parse relative URI structure");
      return 1;
   }

   if (!FUNC_5(VAR_2, VAR_0))
   {
      FUNC_0(((void*)0), "*** Failed to merge base and relative URIs");
      return 1;
   }

   FUNC_7(VAR_2);

   return FUNC_2(VAR_0, VAR_1->merged);
}
