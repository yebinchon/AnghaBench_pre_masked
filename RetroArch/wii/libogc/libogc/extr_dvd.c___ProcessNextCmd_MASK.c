
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int cmd; int cb; int offset; int len; int buf; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static u32 FUNC_2()
{
 u32 VAR_2 = VAR_1;
 if(VAR_0[VAR_2].cmd==0x0001) {
  VAR_1++;
  FUNC_1(VAR_0[VAR_2].buf,VAR_0[VAR_2].len,VAR_0[VAR_2].offset,VAR_0[VAR_2].cb);
  return 1;
 }

 if(VAR_0[VAR_2].cmd==0x0002) {
  VAR_1++;
  FUNC_0(VAR_0[VAR_2].offset,VAR_0[VAR_2].cb);
  return 1;
 }
 return 0;
}
