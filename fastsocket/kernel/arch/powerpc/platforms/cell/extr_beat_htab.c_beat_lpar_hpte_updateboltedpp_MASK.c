
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (int ,unsigned long,int ,unsigned long,int ,int,int *,int *) ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2,
       unsigned long VAR_3,
       int VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
 u64 VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_3, VAR_0);
 VAR_9 = (VAR_8 << 28) | (VAR_3 & 0x0fffffff);

 FUNC_4(&VAR_1);
 VAR_7 = FUNC_1(VAR_9, VAR_4);
 FUNC_0(VAR_7 == -1);

 VAR_6 = FUNC_2(0, VAR_7, 0, VAR_2, 0, 7,
  &VAR_10, &VAR_11);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_6 != 0);
}
