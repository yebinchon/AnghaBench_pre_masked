
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int locked; scalar_t__ srambuf; scalar_t__ enabled; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void* FUNC_2(u32 VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_2);
 if(!VAR_0.locked) {
  VAR_0.enabled = VAR_2;
  VAR_0.locked = 1;
  return (void*)((u32)VAR_0.srambuf+VAR_1);
 }
 FUNC_1(VAR_2);
 return ((void*)0);
}
