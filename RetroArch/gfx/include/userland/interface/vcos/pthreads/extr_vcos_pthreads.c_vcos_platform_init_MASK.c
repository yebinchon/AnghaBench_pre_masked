
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_3__ {int thread; int suspend; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_10 (int) ;

VCOS_STATUS_T FUNC_11(void)
{
   VCOS_STATUS_T VAR_11;
   uint32_t VAR_12 = 0;
   int VAR_13;

   VAR_11 = FUNC_0();
   if (!FUNC_10(VAR_11 == VAR_5))
      goto end;

   VAR_12 |= VAR_3;
   VAR_11 = FUNC_7(&VAR_8, VAR_7);
   if (!FUNC_10(VAR_11 == VAR_5))
      goto end;


   VAR_11 = FUNC_8(&VAR_10.suspend, ((void*)0), 0);
   if (!FUNC_10(VAR_11 == VAR_5))
      goto end;

   VAR_12 |= VAR_1;

   VAR_10.thread = FUNC_2();

   VAR_13 = FUNC_3(VAR_6, &VAR_10);
   if (!FUNC_10(VAR_13 == 0))
   {
      VAR_11 = VAR_0;
      goto end;
   }

   VAR_11 = FUNC_5();
   if (!FUNC_10(VAR_11 == VAR_5))
      goto end;

   VAR_12 |= VAR_2;

   FUNC_4();

end:
   if (VAR_11 != VAR_5)
      FUNC_9(VAR_12);

   return VAR_11;
}
