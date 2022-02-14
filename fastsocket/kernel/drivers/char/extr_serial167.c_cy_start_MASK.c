
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
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 struct cyclades_port *VAR_5 = VAR_4->driver_data;
 volatile unsigned char *VAR_6 = (unsigned char *)VAR_0;
 int VAR_7;
 unsigned long VAR_8;





 if (FUNC_3(VAR_5, VAR_4->name, "cy_start"))
  return;

 VAR_7 = VAR_5->line;

 FUNC_1(VAR_8);
 VAR_6[VAR_1] = (u_char) (VAR_7);
 VAR_6[VAR_2] |= VAR_3;
 FUNC_0(VAR_8);
}
