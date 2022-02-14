
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__* params; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_3, const char *VAR_4, uint32_t VAR_5, int VAR_6)
{
   int VAR_7 = -1;
   int VAR_8 = FUNC_2(VAR_4);

   if(VAR_8 < VAR_0 && FUNC_0() == 0)
   {
      VAR_2.fileserv_msg.params[0] = VAR_3;

      FUNC_3((char*)VAR_2.fileserv_msg.data, VAR_4, VAR_0);

      if (FUNC_4(&VAR_2.fileserv_msg, VAR_5, VAR_8+1+16) == VAR_1)
      {
         if(VAR_6)
            VAR_7 = (int) VAR_2.fileserv_msg.params[0];
         else
            VAR_7 = 0;
      }

      FUNC_1();
   }

   return VAR_7;
}
