
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_0,
    unsigned char *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;


 VAR_4 = FUNC_0(VAR_0 + VAR_2);
 VAR_5 = FUNC_0(VAR_0 + VAR_3);


 VAR_1[0] = VAR_5 & 0xff;
 VAR_1[1] = (VAR_5 >> 8) & 0xff;
 VAR_1[2] = (VAR_5 >> 16) & 0xff;
 VAR_1[3] = (VAR_5 >> 24) & 0xff;
 VAR_1[4] = VAR_4 & 0xff;
 VAR_1[5] = (VAR_4 >> 8) & 0xff;

 return;
}
