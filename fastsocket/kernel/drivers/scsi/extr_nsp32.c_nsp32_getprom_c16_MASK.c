
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int limit_entry; } ;
typedef TYPE_1__ nsp32_target ;
struct TYPE_8__ {TYPE_1__* target; void* resettime; } ;
typedef TYPE_2__ nsp32_hw_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(nsp32_hw_data *VAR_4)
{
 int VAR_5, VAR_6;
 nsp32_target *VAR_7;
 int VAR_8, VAR_9;






 VAR_4->resettime = FUNC_0(VAR_4, 0x11);




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = &VAR_4->target[VAR_6];
  VAR_5 = FUNC_0(VAR_4, VAR_6);
  switch (VAR_5) {
  case 0:
   VAR_9 = 0x0c;
   break;
  case 1:
   VAR_9 = 0x19;
   break;
  case 2:
   VAR_9 = 0x32;
   break;
  case 3:
   VAR_9 = 0x00;
   break;
  default:
   VAR_9 = 0x0c;
   break;
  }
  VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_9);
  if (VAR_8 < 0 || VAR_3 == VAR_2) {

   VAR_8 = 0;
  }
  VAR_7->limit_entry = VAR_8;
 }

 return VAR_1;
}
