
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct scc_port* driver_data; } ;
struct scc_port {int dummy; } ;


 int FUNC_0 (struct scc_port*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, int VAR_3)
{
 struct scc_port *VAR_4 = VAR_2->driver_data;
 unsigned long VAR_5;
 FUNC_0(VAR_4);

 FUNC_3(VAR_5);
 FUNC_1(VAR_1, ~VAR_0,
   VAR_3 ? VAR_0 : 0);
 FUNC_2(VAR_5);
 return 0;
}
