
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int battery_level; int cmdq; struct cmd_blk_t* cmd_head; int event; } ;
struct cmd_blk_t {scalar_t__ state; scalar_t__* data; int node; int (* cb ) (struct wiimote_t*,int*,int) ;struct cmd_blk_t* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wiimote_t*,int ) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 scalar_t__ FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct wiimote_t*,int*,int) ;
 int FUNC_5 (struct wiimote_t*) ;
 int FUNC_6 (struct wiimote_t*) ;
 int FUNC_7 (struct wiimote_t*,int*) ;
 int FUNC_8 (struct wiimote_t*) ;
 int FUNC_9 (struct wiimote_t*,int) ;
 int FUNC_10 (struct wiimote_t*,int *) ;
 int FUNC_11 (struct wiimote_t*,int) ;

__attribute__((used)) static void FUNC_12(struct wiimote_t *VAR_14,ubyte *VAR_15)
{
 int VAR_16 = 0;
 int VAR_17 = 0;




 struct cmd_blk_t *VAR_18 = VAR_14->cmd_head;

 FUNC_7(VAR_14,VAR_15);

 VAR_14->event = VAR_9;





 if((VAR_15[2]&VAR_11)==VAR_11) VAR_17 = 1;



 if((VAR_15[2]&VAR_12)==VAR_12) VAR_16 = 1;

 VAR_14->battery_level = VAR_15[5];

 if(!VAR_16 && FUNC_2(VAR_14,VAR_6)) {
  FUNC_0(VAR_14, VAR_6);
  FUNC_9(VAR_14, 1);
  goto done;
 }
 if(VAR_16 && !FUNC_2(VAR_14,VAR_5)) FUNC_1(VAR_14,VAR_5);
 else if(!VAR_16 && FUNC_2(VAR_14,VAR_5)) FUNC_0(VAR_14, VAR_5);
 if(VAR_17) {
  if(!FUNC_2(VAR_14,VAR_2) && !FUNC_2(VAR_14,VAR_3) && !FUNC_2(VAR_14,VAR_4)) {
   FUNC_6(VAR_14);
   goto done;
  }
 } else {
  FUNC_0(VAR_14,VAR_3);
  if(FUNC_2(VAR_14,VAR_2)) {
   FUNC_5(VAR_14);
   goto done;
  }
 }
 FUNC_10(VAR_14,((void*)0));

done:
 if(!VAR_18) return;
 if(!(VAR_18->state==VAR_1 && VAR_18->data[0]==VAR_10)) return;

 VAR_14->cmd_head = VAR_18->next;

 VAR_18->state = VAR_0;
 if(VAR_18->cb!=((void*)0)) VAR_18->cb(VAR_14,VAR_15,6);

 FUNC_3(&VAR_14->cmdq,&VAR_18->node);
 FUNC_8(VAR_14);
}
