
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
 int FUNC_3 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int VAR_1 ;

int FUNC_4(YabSock VAR_2, int VAR_3, int VAR_4 )
{
   fd_set *VAR_5;
   fd_set *VAR_6;
   struct timeval VAR_7;
   int VAR_8;

   FUNC_1(&VAR_0);
   FUNC_1(&VAR_1);


   if (VAR_3)
   {
      FUNC_0(VAR_2, &VAR_0);
      VAR_5 = &VAR_0;
   }
   else
      VAR_5 = ((void*)0);

   if (VAR_4)
   {
      FUNC_0(VAR_2, &VAR_1);
      VAR_6 = &VAR_1;
   }
   else
      VAR_6 = ((void*)0);

   VAR_7.tv_sec = 0;
   VAR_7.tv_usec = 0;

   if ((VAR_8=FUNC_3(VAR_2+1, VAR_5, VAR_6, ((void*)0), &VAR_7)) < 1)
   {
      FUNC_2("select: %d\n", VAR_8);
      return -1;
   }

   return 0;
}
