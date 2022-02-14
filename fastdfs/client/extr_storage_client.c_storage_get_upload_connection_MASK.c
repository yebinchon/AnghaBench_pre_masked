
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ sock; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,char*,TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,char*,int*) ;

__attribute__((used)) static int FUNC_5(ConnectionInfo *VAR_0, ConnectionInfo **VAR_1, char *VAR_2, ConnectionInfo *VAR_3, int *VAR_4, bool *VAR_5)



{
 int VAR_6;
 bool VAR_7;
 ConnectionInfo *VAR_8;

 if (*VAR_1 == ((void*)0))
 {
  FUNC_0(VAR_0, VAR_8, VAR_6, VAR_7);

  if (*VAR_2 == '\0')
  {
   VAR_6 = FUNC_4( VAR_8, VAR_3, VAR_2, VAR_4);


  }
  else
  {
   VAR_6 = FUNC_3( VAR_8, VAR_2, VAR_3, VAR_4);


  }

  if (VAR_7)
  {
   FUNC_1(VAR_8, VAR_6 != 0);
  }

  if (VAR_6 != 0)
  {
   return VAR_6;
  }

  if ((*VAR_1=FUNC_2(VAR_3,
   &VAR_6)) == ((void*)0))
  {
   return VAR_6;
  }

  *VAR_5 = 1;
 }
 else
 {
  if ((*VAR_1)->sock >= 0)
  {
   *VAR_5 = 0;
  }
  else
  {
   if ((*VAR_1=FUNC_2(
    *VAR_1, &VAR_6)) == ((void*)0))
   {
    return VAR_6;
   }

   *VAR_5 = 1;
  }
 }

 return 0;
}
