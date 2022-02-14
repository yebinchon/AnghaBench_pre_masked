
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned short*,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 int VAR_3, VAR_4 = VAR_2 * 480 / 100;
 unsigned short *VAR_5;



 VAR_5 = (unsigned short *)VAR_1 + 512*10*VAR_0;

 if (VAR_4 > 480) VAR_4 = 480;
 for (VAR_3 = 8; VAR_3 > 0; VAR_3--, VAR_5 += 512)
  FUNC_0(VAR_5, 0xff, VAR_4*2);
}
