
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int resource_setup_done; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_0)
{
 unsigned long VAR_1;




 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_0->resource_setup_done = 1;
 FUNC_1(&VAR_0->lock, VAR_1);

 return 0;
}
