
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_2__ {scalar_t__ classid; } ;
typedef int * SysScanDesc ;
typedef int Relation ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_dist_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ,int,int *,int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

bool
FUNC_10(void)
{
 bool VAR_4 = 0;

 SysScanDesc VAR_5 = ((void*)0);
 HeapTuple VAR_6 = ((void*)0);

 Relation VAR_7 = FUNC_5(FUNC_0(), VAR_0);

 TupleDesc VAR_8 = FUNC_3(VAR_7);

 VAR_5 =
  FUNC_7(VAR_7, VAR_2, 0, ((void*)0), 0, ((void*)0));
 while (FUNC_2(VAR_6 = FUNC_9(VAR_5)))
 {
  Form_pg_dist_object VAR_9 =
   (Form_pg_dist_object) FUNC_1(VAR_6);

  if (VAR_9->classid == VAR_3)
  {
   bool VAR_10 = 0;
   VAR_10 =
    FUNC_4(VAR_6,
          VAR_1,
          VAR_8);


   if (!VAR_10)
   {
    VAR_4 = 1;

    break;
   }
  }
 }

 FUNC_8(VAR_5);
 FUNC_6(VAR_7, VAR_0);

 return VAR_4;
}
