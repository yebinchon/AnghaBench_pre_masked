
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TrackerServerInfo ;
typedef int FDFSTrunkFullInfo ;
typedef int ConnectionInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int **,char*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int const*,int) ;

int FUNC_4(const FDFSTrunkFullInfo *VAR_1)
{
 int VAR_2;
 TrackerServerInfo VAR_3;
 ConnectionInfo *VAR_4;

 if (VAR_0)
 {
  return FUNC_3(VAR_1, 1);
 }

    if ((VAR_2=FUNC_1(&VAR_3,
                    &VAR_4, "free trunk space fail")) != 0)
    {
        return VAR_2;
    }

 VAR_2 = FUNC_2(VAR_4, VAR_1);
 FUNC_0(VAR_4, VAR_2 != 0);
 return VAR_2;
}
