
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ pointer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static pointer FUNC_1(u32 VAR_3)
{
  if((VAR_3&0xDFF00000)==0x200000) return (pointer)VAR_2+(VAR_3&0xFFFFF);
  if((VAR_3&0xDE000000)==0x6000000) return (pointer)VAR_1+(VAR_3&0xFFFFF);
  FUNC_0((VAR_3&0xDFF00000)==0);
  return (pointer)VAR_0+(VAR_3&0x8FFFF);
}
