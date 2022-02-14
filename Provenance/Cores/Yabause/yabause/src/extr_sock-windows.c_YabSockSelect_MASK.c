
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
typedef scalar_t__ YabSock ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int VAR_2 ;

int FUNC_5(YabSock VAR_3, int VAR_4, int VAR_5 )
{
   fd_set *VAR_6;
   fd_set *VAR_7;
   struct timeval VAR_8;
   int VAR_9;

   FUNC_1(&VAR_1);
   FUNC_1(&VAR_2);


   if (VAR_4)
   {
      FUNC_0(VAR_3, &VAR_1);
      VAR_6 = &VAR_1;
   }
   else
      VAR_6 = ((void*)0);

   if (VAR_5)
   {
      FUNC_0(VAR_3, &VAR_2);
      VAR_7 = &VAR_2;
   }
   else
      VAR_7 = ((void*)0);

   VAR_8.tv_sec = 0;
   VAR_8.tv_usec = 0;

   if ((VAR_9=FUNC_4(VAR_3+1, VAR_6, VAR_7, ((void*)0), &VAR_8)) < 1)
   {
      if (VAR_9 == VAR_0)
         FUNC_2("select: err code %d\n", FUNC_3());
      else
         FUNC_2("select: %d\n", VAR_9);
      return -1;
   }

   return 0;
}
