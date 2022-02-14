
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct capidev {int list; int recvwait; int recvqueue; int ncci_list_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct capidev* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static struct capidev *FUNC_7(void)
{
 struct capidev *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_3->ncci_list_mtx);
 FUNC_4(&VAR_3->recvqueue);
 FUNC_0(&VAR_3->recvwait);
 FUNC_5(&VAR_2, VAR_4);
 FUNC_2(&VAR_3->list, &VAR_1);
 FUNC_6(&VAR_2, VAR_4);
        return VAR_3;
}
