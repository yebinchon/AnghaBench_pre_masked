
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(nsp32_hw_data *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 nsp32_target *VAR_10;
 int VAR_11;






 VAR_6->resettime = FUNC_1(VAR_6, 0x12);
 VAR_7 = FUNC_1(VAR_6, 0x07);
 switch (VAR_7) {
 case 0:
  VAR_9 = VAR_3;
  break;
 case 1:
  VAR_9 = VAR_0;
  break;
 default:
  FUNC_0(VAR_1,
     "Unsupported Auto Sync mode. Fall back to manual mode.");
  VAR_9 = VAR_3;
 }

 if (VAR_5 == VAR_4) {
  VAR_9 = VAR_3;
 }




 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_10 = &VAR_6->target[VAR_8];
  if (VAR_9 == VAR_3) {
   VAR_10->limit_entry = 0;
  } else {
   VAR_7 = FUNC_1(VAR_6, VAR_8);
   VAR_11 = FUNC_2(VAR_6, VAR_10, VAR_7);
   if (VAR_11 < 0) {

    VAR_11 = 0;
   }
   VAR_10->limit_entry = VAR_11;
  }
 }

 return VAR_3;
}
