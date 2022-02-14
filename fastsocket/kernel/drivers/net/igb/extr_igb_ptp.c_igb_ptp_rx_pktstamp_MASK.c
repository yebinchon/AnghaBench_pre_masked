
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct igb_q_vector {int adapter; } ;
typedef int __le64 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct igb_q_vector *VAR_0,
    unsigned char *VAR_1,
    struct sk_buff *VAR_2)
{
 __le64 *VAR_3 = (__le64 *)VAR_1;





 FUNC_0(VAR_0->adapter, FUNC_2(VAR_2),
       FUNC_1(VAR_3[1]));
}
