
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gscps2port {char* addr; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct gscps2port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(struct gscps2port *VAR_1)
{
 char *VAR_2 = VAR_1->addr;
 unsigned long VAR_3;


 FUNC_1(&VAR_1->lock, VAR_3);
 FUNC_0(VAR_1);
 FUNC_3(0xff, VAR_2+VAR_0);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock, VAR_3);
}
