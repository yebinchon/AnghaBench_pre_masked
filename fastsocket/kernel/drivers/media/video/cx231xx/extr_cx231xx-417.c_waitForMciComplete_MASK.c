
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct cx231xx*,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cx231xx *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2 = 0;
 u8 VAR_3 = 0;
 FUNC_1(VAR_0, VAR_2, &VAR_1);

 while (!(VAR_1&0x020000)) {
  FUNC_2(10);

  FUNC_1(VAR_0, VAR_2, &VAR_1);

  if (VAR_3++ > 100) {
   FUNC_0(3, "ERROR: Timeout - gpio=%x\n", VAR_1);
   return -1;
  }
 }
 return 0;
}
