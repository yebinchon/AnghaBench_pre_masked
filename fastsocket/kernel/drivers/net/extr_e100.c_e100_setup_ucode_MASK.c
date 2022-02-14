
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nic {int dummy; } ;
struct firmware {size_t* data; } ;
struct TYPE_2__ {int * ucode; } ;
struct cb {int command; TYPE_1__ u; int * skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,size_t*,int) ;

__attribute__((used)) static void FUNC_3(struct nic *VAR_6, struct cb *VAR_7,
        struct sk_buff *VAR_8)
{
 const struct firmware *VAR_9 = (void *)VAR_8;
 u8 VAR_10, VAR_11, VAR_12;



 VAR_7->skb = ((void*)0);


 FUNC_2(VAR_7->u.ucode, VAR_9->data, VAR_3 * 4);


 VAR_10 = VAR_9->data[VAR_3 * 4];
 VAR_11 = VAR_9->data[VAR_3 * 4 + 1];
 VAR_12 = VAR_9->data[VAR_3 * 4 + 2];


 VAR_7->u.ucode[VAR_10] &= FUNC_1(0xFFFF0000);
 VAR_7->u.ucode[VAR_10] |= FUNC_1(VAR_2);
 VAR_7->u.ucode[VAR_11] &= FUNC_1(0xFFFF0000);
 VAR_7->u.ucode[VAR_11] |= FUNC_1(VAR_0);
 VAR_7->u.ucode[VAR_12] &= FUNC_1(0xFFFF0000);
 VAR_7->u.ucode[VAR_12] |= FUNC_1((VAR_1) ? 0xFFFF : 0xFF80);

 VAR_7->command = FUNC_0(VAR_5 | VAR_4);
}
