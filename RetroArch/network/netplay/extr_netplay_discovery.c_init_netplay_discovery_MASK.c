
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct addrinfo*) ;
 int VAR_1 ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void**,int ,int *,int ) ;

bool FUNC_5(void)
{
   struct addrinfo *VAR_2 = ((void*)0);
   int VAR_3 = FUNC_4((void **) &VAR_2, 0, ((void*)0), VAR_0);

   if (VAR_3 < 0)
      goto error;

   if (!FUNC_2(VAR_3, (void*)VAR_2))
   {
      FUNC_3(VAR_3);
      goto error;
   }

   VAR_1 = VAR_3;
   FUNC_1(VAR_2);
   return 1;

error:
   if (VAR_2)
      FUNC_1(VAR_2);
   FUNC_0("[discovery] Failed to initialize netplay advertisement client socket.\n");
   return 0;
}
