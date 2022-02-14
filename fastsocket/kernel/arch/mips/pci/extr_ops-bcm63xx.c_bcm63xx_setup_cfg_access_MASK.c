
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_10, unsigned int VAR_11,
        unsigned int VAR_12, int VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 VAR_14 = FUNC_1(VAR_12);
 VAR_15 = FUNC_0(VAR_12);
 VAR_16 = VAR_13 >> 2;


 if (VAR_14 > (VAR_3 >> VAR_4))
  return 1;

 if (VAR_15 > (VAR_5 >> VAR_6))
  return 1;

 if (VAR_16 > (VAR_8 >> VAR_9))
  return 1;


 VAR_17 = (VAR_16 << VAR_9);
 VAR_17 |= (VAR_15 << VAR_6);
 VAR_17 |= (VAR_14 << VAR_4);
 VAR_17 |= VAR_2;
 VAR_17 |= VAR_0;

 if (VAR_10 != 0) {

  VAR_17 |= (1 << VAR_1);
 }
 FUNC_2(VAR_17, VAR_7);

 return 0;
}
