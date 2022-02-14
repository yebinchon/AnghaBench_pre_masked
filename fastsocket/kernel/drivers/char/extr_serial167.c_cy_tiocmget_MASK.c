
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct tty_struct {struct cyclades_port* driver_data; } ;
struct file {int dummy; } ;
struct cyclades_port {int line; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_14, struct file *VAR_15)
{
 struct cyclades_port *VAR_16 = VAR_14->driver_data;
 int VAR_17;
 volatile unsigned char *VAR_18 = (u_char *) VAR_0;
 unsigned long VAR_19;
 unsigned char VAR_20;

 VAR_17 = VAR_16->line;

 FUNC_1(VAR_19);
 VAR_18[VAR_1] = (u_char) VAR_17;
 VAR_20 = VAR_18[VAR_6] | VAR_18[VAR_7];
 FUNC_0(VAR_19);

 return ((VAR_20 & VAR_8) ? VAR_13 : 0)
     | ((VAR_20 & VAR_5) ? VAR_12 : 0)
     | ((VAR_20 & VAR_3) ? VAR_9 : 0)
     | ((VAR_20 & VAR_4) ? VAR_11 : 0)
     | ((VAR_20 & VAR_2) ? VAR_10 : 0);
}
