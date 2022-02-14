
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_client_t {int adapter; int demux; int dmxdev; int frontend; int smsclient; int entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smsdvb_client_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct smsdvb_client_t *VAR_0)
{


 FUNC_5(&VAR_0->entry);

 FUNC_6(VAR_0->smsclient);
 FUNC_3(&VAR_0->frontend);
 FUNC_1(&VAR_0->dmxdev);
 FUNC_0(&VAR_0->demux);
 FUNC_2(&VAR_0->adapter);
 FUNC_4(VAR_0);
}
