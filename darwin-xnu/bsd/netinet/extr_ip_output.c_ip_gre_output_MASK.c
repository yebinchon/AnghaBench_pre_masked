
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int ro ;


 int FUNC_0 (struct route*) ;
 int FUNC_1 (struct route*,int) ;
 int FUNC_2 (struct mbuf*,int *,struct route*,int ,int *,int *) ;

int
FUNC_3(struct mbuf *VAR_0)
{
 struct route VAR_1;
 int VAR_2;

 FUNC_1(&VAR_1, sizeof (VAR_1));

 VAR_2 = FUNC_2(VAR_0, ((void*)0), &VAR_1, 0, ((void*)0), ((void*)0));

 FUNC_0(&VAR_1);

 return (VAR_2);
}
