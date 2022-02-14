
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {unsigned char* xmit_buf; int xmit_cnt; int xmit_head; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ,unsigned char) ;
 scalar_t__ FUNC_3 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct cyclades_port *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;





 if (FUNC_3(VAR_3, VAR_1->name, "cy_put_char"))
  return 0;

 if (!VAR_3->xmit_buf)
  return 0;

 FUNC_1(VAR_4);
 if (VAR_3->xmit_cnt >= VAR_0 - 1) {
  FUNC_0(VAR_4);
  return 0;
 }

 VAR_3->xmit_buf[VAR_3->xmit_head++] = VAR_2;
 VAR_3->xmit_head &= VAR_0 - 1;
 VAR_3->xmit_cnt++;
 FUNC_0(VAR_4);
 return 1;
}
