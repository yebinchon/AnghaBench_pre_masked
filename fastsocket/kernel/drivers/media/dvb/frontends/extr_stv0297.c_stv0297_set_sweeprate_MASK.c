
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;


 int FUNC_0 (struct stv0297_state*,int,long) ;
 int FUNC_1 (struct stv0297_state*,int,int,long) ;

__attribute__((used)) static void FUNC_2(struct stv0297_state *VAR_0, short VAR_1, long VAR_2)
{
 long VAR_3;

 VAR_3 = (long) VAR_1 *262144L;
 VAR_3 /= VAR_2;
 VAR_3 *= 1024;


 if (VAR_3 >= 0) {
  VAR_3 += 500000;
 } else {
  VAR_3 -= 500000;
 }
 VAR_3 /= 1000000;

 FUNC_0(VAR_0, 0x60, VAR_3 & 0xFF);
 FUNC_1(VAR_0, 0x69, 0xF0, (VAR_3 >> 4) & 0xf0);
}
