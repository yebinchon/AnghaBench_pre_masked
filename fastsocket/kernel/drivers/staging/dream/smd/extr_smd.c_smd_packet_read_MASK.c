
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_packet; } ;
typedef TYPE_1__ smd_channel_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(smd_channel_t *VAR_2, void *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_4 < 0)
  return -VAR_0;

 if (VAR_4 > VAR_2->current_packet)
  VAR_4 = VAR_2->current_packet;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6 > 0)
  FUNC_1();

 FUNC_2(&VAR_1, VAR_5);
 VAR_2->current_packet -= VAR_6;
 FUNC_4(VAR_2);
 FUNC_3(&VAR_1, VAR_5);

 return VAR_6;
}
