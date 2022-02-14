
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u_char ;
struct TYPE_2__ {int (* chars_in_buffer ) (struct tty_struct*) ;} ;
struct tty_struct {int name; TYPE_1__ ldisc; struct cyclades_port* driver_data; } ;
struct cyclades_port {int line; int x_char; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int ,...) ;
 scalar_t__ FUNC_5 (struct cyclades_port*,int ,char*) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct tty_struct*,char*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_3)
{
 struct cyclades_port *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;
 volatile unsigned char *VAR_6 = (u_char *) VAR_0;
 int VAR_7;
 if (FUNC_5(VAR_4, VAR_3->name, "cy_nthrottle")) {
  return;
 }

 if (FUNC_0(VAR_3)) {
  VAR_4->x_char = FUNC_1(VAR_3);

 }

 VAR_7 = VAR_4->line;

 FUNC_3(VAR_5);
 VAR_6[VAR_1] = (u_char) VAR_7;
 VAR_6[VAR_2] = 0;
 FUNC_2(VAR_5);
}
