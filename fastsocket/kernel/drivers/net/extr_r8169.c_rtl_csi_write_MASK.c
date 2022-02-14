
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* write ) (struct rtl8169_private*,int,int) ;} ;
struct rtl8169_private {TYPE_1__ csi_ops; } ;


 int FUNC_0 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->csi_ops.write)
  VAR_0->csi_ops.write(VAR_0, VAR_1, VAR_2);
}
