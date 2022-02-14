
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_buf {int b; int len; int data; } ;
struct k_work {int dummy; } ;
struct TYPE_2__ {int local_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 struct net_buf* FUNC_3 (int *) ;
 int FUNC_4 (struct net_buf*) ;

__attribute__((used)) static void FUNC_5(struct k_work *VAR_2)
{
    struct net_buf *VAR_3;

    while ((VAR_3 = FUNC_3(&VAR_1.local_queue))) {
        FUNC_0("len %u: %s", VAR_3->len, FUNC_1(VAR_3->data, VAR_3->len));
        FUNC_2(&VAR_3->b, 0, VAR_0);
        FUNC_4(VAR_3);
    }
}
