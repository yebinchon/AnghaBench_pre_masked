
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int) ;

int FUNC_5(const char *VAR_4, const char *VAR_5)
{
   int VAR_6, VAR_7, VAR_8 = -1;


   if ((VAR_6 = FUNC_2(VAR_4)) < VAR_1 && (VAR_7 = FUNC_2(VAR_5)) < VAR_1 && FUNC_0() == 0)
   {
      FUNC_3((char *)VAR_3.fileserv_msg.data, VAR_4, VAR_1);
      FUNC_3((char *)&VAR_3.fileserv_msg.data[VAR_6+1], VAR_5, VAR_1);

      if (FUNC_4(&VAR_3.fileserv_msg, VAR_2, 16+VAR_6+1+VAR_7+1) == VAR_0)
         VAR_8 = 0;

      FUNC_1();
   }

   return VAR_8;
}
