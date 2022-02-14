
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TrackerServerInfo ;
typedef int FDFSTrunkFullInfo ;
typedef int ConnectionInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const,int *) ;
 int FUNC_2 (int *,int **,char*) ;
 int FUNC_3 (int *,int const,int *) ;

int FUNC_4(const int VAR_1, FDFSTrunkFullInfo *VAR_2)

{
 int VAR_3;
 TrackerServerInfo VAR_4;
 ConnectionInfo *VAR_5;

 if (VAR_0)
 {
  return FUNC_1(VAR_1, VAR_2);
 }

    if ((VAR_3=FUNC_2(&VAR_4,
                    &VAR_5, "can't alloc trunk space")) != 0)
    {
        return VAR_3;
    }

 VAR_3 = FUNC_3(VAR_5, VAR_1, VAR_2);


 FUNC_0(VAR_5, VAR_3 != 0);
 return VAR_3;
}
