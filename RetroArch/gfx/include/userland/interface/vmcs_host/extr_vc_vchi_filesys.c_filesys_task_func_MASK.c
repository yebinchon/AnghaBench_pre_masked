
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ initialised; int open_handle; int vc_msg; int filesys_msg_avail; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void *FUNC_6(void *VAR_3)
{
   int32_t VAR_4;
   uint32_t VAR_5;

   (void)VAR_3;

   FUNC_1();

   while(1) {

      if (FUNC_5(&VAR_2.filesys_msg_avail) != VAR_1 || VAR_2.initialised == 0)
         break;

      FUNC_4(VAR_2.open_handle);

      while (1) {
         VAR_4 = FUNC_2(VAR_2.open_handle, &VAR_2.vc_msg,
                                    sizeof(VAR_2.vc_msg), &VAR_5, VAR_0);
         if (!VAR_4)
            break;


         VAR_4 = (int32_t) FUNC_0(&VAR_2.vc_msg, VAR_5);
         (void)VAR_4;
      }
      FUNC_3(VAR_2.open_handle);
   }

   return 0;
}
