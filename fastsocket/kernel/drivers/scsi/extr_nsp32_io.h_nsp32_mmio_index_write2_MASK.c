
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned int,unsigned short volatile*) ;
 int FUNC_2 (int ,unsigned short volatile*) ;

__attribute__((used)) static inline void FUNC_3(unsigned long VAR_3,
        unsigned int VAR_4,
        unsigned short VAR_5)
{
 volatile unsigned short *VAR_6, *VAR_7;

 VAR_6 = (unsigned short *)(VAR_3 + VAR_2 + VAR_1);
 VAR_7 = (unsigned short *)(VAR_3 + VAR_2 + VAR_0);

 FUNC_1(VAR_4, VAR_6);
 FUNC_2(FUNC_0(VAR_5), VAR_7 );
}
