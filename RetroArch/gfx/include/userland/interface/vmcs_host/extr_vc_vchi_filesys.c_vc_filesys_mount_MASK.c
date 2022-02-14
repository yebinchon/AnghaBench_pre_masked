
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* params; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ fileserv_msg; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int) ;

int FUNC_5(const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
   int VAR_8 = -1, VAR_9;
   int VAR_10 = FUNC_3(VAR_5);
   int VAR_11 = FUNC_3(VAR_6);
   int VAR_12 = FUNC_3(VAR_7);

   if(VAR_10 + VAR_11 + VAR_12 + 3 < VAR_0 && FUNC_0() == 0)
   {
      char *VAR_13 = (char *) VAR_4.fileserv_msg.data;

      FUNC_2(VAR_13, VAR_5, VAR_10);
      VAR_13[VAR_10] = 0;
      FUNC_2(VAR_13+VAR_10+1, VAR_6, VAR_11);
      VAR_13[VAR_10+1+VAR_11] = 0;
      FUNC_2(VAR_13+VAR_10+VAR_11+2, VAR_7, VAR_12);
      VAR_13[VAR_10+VAR_11+VAR_12+2] = 0;
      VAR_9 = VAR_10 + VAR_11 + VAR_12 + 3 + (int)(((FILESERV_MSG_T *)0)->data);
      VAR_9 = ((VAR_9 + (VAR_2-1)) & ~(VAR_2-1)) + VAR_2;

      if (FUNC_4(&VAR_4.fileserv_msg, VAR_3, VAR_9) == VAR_1)
         VAR_8 = (int) VAR_4.fileserv_msg.params[0];

      FUNC_1();
   }

   return VAR_8;
}
