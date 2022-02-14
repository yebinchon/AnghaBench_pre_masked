
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cycx_x25_cmd {int buf; } ;
struct TYPE_4__ {int stats; } ;
struct TYPE_3__ {TYPE_2__ x; } ;
struct cycx_device {int wait_stats; TYPE_1__ u; int hw; } ;


 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,unsigned char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cycx_device *VAR_0,
         struct cycx_x25_cmd *VAR_1)
{
 FUNC_0(&VAR_0->hw, VAR_1->buf, &VAR_0->u.x.stats,
    sizeof(VAR_0->u.x.stats));
 FUNC_2("cycx_x25_irq_stat", (unsigned char*)&VAR_0->u.x.stats,
   sizeof(VAR_0->u.x.stats));
 FUNC_1(&VAR_0->u.x.stats);
 FUNC_3(&VAR_0->wait_stats);
}
