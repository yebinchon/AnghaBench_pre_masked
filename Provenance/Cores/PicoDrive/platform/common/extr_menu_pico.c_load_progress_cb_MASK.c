
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned short*,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 int VAR_4, VAR_5 = VAR_3 * VAR_1 / 100;
 unsigned short *VAR_6;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 FUNC_1(0, 1);
 VAR_6 = (unsigned short *)VAR_0 + VAR_1 * VAR_2 * 2;
 for (VAR_4 = VAR_2 - 2; VAR_4 > 0; VAR_4--, VAR_6 += VAR_1)
  FUNC_0(VAR_6, 0xff, VAR_5 * 2);
 FUNC_2();
}
