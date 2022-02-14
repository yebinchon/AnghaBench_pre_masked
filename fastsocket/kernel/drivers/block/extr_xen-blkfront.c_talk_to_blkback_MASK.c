
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int nodename; } ;
struct blkfront_info {int evtchn; int ring_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blkfront_info*,int ) ;
 int FUNC_1 (struct xenbus_device*,struct blkfront_info*) ;
 int FUNC_2 (struct xenbus_device*,int,char*,...) ;
 int FUNC_3 (struct xenbus_transaction,int ,char*,char*,int ) ;
 int FUNC_4 (struct xenbus_device*,int ) ;
 int FUNC_5 (struct xenbus_transaction,int) ;
 int FUNC_6 (struct xenbus_transaction*) ;

__attribute__((used)) static int FUNC_7(struct xenbus_device *VAR_3,
      struct blkfront_info *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 struct xenbus_transaction VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7)
  goto out;

again:
 VAR_7 = FUNC_6(&VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_3, VAR_7, "starting transaction");
  goto destroy_blkring;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_3->nodename,
       "ring-ref", "%u", VAR_4->ring_ref);
 if (VAR_7) {
  VAR_5 = "writing ring-ref";
  goto abort_transaction;
 }
 VAR_7 = FUNC_3(VAR_6, VAR_3->nodename,
       "event-channel", "%u", VAR_4->evtchn);
 if (VAR_7) {
  VAR_5 = "writing event-channel";
  goto abort_transaction;
 }
 VAR_7 = FUNC_3(VAR_6, VAR_3->nodename, "protocol", "%s",
       VAR_1);
 if (VAR_7) {
  VAR_5 = "writing protocol";
  goto abort_transaction;
 }

 VAR_7 = FUNC_5(VAR_6, 0);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   goto again;
  FUNC_2(VAR_3, VAR_7, "completing transaction");
  goto destroy_blkring;
 }

 FUNC_4(VAR_3, VAR_2);

 return 0;

 abort_transaction:
 FUNC_5(VAR_6, 1);
 if (VAR_5)
  FUNC_2(VAR_3, VAR_7, "%s", VAR_5);
 destroy_blkring:
 FUNC_0(VAR_4, 0);
 out:
 return VAR_7;
}
