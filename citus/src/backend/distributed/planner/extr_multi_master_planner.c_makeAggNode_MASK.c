
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int targetlist; } ;
typedef TYPE_1__ Plan ;
typedef int Oid ;
typedef int List ;
typedef int AttrNumber ;
typedef int AggStrategy ;
typedef int Agg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ,int ,int,int *,int *,int ,int ,int const,...) ;

__attribute__((used)) static Agg *
FUNC_5(List *VAR_2, List *VAR_3, AggStrategy VAR_4,
   List *VAR_5, Plan *VAR_6)
{
 Agg *VAR_7 = ((void*)0);
 int VAR_8 = FUNC_3(VAR_2);
 AttrNumber *VAR_9 =
  FUNC_1(VAR_2, VAR_6->targetlist);
 Oid *VAR_10 = FUNC_2(VAR_2);
 const int VAR_11 = 10;
 VAR_7 = FUNC_4(VAR_5, VAR_3, VAR_4,
        VAR_0, VAR_8, VAR_9,
        VAR_10,
        VAR_1, VAR_1, VAR_11, VAR_6);


 return VAR_7;
}
