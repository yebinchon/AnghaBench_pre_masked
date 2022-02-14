
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned long VAR_7 = FUNC_0() / 1024;
 int VAR_8;

 VAR_8 =
  VAR_7 / VAR_3 / 1024 * 256;



 if (VAR_8 < VAR_2)
  VAR_8 = VAR_2;


 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;

 VAR_6 = VAR_8 * VAR_0;
 VAR_5 = VAR_4 + VAR_6;
}
