
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; char* string; int subtype; char* intvalue; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,char*,int,char*,int) ;
 int FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char*) ;

int FUNC_8(source_t *VAR_8, char *VAR_9)
{
 char *VAR_10;
 token_t VAR_11;

 VAR_10 = VAR_9;
 *VAR_10 = 0;

 while(1)
 {
  if (!FUNC_1(VAR_8, &VAR_11)) return VAR_6;

  if (VAR_11.type == VAR_5)
  {
   FUNC_4(VAR_11.string);
   if (FUNC_7(VAR_10) + FUNC_7(VAR_11.string) + 1 > VAR_1)
   {
    FUNC_3(VAR_8, "chat message too long\n");
    return VAR_6;
   }
   FUNC_6(VAR_10, VAR_11.string);
  }

  else if (VAR_11.type == VAR_4 && (VAR_11.subtype & VAR_2))
  {
   if (FUNC_7(VAR_10) + 7 > VAR_1)
   {
    FUNC_3(VAR_8, "chat message too long\n");
    return VAR_6;
   }
   FUNC_5(&VAR_10[FUNC_7(VAR_10)], "%cv%ld%c", VAR_0, VAR_11.intvalue, VAR_0);
  }

  else if (VAR_11.type == VAR_3)
  {
   if (FUNC_7(VAR_10) + 7 > VAR_1)
   {
    FUNC_3(VAR_8, "chat message too long\n");
    return VAR_6;
   }
   FUNC_5(&VAR_10[FUNC_7(VAR_10)], "%cr%s%c", VAR_0, VAR_11.string, VAR_0);
  }
  else
  {
   FUNC_3(VAR_8, "unknown message component %s\n", VAR_11.string);
   return VAR_6;
  }
  if (FUNC_0(VAR_8, ";")) break;
  if (!FUNC_2(VAR_8, ",")) return VAR_6;
 }

 return VAR_7;
}
