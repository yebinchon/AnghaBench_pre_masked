
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static inline void *FUNC_1(int VAR_5[], int VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 if (sizeof(int) >= sizeof(void *))
  VAR_7 = VAR_5[VAR_4];
 else {
  VAR_7 = VAR_5[VAR_3];
  VAR_9 = sizeof(int) * 8;
  VAR_7 <<= VAR_9;
  VAR_8 = VAR_5[VAR_4];
  VAR_8 &= (1UL << VAR_9) - 1;
  VAR_7 |= VAR_8;
 }
 if (VAR_6 >= 1)
  VAR_7 += VAR_5[VAR_0];
 if (VAR_6 >= 2)
  VAR_7 += VAR_5[VAR_1];
 if (VAR_6 >= 3)
  VAR_7 += VAR_5[VAR_2];
 FUNC_0(VAR_6 > 3);
 return (void *)VAR_7;
}
