
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_7)
{
 if((VAR_7-0x20000)==0x0400) {
  VAR_6 = VAR_7;
  return 1;
 }

 if(FUNC_0(VAR_7)==VAR_0
  || FUNC_0(VAR_7)==VAR_2
  || FUNC_0(VAR_7)==VAR_1
  || (FUNC_0(VAR_7)-0x40000)==0x3100) return 0;

 VAR_5++;
 if(VAR_5==2) {
  if(VAR_6==FUNC_0(VAR_7)) {
   VAR_6 = FUNC_0(VAR_7);
   return 1;
  }
  VAR_6 = FUNC_0(VAR_7);
  return 2;
 }

 VAR_6 = FUNC_0(VAR_7);
 if(FUNC_0(VAR_7)!=VAR_3) {
  if(VAR_4->cmd!=0x0005) return 3;
 }
 return 2;
}
