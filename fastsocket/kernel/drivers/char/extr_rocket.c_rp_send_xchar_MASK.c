
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct r_port* driver_data; } ;
struct r_port {int channel; } ;
typedef int CHANNEL_t ;


 scalar_t__ FUNC_0 (struct r_port*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int *,char) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0, char VAR_1)
{
 struct r_port *VAR_2 = VAR_0->driver_data;
 CHANNEL_t *VAR_3;

 if (FUNC_0(VAR_2, "rp_send_xchar"))
  return;

 VAR_3 = &VAR_2->channel;
 if (FUNC_1(VAR_3))
  FUNC_4(VAR_3, VAR_1);
 else
  FUNC_3(FUNC_2(VAR_3), VAR_1);
}
