
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void)
{

 u64 VAR_3, VAR_4, VAR_5;

 FUNC_3(VAR_1, VAR_3);
 FUNC_3(VAR_2, VAR_4);

 if (!FUNC_1() ||
  !FUNC_0() ||
  !FUNC_2())
  return -VAR_0;

 FUNC_3(VAR_1, VAR_5);
 if (!(VAR_5 - VAR_3))
  return -VAR_0;

 FUNC_3(VAR_2, VAR_5);
 if (!(VAR_5 - VAR_4))
  return -VAR_0;

 return 0;
}
