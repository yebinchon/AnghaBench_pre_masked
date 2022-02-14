
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int line; int adrmode0; int adrmode6; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1()
{
  u32 VAR_2 = 0xFFF;
  u32 VAR_3 = 0x1FF;

  if(VAR_1.line==0x1)
    {
      VAR_2 &= ~(1<<VAR_0);
      VAR_3 &= ~(1<<VAR_0);
    }
  if((VAR_2&(1<<VAR_1.adrmode0 )) && (VAR_3&(1<<VAR_1.adrmode6)) );
  {
    FUNC_0();
    return 1;
  }
  return 0;

}
