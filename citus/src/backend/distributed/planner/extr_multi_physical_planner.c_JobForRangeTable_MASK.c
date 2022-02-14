
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeTblEntry ;
typedef int List ;
typedef int Job ;
typedef scalar_t__ CitusRTEKind ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__*,int *,int *,int **) ;
 int * FUNC_2 (int *,int *) ;
 int * VAR_1 ;

__attribute__((used)) static Job *
FUNC_3(List *VAR_2, RangeTblEntry *VAR_3)
{
 Job *VAR_4 = ((void*)0);
 List *VAR_5 = VAR_1;
 CitusRTEKind VAR_6;

 FUNC_1(VAR_3, &VAR_6, ((void*)0), ((void*)0),
        &VAR_5);

 FUNC_0(VAR_6 == VAR_0);

 VAR_4 = FUNC_2(VAR_2, VAR_5);

 return VAR_4;
}
