
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TrackerServerInfo ;
typedef int FDFSTrunkFullInfo ;
typedef int ConnectionInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*,int const) ;
 int FUNC_2 (int *,int **,char*) ;
 int FUNC_3 (int *,int const*,int const) ;

int FUNC_4(const FDFSTrunkFullInfo *VAR_1, const int VAR_2)

{
 int VAR_3;
 TrackerServerInfo VAR_4;
 ConnectionInfo *VAR_5;

 if (VAR_0)
 {
  return FUNC_1(VAR_1, VAR_2);
 }

    if ((VAR_3=FUNC_2(&VAR_4,
                    &VAR_5, "trunk alloc confirm fail")) != 0)
    {
        return VAR_3;
    }

 VAR_3 = FUNC_3(VAR_5, VAR_1, VAR_2);


 FUNC_0(VAR_5, VAR_3 != 0);
 return VAR_3;
}
