
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static inline u8 FUNC_2(unsigned char VAR_3, struct net_device *VAR_4)
{

 u8 VAR_5;
 FUNC_1((VAR_3), VAR_0);
 VAR_5 = ((unsigned char)FUNC_0(VAR_2)) >> 4;
 FUNC_1((VAR_3) | VAR_1, VAR_0);
 return ((unsigned char)FUNC_0(VAR_2) & (unsigned char)0xf0) | VAR_5;
}
