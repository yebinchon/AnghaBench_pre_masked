
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u8
FUNC_2(void *VAR_4, u8 VAR_5)
{
 struct fritzcard *VAR_6 = VAR_4;
 u8 VAR_7 = (VAR_5 > 0x2f) ? VAR_0 : VAR_1;

 FUNC_1(VAR_7, VAR_6->addr + VAR_2);
 return FUNC_0(VAR_6->addr + VAR_3 + (VAR_5 & 0xf));
}
