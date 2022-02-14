
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int VAR_3, unsigned int VAR_4)
{

 FUNC_0(VAR_4 & 0x0000FF, VAR_3 + VAR_1);
 FUNC_0((VAR_4 & 0x00FF00) >> 8, VAR_3 + VAR_2);
 FUNC_0((VAR_4 & 0xFF0000) >> 16, VAR_3 + VAR_0);
}
