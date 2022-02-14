
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;

__attribute__((used)) static inline int FUNC_0(
    unsigned char VAR_3[10])
{
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_3[0] & VAR_0;
 VAR_5 = VAR_3[1] & VAR_1;
 VAR_4 = VAR_3[8] & VAR_2;


 if (VAR_4 == 0)
  VAR_4 = 8;

 return((VAR_4 << 8) | (VAR_5 << 4) | VAR_6);
}
