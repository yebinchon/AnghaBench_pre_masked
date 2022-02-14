
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {scalar_t__ xmit_cnt; int line; int xmit_buf; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char volatile VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 struct cyclades_port *VAR_5 = VAR_4->driver_data;
 unsigned long VAR_6;
 volatile unsigned char *VAR_7 = (u_char *) VAR_0;
 int VAR_8;





 if (FUNC_3(VAR_5, VAR_4->name, "cy_flush_chars"))
  return;

 if (VAR_5->xmit_cnt <= 0 || VAR_4->stopped
     || VAR_4->hw_stopped || !VAR_5->xmit_buf)
  return;

 VAR_8 = VAR_5->line;

 FUNC_1(VAR_6);
 VAR_7[VAR_1] = VAR_8;
 VAR_7[VAR_2] |= VAR_3;
 FUNC_0(VAR_6);
}
