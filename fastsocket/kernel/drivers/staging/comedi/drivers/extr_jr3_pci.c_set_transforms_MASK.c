
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct transform_t {TYPE_3__* link; } ;
struct jr3_channel {TYPE_2__* transforms; } ;
struct TYPE_6__ {scalar_t__ link_type; int link_amount; } ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {int link_amount; int link_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(volatile struct jr3_channel *VAR_1,
      struct transform_t VAR_2, short VAR_3)
{
 int VAR_4;

 VAR_3 &= 0x000f;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {

  FUNC_1(&VAR_1->transforms[VAR_3].link[VAR_4].link_type,
   VAR_2.link[VAR_4].link_type);
  FUNC_2(1);
  FUNC_0(&VAR_1->transforms[VAR_3].link[VAR_4].link_amount,
   VAR_2.link[VAR_4].link_amount);
  FUNC_2(1);
  if (VAR_2.link[VAR_4].link_type == VAR_0) {
   break;
  }
 }
}
