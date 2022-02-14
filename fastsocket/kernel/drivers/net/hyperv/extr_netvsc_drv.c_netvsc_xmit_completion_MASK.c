
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ send_completion_tid; } ;
struct TYPE_4__ {TYPE_1__ send; } ;
struct hv_netvsc_packet {TYPE_2__ completion; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hv_netvsc_packet*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct hv_netvsc_packet *VAR_1 = (struct hv_netvsc_packet *)VAR_0;
 struct sk_buff *VAR_2 = (struct sk_buff *)
  (unsigned long)VAR_1->completion.send.send_completion_tid;

 FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_0(VAR_2);
}
