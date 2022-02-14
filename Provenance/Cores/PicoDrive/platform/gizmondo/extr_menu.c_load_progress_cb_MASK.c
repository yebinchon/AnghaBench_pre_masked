
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 int VAR_2, VAR_3 = VAR_1 * 320 / 100;
 unsigned short *VAR_4;

 FUNC_1(0);
 VAR_4 = (unsigned short *)VAR_0 + 321*20;

 if (VAR_3 > 320) VAR_3 = 320;
 for (VAR_2 = 10; VAR_2 > 0; VAR_2--, VAR_4 += 321)
  FUNC_0(VAR_4, 0xff, VAR_3*2);
 FUNC_2();
}
