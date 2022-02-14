
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdbuf_t {int len; int buf; } ;
struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int cmdlock; struct cmdbuf_t* cmdbuf; int bcs; TYPE_1__ hw; } ;
struct bas_cardstate {int basstate; scalar_t__ retry_cmd_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cardstate*,int ,int ) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cardstate *VAR_8)
{
 struct cmdbuf_t *VAR_9;
 struct bas_cardstate *VAR_10 = VAR_8->hw.bas;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13 = 0;


 if (VAR_10->basstate & VAR_3) {
  FUNC_2(VAR_5|VAR_4, "suspending");
  return -VAR_6;
 }


 if (!(VAR_10->basstate & VAR_1)) {
  FUNC_2(VAR_5|VAR_4, "AT channel not open");
  VAR_12 = FUNC_3(VAR_8->bcs, VAR_7, 0, VAR_0);
  if (VAR_12 < 0) {

   FUNC_4(&VAR_8->cmdlock, VAR_11);
   while (VAR_8->cmdbuf != ((void*)0))
    FUNC_1(VAR_8);
   FUNC_5(&VAR_8->cmdlock, VAR_11);
  }
  return VAR_12;
 }


 FUNC_4(&VAR_8->cmdlock, VAR_11);

 while ((VAR_9 = VAR_8->cmdbuf) != ((void*)0) && (VAR_10->basstate & VAR_2)) {
  VAR_10->retry_cmd_out = 0;
  VAR_12 = FUNC_0(VAR_8, VAR_9->buf, VAR_9->len);
  if (FUNC_6(VAR_12)) {
   VAR_13 = VAR_12;
   FUNC_1(VAR_8);
  }
 }

 FUNC_5(&VAR_8->cmdlock, VAR_11);
 return VAR_13;
}
