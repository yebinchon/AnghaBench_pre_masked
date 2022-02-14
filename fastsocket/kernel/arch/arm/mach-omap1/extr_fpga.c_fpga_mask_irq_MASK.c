
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4)
{
 VAR_4 -= VAR_3;

 if (VAR_4 < 8)
  FUNC_1((FUNC_0(VAR_2)
         & ~(1 << VAR_4)), VAR_2);
 else if (VAR_4 < 16)
  FUNC_1((FUNC_0(VAR_1)
         & ~(1 << (VAR_4 - 8))), VAR_1);
 else
  FUNC_1((FUNC_0(VAR_0)
         & ~(1 << (VAR_4 - 16))), VAR_0);
}
