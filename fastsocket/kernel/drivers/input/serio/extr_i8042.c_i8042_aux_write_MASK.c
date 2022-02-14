
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct i8042_port* port_data; } ;
struct i8042_port {int mux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_2, unsigned char VAR_3)
{
 struct i8042_port *VAR_4 = VAR_2->port_data;

 return FUNC_0(&VAR_3, VAR_4->mux == -1 ?
     VAR_0 :
     VAR_1 + VAR_4->mux);
}
