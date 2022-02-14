
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int int64_t ;
struct TYPE_6__ {void** params; } ;
struct TYPE_7__ {TYPE_2__ fileserv_msg; } ;
struct TYPE_5__ {int st_size; void* st_modtime; } ;
typedef TYPE_1__ FSTAT_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(int VAR_3, FSTAT_T *VAR_4)
{
   int VAR_5 = -1;

   if (VAR_4 != ((void*)0) && FUNC_0() == 0)
   {
      VAR_2.fileserv_msg.params[0] = (uint32_t) VAR_3;
      if ( FUNC_2(&VAR_2.fileserv_msg, VAR_1, 4) == VAR_0 )
      {
         VAR_4->st_size = (int64_t)VAR_2.fileserv_msg.params[0];
         VAR_4->st_size |= (int64_t)VAR_2.fileserv_msg.params[1] << 32;
         VAR_4->st_modtime = (uint32_t)VAR_2.fileserv_msg.params[2];

         VAR_5 = 0;
      }

      FUNC_1();
   }

   return VAR_5;
}
