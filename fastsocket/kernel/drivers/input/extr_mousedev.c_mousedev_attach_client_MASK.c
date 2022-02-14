
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev_client {int node; } ;
struct mousedev {int client_lock; int client_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mousedev *VAR_0,
       struct mousedev_client *VAR_1)
{
 FUNC_1(&VAR_0->client_lock);
 FUNC_0(&VAR_1->node, &VAR_0->client_list);
 FUNC_2(&VAR_0->client_lock);
 FUNC_3();
}
