
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serport {int wait; int lock; int flags; } ;
struct serio {struct serport* port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct serio *VAR_2)
{
 struct serport *VAR_3 = VAR_2->port_data;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, &VAR_3->flags);
 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_4(&VAR_3->wait);
}
