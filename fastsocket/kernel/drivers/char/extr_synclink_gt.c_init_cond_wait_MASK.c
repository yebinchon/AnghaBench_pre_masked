
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_wait {unsigned int data; int wait; int q; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cond_wait *VAR_1, unsigned int VAR_2)
{
 FUNC_1(&VAR_1->q);
 FUNC_0(&VAR_1->wait, VAR_0);
 VAR_1->data = VAR_2;
}
