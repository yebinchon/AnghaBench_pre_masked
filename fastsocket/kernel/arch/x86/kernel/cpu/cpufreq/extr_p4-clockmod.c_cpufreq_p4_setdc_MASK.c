
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,...) ;
 scalar_t__* VAR_8 ;
 int FUNC_2 (unsigned int,int ,int*,int*) ;
 int FUNC_3 (unsigned int,int ,int,int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_9, unsigned int VAR_10)
{
 u32 VAR_11, VAR_12;

 if (!FUNC_0(VAR_9) ||
     (VAR_10 > VAR_3) || (VAR_10 == VAR_4))
  return -VAR_5;

 FUNC_2(VAR_9, VAR_7, &VAR_11, &VAR_12);

 if (VAR_11 & 0x01)
  FUNC_1("CPU#%d currently thermal throttled\n", VAR_9);

 if (VAR_8[VAR_9] &&
     (VAR_10 == VAR_0 || VAR_10 == VAR_2))
  VAR_10 = VAR_1;

 FUNC_2(VAR_9, VAR_6, &VAR_11, &VAR_12);
 if (VAR_10 == VAR_3) {
  FUNC_1("CPU#%d disabling modulation\n", VAR_9);
  FUNC_3(VAR_9, VAR_6, VAR_11 & ~(1<<4), VAR_12);
 } else {
  FUNC_1("CPU#%d setting duty cycle to %d%%\n",
   VAR_9, ((125 * VAR_10) / 10));





  VAR_11 = (VAR_11 & ~14);
  VAR_11 = VAR_11 | (1<<4) | ((VAR_10 & 0x7)<<1);
  FUNC_3(VAR_9, VAR_6, VAR_11, VAR_12);
 }

 return 0;
}
