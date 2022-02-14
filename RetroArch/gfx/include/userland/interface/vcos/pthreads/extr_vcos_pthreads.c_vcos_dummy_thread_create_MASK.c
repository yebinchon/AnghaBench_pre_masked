
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dummy; int suspend; int thread; } ;
typedef TYPE_1__ VCOS_THREAD_T ;
typedef scalar_t__ VCOS_STATUS_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int,int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;

VCOS_THREAD_T *FUNC_8(void)
{
   VCOS_STATUS_T VAR_4;
   VCOS_THREAD_T *VAR_5 = ((void*)0);
   int VAR_6;

   VAR_5 = (VCOS_THREAD_T *)FUNC_5(sizeof(VCOS_THREAD_T), ((void*)0));
   FUNC_3(VAR_5 != ((void*)0));

   FUNC_0(VAR_5, 0, sizeof(VCOS_THREAD_T));

   VAR_5->dummy = 1;
   VAR_5->thread = FUNC_1();

   VAR_4 = FUNC_7(&VAR_5->suspend, ((void*)0), 0);
   if (VAR_4 != VAR_0)
   {
      FUNC_4(VAR_5);
      return( VAR_5 );
   }

   FUNC_6(&VAR_3, VAR_2);

   VAR_6 = FUNC_2(VAR_1,
                            VAR_5);
   (void)VAR_6;

   return( VAR_5 );
}
