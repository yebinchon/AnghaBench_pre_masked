
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mcast_group {TYPE_1__* func; } ;
struct TYPE_2__ {int state; int join_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mcast_group*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mcast_group *VAR_1, int VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_1, VAR_3, -1);
 VAR_1->func[VAR_2].join_state &= ~VAR_3;
 if (!VAR_1->func[VAR_2].join_state) {
  VAR_1->func[VAR_2].state = VAR_0;
  VAR_4 = 1;
 }
 return VAR_4;
}
