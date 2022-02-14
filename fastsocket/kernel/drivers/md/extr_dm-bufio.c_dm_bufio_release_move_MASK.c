
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int hold_count; int list_mode; int state; int block; struct dm_bufio_client* c; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dm_buffer* FUNC_1 (struct dm_bufio_client*,int ) ;
 int FUNC_2 (struct dm_buffer*) ;
 int FUNC_3 (struct dm_buffer*,int ,int ) ;
 int FUNC_4 (struct dm_buffer*) ;
 int FUNC_5 (struct dm_buffer*) ;
 int FUNC_6 (struct dm_bufio_client*) ;
 int FUNC_7 (struct dm_buffer*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct dm_bufio_client*) ;
 int FUNC_10 (struct dm_buffer*) ;
 int FUNC_11 (struct dm_bufio_client*) ;
 int VAR_6 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct dm_buffer*,int ,int ,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int VAR_7 ;

void FUNC_17(struct dm_buffer *VAR_8, sector_t VAR_9)
{
 struct dm_bufio_client *VAR_10 = VAR_8->c;
 struct dm_buffer *VAR_11;

 FUNC_0(FUNC_8());

 FUNC_9(VAR_10);

retry:
 VAR_11 = FUNC_1(VAR_10, VAR_9);
 if (VAR_11) {
  if (VAR_11->hold_count) {
   FUNC_6(VAR_10);
   goto retry;
  }





  FUNC_4(VAR_11);
  FUNC_5(VAR_11);
  FUNC_2(VAR_11);
 }

 FUNC_0(!VAR_8->hold_count);
 FUNC_0(FUNC_14(VAR_1, &VAR_8->state));

 FUNC_7(VAR_8, ((void*)0));
 if (VAR_8->hold_count == 1) {
  FUNC_15(&VAR_8->state, VAR_2,
       VAR_6, VAR_4);
  FUNC_12(VAR_0, &VAR_8->state);
  FUNC_5(VAR_8);
  FUNC_3(VAR_8, VAR_9, VAR_3);
 } else {
  sector_t VAR_12;
  FUNC_16(&VAR_8->state, VAR_2,
     VAR_6, VAR_4);







  VAR_12 = VAR_8->block;
  FUNC_5(VAR_8);
  FUNC_3(VAR_8, VAR_9, VAR_8->list_mode);
  FUNC_13(VAR_8, VAR_5, VAR_9, VAR_7);
  FUNC_15(&VAR_8->state, VAR_2,
       VAR_6, VAR_4);
  FUNC_5(VAR_8);
  FUNC_3(VAR_8, VAR_12, VAR_8->list_mode);
 }

 FUNC_11(VAR_10);
 FUNC_10(VAR_8);
}
