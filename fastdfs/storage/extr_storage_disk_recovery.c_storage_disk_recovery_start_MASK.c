
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char** paths; } ;
struct TYPE_5__ {TYPE_1__* ips; } ;
struct TYPE_4__ {int address; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int *,int const) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,int*) ;
 int FUNC_10 (int ) ;

int FUNC_11(const int VAR_8)
{
 ConnectionInfo VAR_9;
 ConnectionInfo *VAR_10;
 int VAR_11;
 char *VAR_12;

 VAR_12 = VAR_5.paths[VAR_8];
 if ((VAR_11=FUNC_3(VAR_12, 0)) != 0)
 {
  return VAR_11;
 }

 if ((VAR_11=FUNC_2(VAR_12)) != 0)
 {
  return VAR_11;
 }

 if ((VAR_11=FUNC_1(&VAR_9)) != 0)
 {
  if (VAR_11 == VAR_1)
  {
   return FUNC_4(VAR_12);
  }
  else
  {
   return VAR_11;
  }
 }

 while (VAR_4)
 {
  if (FUNC_7(VAR_6, VAR_7.ips[0].address,

            VAR_2) == 0)
  {
   break;
  }
 }

 if (!VAR_4)
 {
  return VAR_0;
 }

 if ((VAR_10=FUNC_9(&VAR_9, &VAR_11)) == ((void*)0))
 {
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_8);
 FUNC_8(VAR_10, 1);
 if (VAR_11 != 0)
 {
  return VAR_11;
 }


 if ((VAR_11=FUNC_3(VAR_12, 1)) != 0)
 {
  return VAR_11;
 }

 if ((VAR_11=FUNC_5( VAR_8)) != 0)

 {
  char VAR_13[VAR_3];
  FUNC_10(FUNC_0(VAR_12, VAR_13));
  return VAR_11;
 }

 return 0;
}
