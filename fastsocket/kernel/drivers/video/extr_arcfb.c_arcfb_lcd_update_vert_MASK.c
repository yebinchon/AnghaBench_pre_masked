
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcfb_par {int dummy; } ;


 int FUNC_0 (struct arcfb_par*,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct arcfb_par *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = (VAR_2 - VAR_1) + 1;
 VAR_6 = VAR_1;
 VAR_7 = VAR_1 + 7;

 while (VAR_5 > 0) {
  VAR_5 -= 8;
  FUNC_0(VAR_0, VAR_6, VAR_3, VAR_4, 8);
  VAR_6 = VAR_7 + 1;
  VAR_7 = VAR_6 + 7;
 }
}
