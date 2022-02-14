
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,void*) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, unsigned int VAR_4,
    unsigned int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_3 > 2)
  return -1;
 if (VAR_4 > 0xffff)
  return -1;
 if (VAR_5 > 5)
  return -1;
 if ((VAR_5 == 2 || VAR_5 == 3) && VAR_4 == 1)
  return -1;

 VAR_6 = VAR_3 << 6;
 VAR_6 |= 0x30;
 VAR_6 |= (VAR_5 << 1);
 FUNC_0(VAR_6, VAR_1 + (VAR_0 << VAR_2));
 VAR_6 = VAR_4 & 0xff;
 FUNC_0(VAR_6, VAR_1 + (VAR_3 << VAR_2));
 VAR_6 = (VAR_4 >> 8) & 0xff;
 FUNC_0(VAR_6, VAR_1 + (VAR_3 << VAR_2));

 return 0;
}
