
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int hw_code; int keycode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u64 VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3].hw_code == (VAR_2 | 0xffee)) {
   VAR_4 = VAR_1[VAR_3].keycode;
   break;
  }
 }

 return VAR_4;
}
