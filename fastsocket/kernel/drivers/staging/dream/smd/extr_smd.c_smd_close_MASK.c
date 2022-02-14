
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ch_list; int send; int notify; } ;
typedef TYPE_1__ smd_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(smd_channel_t *VAR_5)
{
 unsigned long VAR_6;

 FUNC_5("smd_close(%p)\n", VAR_5);

 if (VAR_5 == 0)
  return -1;

 FUNC_6(&VAR_4, VAR_6);
 VAR_5->notify = VAR_1;
 FUNC_2(&VAR_5->ch_list);
 FUNC_0(VAR_5->send, VAR_0);
 FUNC_7(&VAR_4, VAR_6);

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_5->ch_list, &VAR_2);
 FUNC_4(&VAR_3);

 return 0;
}
