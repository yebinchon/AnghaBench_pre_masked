
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m {int dummy; } ;
struct i2400mu {int tx_wq; TYPE_1__* usb_iface; struct i2400m i2400m; } ;
struct i2400m_msg_hdr {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct device*,struct i2400m_msg_hdr*,size_t) ;
 int FUNC_2 (int,struct device*,char*,struct i2400mu*,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_4 (int,struct device*,char*,...) ;
 struct i2400m_msg_hdr* FUNC_5 (struct i2400m*,size_t*) ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400mu*,struct i2400m_msg_hdr*,size_t) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static
int FUNC_10(void *VAR_0)
{
 int VAR_1 = 0;
 struct i2400mu *VAR_2 = VAR_0;
 struct i2400m *VAR_3 = &VAR_2->i2400m;
 struct device *VAR_4 = &VAR_2->usb_iface->dev;
 struct i2400m_msg_hdr *VAR_5;
 size_t VAR_6;

 FUNC_3(4, VAR_4, "(i2400mu %p)\n", VAR_2);

 while (1) {
  FUNC_4(2, VAR_4, "TX: waiting for messages\n");
  VAR_5 = ((void*)0);
  FUNC_9(
   VAR_2->tx_wq,
   (FUNC_8()
    || (VAR_5 = FUNC_5(VAR_3, &VAR_6)))
   );
  if (FUNC_8())
   break;
  FUNC_0(VAR_5 == ((void*)0));
  FUNC_4(2, VAR_4, "TX: submitting %zu bytes\n", VAR_6);
  FUNC_1(5, VAR_4, VAR_5, VAR_6);

  FUNC_7(VAR_2, VAR_5, VAR_6);
  FUNC_6(VAR_3);
  if (VAR_1 < 0)
   break;
 }
 FUNC_2(4, VAR_4, "(i2400mu %p) = %d\n", VAR_2, VAR_1);
 return VAR_1;
}
