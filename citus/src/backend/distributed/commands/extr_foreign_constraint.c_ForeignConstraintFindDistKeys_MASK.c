
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ varattno; } ;
typedef TYPE_1__ Var ;
typedef int HeapTuple ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int,char,int **,int *,int*) ;

__attribute__((used)) static void
FUNC_5(HeapTuple VAR_4,
         Var *VAR_5,
         Var *VAR_6,
         int *VAR_7,
         int *VAR_8)
{
 Datum VAR_9 = 0;
 Datum *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 Datum VAR_12 = 0;
 Datum *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 bool VAR_15 = 0;
 int VAR_16 = 0;

 *VAR_8 = -1;
 *VAR_8 = -1;







 VAR_9 = FUNC_3(VAR_2, VAR_4,
             VAR_1, &VAR_15);
 VAR_12 = FUNC_3(VAR_2, VAR_4,
            VAR_0, &VAR_15);

 FUNC_4(FUNC_1(VAR_9), VAR_3, 2, 1,
       's', &VAR_10, ((void*)0), &VAR_11);
 FUNC_4(FUNC_1(VAR_12), VAR_3, 2, 1,
       's', &VAR_13, ((void*)0), &VAR_14);

 FUNC_0(VAR_11 == VAR_14);

 for (VAR_16 = 0; VAR_16 < VAR_11; ++VAR_16)
 {
  AttrNumber VAR_17 = FUNC_2(VAR_10[VAR_16]);
  AttrNumber VAR_18 = FUNC_2(VAR_13[VAR_16]);

  if (VAR_6 != ((void*)0) &&
   VAR_6->varattno == VAR_18)
  {
   *VAR_8 = VAR_16;
  }

  if (VAR_5 != ((void*)0) &&
   VAR_5->varattno == VAR_17)
  {
   *VAR_7 = VAR_16;
  }
 }
}
