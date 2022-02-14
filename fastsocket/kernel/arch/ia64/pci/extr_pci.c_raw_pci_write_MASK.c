
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 scalar_t__ VAR_1 ;

int FUNC_4(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
        int VAR_5, int VAR_6, u32 VAR_7)
{
 u64 VAR_8;
 int VAR_9, VAR_10;

 if ((VAR_2 > 65535) || (VAR_3 > 255) || (VAR_4 > 255) || (VAR_5 > 4095))
  return -VAR_0;

 if ((VAR_2 | VAR_5) <= 255) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_9 = 0;
 } else if (VAR_1 >= FUNC_2(3,2)) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_9 = 1;
 } else {
  return -VAR_0;
 }
 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_6, VAR_7);
 if (VAR_10 != 0)
  return -VAR_0;
 return 0;
}
