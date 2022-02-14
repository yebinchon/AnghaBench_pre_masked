
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* at_exit; int arg; void* (* entry ) (int ) ;scalar_t__ legacy; scalar_t__ name; scalar_t__ dummy; } ;
typedef TYPE_2__ VCOS_THREAD_T ;
struct TYPE_4__ {int cxt; int (* pfn ) (int ) ;} ;
typedef int (* LEGACY_ENTRY_FN_T ) (int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
   int VAR_3;
   void *VAR_4;
   VCOS_THREAD_T *VAR_5 = (VCOS_THREAD_T *)VAR_2;

   FUNC_5(VAR_5 != ((void*)0));
   VAR_5->dummy = 0;

   FUNC_1(VAR_1, VAR_5);




   if (VAR_5->legacy)
   {
      LEGACY_ENTRY_FN_T VAR_6 = (LEGACY_ENTRY_FN_T)VAR_5->entry;
      (*VAR_6)(0, VAR_5->arg);
      VAR_4 = 0;
   }
   else
   {
      VAR_4 = (*VAR_5->entry)(VAR_5->arg);
   }


   for (VAR_3=0; VAR_5->at_exit[VAR_3].pfn != ((void*)0); VAR_3++)
   {
      VAR_5->at_exit[VAR_3].pfn(VAR_5->at_exit[VAR_3].cxt);
   }

   return VAR_4;
}
