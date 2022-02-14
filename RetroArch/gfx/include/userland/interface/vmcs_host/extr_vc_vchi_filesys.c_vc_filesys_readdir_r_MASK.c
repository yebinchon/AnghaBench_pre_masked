
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dirent {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; scalar_t__* params; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dirent*,void*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int) ;

struct dirent *FUNC_4(void *VAR_3, struct dirent *VAR_4)
{
   struct dirent *VAR_5 = ((void*)0);

   if(FUNC_1() == 0)
   {
      VAR_2.fileserv_msg.params[0] = (uint32_t)VAR_3;
      if (FUNC_3(&VAR_2.fileserv_msg, VAR_1, 4) == VAR_0)
      {
         FUNC_0(VAR_4, (void *)VAR_2.fileserv_msg.data);
         VAR_5 = VAR_4;
      }

      FUNC_2();
   }

   return VAR_5;
}
