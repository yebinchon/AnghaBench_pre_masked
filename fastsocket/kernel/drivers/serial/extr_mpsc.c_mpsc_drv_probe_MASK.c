
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct platform_device {size_t id; } ;
struct mpsc_port_info {int port; int tx_lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mpsc_port_info*,struct platform_device*,size_t) ;
 int FUNC_1 (struct mpsc_port_info*,struct platform_device*) ;
 int FUNC_2 (struct mpsc_port_info*) ;
 int FUNC_3 (struct mpsc_port_info*) ;
 struct mpsc_port_info* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct mpsc_port_info *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_5("mpsc_drv_probe: Adding MPSC %d\n", VAR_4->id);

 if (VAR_4->id < VAR_1) {
  VAR_5 = &VAR_2[VAR_4->id];

  if (!(VAR_6 = FUNC_1(VAR_5, VAR_4))) {
   FUNC_0(VAR_5, VAR_4, VAR_4->id);

   if (!(VAR_6 = FUNC_3(VAR_5))) {
    FUNC_6(&VAR_5->tx_lock);
    if (!(VAR_6 = FUNC_7(&VAR_3,
        &VAR_5->port))) {
     VAR_6 = 0;
    } else {
     FUNC_4((struct uart_port *)
       VAR_5);
     FUNC_2(VAR_5);
    }
   } else {
    FUNC_2(VAR_5);
   }
  }
 }

 return VAR_6;
}
