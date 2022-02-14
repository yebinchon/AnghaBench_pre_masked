
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ byte ;
struct TYPE_14__ {scalar_t__ sock; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,int) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,char const*,char const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_5(ConnectionInfo *VAR_1, ConnectionInfo **VAR_2, const byte VAR_3, const char *VAR_4, const char *VAR_5, ConnectionInfo *VAR_6, bool *VAR_7)



{
 int VAR_8;
 bool VAR_9;
 ConnectionInfo *VAR_10;
 if (*VAR_2 == ((void*)0))
 {
  FUNC_0(VAR_1, VAR_10, VAR_8, VAR_9);

  if (VAR_3 == VAR_0)
  {
   VAR_8 = FUNC_3(VAR_10, VAR_6, VAR_4, VAR_5);

  }
  else
  {
   VAR_8 = FUNC_4(VAR_10, VAR_6, VAR_4, VAR_5);

  }

  if (VAR_9)
  {
   FUNC_1(VAR_10, VAR_8 != 0);
  }

  if (VAR_8 != 0)
  {
   return VAR_8;
  }

  if ((*VAR_2=FUNC_2(VAR_6,
   &VAR_8)) == ((void*)0))
  {
   return VAR_8;
  }

  *VAR_7 = 1;
 }
 else
 {
  if ((*VAR_2)->sock >= 0)
  {
   *VAR_7 = 0;
  }
  else
  {
   if ((*VAR_2=FUNC_2(
    *VAR_2, &VAR_8)) == ((void*)0))
   {
    return VAR_8;
   }

   *VAR_7 = 1;
  }
 }

 return 0;
}
