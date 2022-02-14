
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct os_time {int sec; int usec; } ;
typedef scalar_t__ be32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct os_time*) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(u8 *VAR_0)
{
 struct os_time VAR_1;
 u32 VAR_2, VAR_3;
 be32 VAR_4;


 FUNC_1(&VAR_1);
 VAR_2 = VAR_1.sec + 2208988800U;

 VAR_3 = VAR_1.usec;
 VAR_3 = 4295 * VAR_3 - (VAR_3 >> 5) - (VAR_3 >> 9);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_0, (u8 *) &VAR_4, 4);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_0 + 4, (u8 *) &VAR_4, 4);
}
