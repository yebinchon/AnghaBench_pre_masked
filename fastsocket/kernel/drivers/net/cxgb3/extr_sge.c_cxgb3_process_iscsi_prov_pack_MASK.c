
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* recv ) (struct port_info*,struct sk_buff*) ;} ;
struct port_info {TYPE_1__ iscsic; } ;


 int FUNC_0 (struct port_info*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct port_info*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct port_info *VAR_0,
     struct sk_buff *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }

 if (VAR_0->iscsic.recv)
  VAR_0->iscsic.recv(VAR_0, VAR_1);

}
