
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gameport *VAR_2, int VAR_3, unsigned int *VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 int VAR_10 = FUNC_1(VAR_2, VAR_1);

 VAR_4[0] = 0;
 VAR_8 = VAR_10;
 VAR_9 = 0;

 FUNC_3(VAR_5);

 VAR_7 = FUNC_0(VAR_2) >> VAR_3;

 do {
  VAR_8--;
  VAR_6 = VAR_7; VAR_7 = (FUNC_0(VAR_2) >> VAR_3) & 3;
  if (~VAR_7 & VAR_6 & 1) {
   VAR_4[0] |= (VAR_7 >> 1) << VAR_9++;
   VAR_8 = VAR_10;
  }
 } while (VAR_9 < VAR_0 && VAR_8 > 0);

 FUNC_2(VAR_5);

 if (VAR_9 < VAR_0) return -1;

 for (VAR_9 = 0; VAR_9 < VAR_0 && (VAR_4[0] & 0xfe4210) ^ 0x7c0000; VAR_9++)
  VAR_4[0] = VAR_4[0] >> 1 | (VAR_4[0] & 1) << (VAR_0 - 1);

 return -(VAR_9 == VAR_0);
}
