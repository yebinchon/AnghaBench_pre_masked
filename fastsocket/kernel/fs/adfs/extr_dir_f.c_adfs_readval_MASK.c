
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;

 switch (VAR_1) {
 case 4: VAR_2 |= VAR_0[3] << 24;
 case 3: VAR_2 |= VAR_0[2] << 16;
 case 2: VAR_2 |= VAR_0[1] << 8;
 default: VAR_2 |= VAR_0[0];
 }
 return VAR_2;
}
