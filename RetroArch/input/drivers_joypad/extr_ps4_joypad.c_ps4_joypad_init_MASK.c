
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int connected; void* userId; int handle; } ;
struct TYPE_6__ {int ident; } ;
struct TYPE_5__ {void** userId; } ;
typedef void* SceUserServiceUserId ;
typedef TYPE_1__ SceUserServiceLoginUserIdList ;


 int FUNC_0 (char*,int,...) ;
 unsigned int VAR_0 ;
 void* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (int ,int *,int ,int,int ,int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (void*,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(void *VAR_5)
{
   int VAR_6;
   SceUserServiceLoginUserIdList VAR_7;

   VAR_3 = 0;

   FUNC_3();

 VAR_6 = FUNC_5(&VAR_7);

   FUNC_0("sceUserServiceGetLoginUserIdList %x ", VAR_6);

 if (VAR_6 == 0)
 {
      unsigned VAR_8;
      for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
      {
         SceUserServiceUserId VAR_9 = VAR_7.userId[VAR_8];

         FUNC_0("USER %d ID %x\n", VAR_8, VAR_9);

         if (VAR_9 != VAR_1)
         {
            int VAR_10 = 0;

            while (VAR_10 < VAR_3)
            {
               VAR_2[VAR_10].userId = VAR_9;
               VAR_10++;
            }

            if (VAR_10 == VAR_3)
            {
               VAR_2[VAR_3].handle = FUNC_4(VAR_9, 0, 0, ((void*)0));
               FUNC_0("USER %x HANDLE %x\n", VAR_9, VAR_2[VAR_3].handle);
               if (VAR_2[VAR_3].handle > 0)
               {
                  VAR_2[VAR_3].connected = 1;
                  VAR_2[VAR_3].userId = VAR_9;
                  FUNC_0("NEW PAD: num_players %x \n", VAR_3);

                  FUNC_1(
                        FUNC_2(VAR_3),
                        ((void*)0),
                        VAR_4.ident,
                        VAR_3,
                        0,
                        0);
                  VAR_3++;
               }
            }
         }

      }

   }

   return 1;
}
