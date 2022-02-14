
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef int text ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int) ;
 int * FUNC_7 (int ) ;
 int VAR_4 ;

uint64
FUNC_8()
{
 text *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_0;
 Datum VAR_7 = 0;
 Oid VAR_8 = VAR_0;
 int VAR_9 = 0;
 Datum VAR_10 = 0;
 uint64 VAR_11 = 0;
 if (VAR_1 > 0)
 {
  VAR_11 = VAR_1;
  VAR_1 += 1;

  return VAR_11;
 }

 VAR_5 = FUNC_7(VAR_3);
 VAR_6 = FUNC_5(VAR_5, 0);
 VAR_7 = FUNC_4(VAR_6);

 FUNC_3(&VAR_8, &VAR_9);
 FUNC_6(FUNC_0(), VAR_2);


 VAR_10 = FUNC_2(VAR_4, VAR_7);

 FUNC_6(VAR_8, VAR_9);

 VAR_11 = FUNC_1(VAR_10);

 return VAR_11;
}
