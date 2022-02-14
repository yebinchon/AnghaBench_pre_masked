
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(void)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < 100000; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 & VAR_0)
   return 0;
 }
 FUNC_0("wait_DRQ", VAR_3);
 return -1;
}
