
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; int name; struct isi_port* driver_data; } ;
struct TYPE_2__ {int xmit_buf; } ;
struct isi_port {scalar_t__ xmit_cnt; int status; TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1)
{
 struct isi_port *VAR_2 = VAR_1->driver_data;

 if (FUNC_0(VAR_2, VAR_1->name, "isicom_flush_chars"))
  return;

 if (VAR_2->xmit_cnt <= 0 || VAR_1->stopped || VAR_1->hw_stopped ||
   !VAR_2->port.xmit_buf)
  return;



 VAR_2->status |= VAR_0;
}
