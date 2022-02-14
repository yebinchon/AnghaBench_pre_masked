
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; char reg0; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1()
{
  if((VAR_0.w&07670)!=04200)
    return 0;
  FUNC_0('EXT.' );
  FUNC_0((!(VAR_0.w&0100)? 'W D0':'L D0') + VAR_0.reg0);
  return 1;
}
