
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(unsigned int VAR_3,
          unsigned int VAR_4,
          unsigned long VAR_5)
{
 unsigned long VAR_6,VAR_7;

 VAR_6 = (VAR_5 & 0xffff0000) >> 16;
 VAR_7 = (VAR_5 & 0x0000ffff) >> 0;

 FUNC_0(VAR_4, VAR_3 + VAR_2 );
 FUNC_1(VAR_7, VAR_3 + VAR_1);
 FUNC_1(VAR_6, VAR_3 + VAR_0 );
}
