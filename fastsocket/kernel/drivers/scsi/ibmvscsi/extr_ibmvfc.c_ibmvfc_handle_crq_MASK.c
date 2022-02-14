
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int client_migrated; int dev; int pool; int logged_in; int state; } ;
struct ibmvfc_event {int (* done ) (struct ibmvfc_event*) ;int queue; int timer; int free; } ;
struct ibmvfc_crq {long ioba; int valid; long format; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,long) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ibmvfc_host*) ;
 int FUNC_5 (struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_host*,int ) ;
 long FUNC_7 (struct ibmvfc_host*) ;
 int FUNC_8 (struct ibmvfc_host*,int ) ;
 int FUNC_9 (struct ibmvfc_event*) ;
 int FUNC_10 (int *,struct ibmvfc_event*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ibmvfc_event*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ibmvfc_crq *VAR_9, struct ibmvfc_host *VAR_10)
{
 long VAR_11;
 struct ibmvfc_event *VAR_12 = (struct ibmvfc_event *)VAR_9->ioba;

 switch (VAR_9->valid) {
 case 129:
  switch (VAR_9->format) {
  case 131:
   FUNC_3(VAR_10->dev, "Partner initialized\n");

   VAR_11 = FUNC_7(VAR_10);
   if (VAR_11 == 0)
    FUNC_4(VAR_10);
   else
    FUNC_2(VAR_10->dev, "Unable to send init rsp. rc=%ld\n", VAR_11);
   break;
  case 130:
   FUNC_3(VAR_10->dev, "Partner initialization complete\n");
   FUNC_4(VAR_10);
   break;
  default:
   FUNC_2(VAR_10->dev, "Unknown crq message type: %d\n", VAR_9->format);
  }
  return;
 case 128:
  VAR_10->state = VAR_7;
  VAR_10->logged_in = 0;
  FUNC_8(VAR_10, VAR_3);
  if (VAR_9->format == VAR_8) {

   FUNC_3(VAR_10->dev, "Re-enabling adapter\n");
   VAR_10->client_migrated = 1;
   FUNC_6(VAR_10, VAR_1);
   FUNC_5(VAR_10, VAR_6);
   FUNC_8(VAR_10, VAR_4);
  } else {
   FUNC_2(VAR_10->dev, "Virtual adapter failed (rc=%d)\n", VAR_9->format);
   FUNC_6(VAR_10, VAR_0);
   FUNC_5(VAR_10, VAR_6);
   FUNC_8(VAR_10, VAR_5);
  }
  return;
 case 132:
  break;
 default:
  FUNC_2(VAR_10->dev, "Got an invalid message type 0x%02x\n", VAR_9->valid);
  return;
 }

 if (VAR_9->format == VAR_2)
  return;





 if (FUNC_13(!FUNC_10(&VAR_10->pool, VAR_12))) {
  FUNC_2(VAR_10->dev, "Returned correlation_token 0x%08llx is invalid!\n",
   VAR_9->ioba);
  return;
 }

 if (FUNC_13(FUNC_0(&VAR_12->free))) {
  FUNC_2(VAR_10->dev, "Received duplicate correlation_token 0x%08llx!\n",
   VAR_9->ioba);
  return;
 }

 FUNC_1(&VAR_12->timer);
 FUNC_11(&VAR_12->queue);
 FUNC_9(VAR_12);
 VAR_12->done(VAR_12);
}
