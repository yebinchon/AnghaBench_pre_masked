
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ state; int eh_mutex; int lock; int cls_session; } ;
struct iscsi_conn {int stop_stage; int tmhdr; scalar_t__ datadgst_en; scalar_t__ hdrdgst_en; int c_stage; int transport_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iscsi_session*,struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_conn*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iscsi_session *VAR_6,
      struct iscsi_conn *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_7(&VAR_6->eh_mutex);
 FUNC_9(&VAR_6->lock);
 if (VAR_7->stop_stage == VAR_5) {
  FUNC_10(&VAR_6->lock);
  FUNC_8(&VAR_6->eh_mutex);
  return;
 }






 if (VAR_8 == VAR_5)
  VAR_6->state = VAR_3;
 else if (VAR_7->stop_stage != VAR_4)
  VAR_6->state = VAR_2;

 VAR_9 = VAR_7->stop_stage;
 VAR_7->stop_stage = VAR_8;
 FUNC_10(&VAR_6->lock);

 FUNC_1(&VAR_7->transport_timer);
 FUNC_5(VAR_7);

 FUNC_9(&VAR_6->lock);
 VAR_7->c_stage = VAR_1;
 FUNC_10(&VAR_6->lock);







 if (VAR_8 == VAR_4) {
  VAR_7->hdrdgst_en = 0;
  VAR_7->datadgst_en = 0;
  if (VAR_6->state == VAR_2 &&
      VAR_9 != VAR_4) {
   FUNC_0(VAR_6, "blocking session\n");
   FUNC_4(VAR_6->cls_session);
  }
 }




 FUNC_9(&VAR_6->lock);
 FUNC_3(VAR_7, -1, VAR_0);
 FUNC_2(VAR_6, VAR_7);
 FUNC_6(&VAR_7->tmhdr, 0, sizeof(VAR_7->tmhdr));
 FUNC_10(&VAR_6->lock);
 FUNC_8(&VAR_6->eh_mutex);
}
