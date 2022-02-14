
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int * req_list; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct zfcp_adapter *VAR_3)
{
 int VAR_4;

 VAR_3->req_list = FUNC_1(VAR_2, sizeof(struct list_head),
        VAR_1);
 if (!VAR_3->req_list)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_3->req_list[VAR_4]);
 return 0;
}
