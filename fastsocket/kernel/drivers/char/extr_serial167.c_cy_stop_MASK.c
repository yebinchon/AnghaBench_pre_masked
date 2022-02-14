
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {int line; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char volatile VAR_3 ;
 unsigned char volatile VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_5)
{
 struct cyclades_port *VAR_6 = VAR_5->driver_data;
 volatile unsigned char *VAR_7 = (unsigned char *)VAR_0;
 int VAR_8;
 unsigned long VAR_9;





 if (FUNC_3(VAR_6, VAR_5->name, "cy_stop"))
  return;

 VAR_8 = VAR_6->line;

 FUNC_1(VAR_9);
 VAR_7[VAR_1] = (u_char) (VAR_8);
 VAR_7[VAR_2] &= ~(VAR_3 | VAR_4);
 FUNC_0(VAR_9);
}
