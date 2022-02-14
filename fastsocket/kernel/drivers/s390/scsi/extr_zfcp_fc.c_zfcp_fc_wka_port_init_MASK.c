
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_wka_port {int work; int mutex; int refcount; int status; int d_id; struct zfcp_adapter* adapter; int completion_wq; } ;
struct zfcp_adapter {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct zfcp_wka_port *VAR_2, u32 VAR_3,
      struct zfcp_adapter *VAR_4)
{
 FUNC_2(&VAR_2->completion_wq);

 VAR_2->adapter = VAR_4;
 VAR_2->d_id = VAR_3;

 VAR_2->status = VAR_0;
 FUNC_1(&VAR_2->refcount, 0);
 FUNC_3(&VAR_2->mutex);
 FUNC_0(&VAR_2->work, VAR_1);
}
