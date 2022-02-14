
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg9; int w; char szchar; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,int ,char) ;

__attribute__((used)) static void FUNC_2()
{
  int VAR_1;
  VAR_1 = VAR_0.reg9 * 256;
  if(VAR_1==0) VAR_1=8*256;
  FUNC_0((VAR_0.w&0400) ? 'SUBQ':'ADDQ');
  FUNC_0(VAR_0.szchar);
  FUNC_0(' #0,' + VAR_1);
  FUNC_1(VAR_0.mode3, VAR_0.reg0, VAR_0.szchar);
}
