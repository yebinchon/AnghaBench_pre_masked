
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocop_transform_init {scalar_t__ tid; struct cryptocop_transform_init* next; } ;
struct cryptocop_transform_ctx {int dummy; } ;
struct cryptocop_session {int sid; struct cryptocop_session* next; struct cryptocop_session* tfrm_ctx; scalar_t__ dec_key_set; int init; } ;
typedef int cryptocop_session_id ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cryptocop_session* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct cryptocop_session*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,struct cryptocop_transform_init*,int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct cryptocop_transform_init*) ;

int FUNC_9(cryptocop_session_id *VAR_5, struct cryptocop_transform_init *VAR_6, int VAR_7)
{
 struct cryptocop_session *VAR_8;
 struct cryptocop_transform_init *VAR_9 = VAR_6;
 struct cryptocop_transform_init *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 unsigned long int VAR_13;

 FUNC_1();

 while (VAR_9){
  int VAR_14;
  ++VAR_11;
  if ((VAR_14 = FUNC_8(VAR_9))) {
   FUNC_0(FUNC_5("cryptocop_new_session, bad transform\n"));
   return VAR_14;
  }
  VAR_9 = VAR_9->next;
 }
 if (0 == VAR_11) {
  FUNC_0(FUNC_5("cryptocop_new_session, no transforms specified\n"));
  return -VAR_0;
 }

 VAR_8 = FUNC_3(sizeof(struct cryptocop_session), VAR_7);
 if (!VAR_8){
  FUNC_0(FUNC_5("cryptocop_new_session, kmalloc cryptocop_session\n"));
  return -VAR_1;
 }

 VAR_8->tfrm_ctx = FUNC_3(VAR_11 * sizeof(struct cryptocop_transform_ctx), VAR_7);
 if (!VAR_8->tfrm_ctx) {
  FUNC_0(FUNC_5("cryptocop_new_session, kmalloc cryptocop_transform_ctx\n"));
  FUNC_2(VAR_8);
  return -VAR_1;
 }

 VAR_9 = VAR_6;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++){
  VAR_10 = VAR_9->next;
  while (VAR_10){
   if (VAR_10->tid == VAR_9->tid) {
    FUNC_0(FUNC_5("cryptocop_new_session, duplicate transform ids\n"));
    FUNC_2(VAR_8->tfrm_ctx);
    FUNC_2(VAR_8);
    return -VAR_0;
   }
   VAR_10 = VAR_10->next;
  }
  FUNC_4(&VAR_8->tfrm_ctx[VAR_12].init, VAR_9, sizeof(struct cryptocop_transform_init));
  VAR_8->tfrm_ctx[VAR_12].dec_key_set = 0;
  VAR_8->tfrm_ctx[VAR_12].next = &VAR_8->tfrm_ctx[VAR_12] + 1;

  VAR_9 = VAR_9->next;
 }
 VAR_8->tfrm_ctx[VAR_12-1].next = ((void*)0);

 FUNC_6(&VAR_3, VAR_13);
 VAR_8->sid = VAR_4;
 VAR_4++;


 if (VAR_4 == 0) VAR_4 = 1;


 VAR_8->next = VAR_2;
 VAR_2 = VAR_8;
 FUNC_7(&VAR_3, VAR_13);
 *VAR_5 = VAR_8->sid;
 return 0;
}
