
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int w; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static s32 FUNC_1()
{
  s32 VAR_1;
  FUNC_0();
  VAR_1 = (VAR_0.w&0x8000)? ('A'<<24) : ('D'<<24);
  VAR_1 |= ('0'+((VAR_0.w>>12)&7)) << 16;
  VAR_1 |= (u8)VAR_0.w<<8;
  VAR_1 |= ((VAR_0.w&(1<<11))? 'L' : 'W');
  return VAR_1;
}
