
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long) ;
 unsigned long FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(int VAR_1 , u8 VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_2(FUNC_0(VAR_1), VAR_2);
 if (VAR_3 != VAR_0)
  FUNC_1("bad return code qirr - rc = %lx\n", VAR_3);
}
