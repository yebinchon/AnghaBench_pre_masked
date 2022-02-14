
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct addrinfo {int dummy; } ;
typedef int netplay_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct addrinfo*) ;
 int VAR_1 ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void**,int ,int *,int ) ;

__attribute__((used)) static bool FUNC_5(netplay_t *VAR_2, uint16_t VAR_3)
{
   struct addrinfo *VAR_4 = ((void*)0);
   int VAR_5 = FUNC_4((void **) &VAR_4, VAR_3, ((void*)0), VAR_0);

   if (VAR_5 < 0)
      goto error;

   if (!FUNC_2(VAR_5, (void*)VAR_4))
   {
      FUNC_3(VAR_5);
      goto error;
   }

   VAR_1 = VAR_5;
   FUNC_1(VAR_4);

   return 1;

error:
   if (VAR_4)
      FUNC_1(VAR_4);
   FUNC_0("[discovery] Failed to initialize netplay advertisement socket\n");
   return 0;
}
