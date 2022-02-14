
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int state; struct dm_bufio_client* c; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_buffer*,int ) ;
 int FUNC_2 (struct dm_bufio_client*) ;
 int FUNC_3 (struct dm_bufio_client*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct dm_buffer *VAR_3)
{
 struct dm_bufio_client *VAR_4 = VAR_3->c;

 FUNC_2(VAR_4);

 FUNC_0(FUNC_5(VAR_1, &VAR_3->state));

 if (!FUNC_4(VAR_0, &VAR_3->state))
  FUNC_1(VAR_3, VAR_2);

 FUNC_3(VAR_4);
}
