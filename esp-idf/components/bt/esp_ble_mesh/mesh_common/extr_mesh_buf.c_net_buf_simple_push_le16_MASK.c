
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u16_t ;
struct net_buf_simple {int dummy; } ;


 int FUNC_0 (char*,struct net_buf_simple*,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct net_buf_simple*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct net_buf_simple *VAR_0, u16_t VAR_1)
{
    FUNC_0("buf %p val %u", VAR_0, VAR_1);

    VAR_1 = FUNC_3(VAR_1);
    FUNC_1(FUNC_2(VAR_0, sizeof(VAR_1)), &VAR_1, sizeof(VAR_1));
}
