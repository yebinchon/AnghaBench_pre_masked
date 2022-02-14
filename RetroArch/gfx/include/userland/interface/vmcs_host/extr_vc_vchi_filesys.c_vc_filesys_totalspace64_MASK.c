
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int* params; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int ) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int) ;

int64_t FUNC_5(const char *VAR_4)
{
   int64_t VAR_5 = -1LL;

   if(FUNC_0() == 0)
   {
      FUNC_3((char *)VAR_3.fileserv_msg.data, VAR_4, VAR_1);

      if (FUNC_4(&VAR_3.fileserv_msg, VAR_2,
                        (int)(16+FUNC_2((char *)VAR_3.fileserv_msg.data)+1)) == VAR_0)
      {
         VAR_5 = VAR_3.fileserv_msg.params[0];
         VAR_5 += (int64_t)VAR_3.fileserv_msg.params[1] << 32;
      }

      FUNC_1();
   }

   return VAR_5;
}
