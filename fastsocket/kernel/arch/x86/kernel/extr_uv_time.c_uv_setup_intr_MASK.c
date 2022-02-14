
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 unsigned long VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int,int ,long) ;

__attribute__((used)) static int FUNC_6(int VAR_11, u64 VAR_12)
{
 u64 VAR_13;
 unsigned long VAR_14 = FUNC_0(VAR_11) | VAR_10;
 int VAR_15 = FUNC_2(VAR_11);

 FUNC_5(VAR_15, VAR_3,
  VAR_5);
 FUNC_5(VAR_15, VAR_2, -1L);

 if (FUNC_1())
  FUNC_5(VAR_15, VAR_1,
    VAR_0);
 else
  FUNC_5(VAR_15, VAR_7,
    VAR_8);

 VAR_13 = (VAR_9 << VAR_6) |
  ((u64)VAR_14 << VAR_4);


 FUNC_5(VAR_15, VAR_3, VAR_13);

 FUNC_5(VAR_15, VAR_2, VAR_12);

 if (FUNC_4(((void*)0)) <= VAR_12)
  return 0;

 return !FUNC_3(VAR_15);
}
