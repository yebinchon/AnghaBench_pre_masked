
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int response_code; } ;
struct sclp_async_sccb {TYPE_2__ header; } ;
struct TYPE_9__ {int length; int flags; int type; } ;
struct async_evbuf {int rtype; int otype; TYPE_3__ header; int comp_id; int data; } ;
struct TYPE_7__ {int length; int function_code; } ;
struct TYPE_11__ {TYPE_1__ header; struct async_evbuf evbuf; } ;
struct TYPE_10__ {scalar_t__ status; TYPE_5__* sccb; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_11)
{
 struct async_evbuf *VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 if (!VAR_7)
  return 0;
 VAR_9->evbuf.header.type = VAR_1;
 VAR_9->evbuf.rtype = 0xA5;
 VAR_9->evbuf.otype = 0x00;
 VAR_12 = &VAR_9->evbuf;
 VAR_8->command = VAR_2;
 VAR_8->sccb = VAR_9;
 VAR_8->status = VAR_6;
 FUNC_4(VAR_9->evbuf.data, VAR_11, sizeof(VAR_9->evbuf.data));
 FUNC_4(VAR_9->evbuf.comp_id, "5639H7CH0", sizeof(VAR_9->evbuf.comp_id));
 VAR_9->evbuf.header.length = sizeof(VAR_9->evbuf);
 VAR_9->header.length = sizeof(VAR_9->evbuf) + sizeof(VAR_9->header);
 VAR_9->header.function_code = VAR_3;
 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13)
  return VAR_13;
 FUNC_2(&VAR_10, VAR_14);
 while (VAR_8->status != VAR_4 &&
  VAR_8->status != VAR_5) {
   FUNC_1();
 }
 FUNC_3(&VAR_10, VAR_14);
 if (VAR_8->status != VAR_4)
  return -VAR_0;
 VAR_13 = ((struct sclp_async_sccb *)
        VAR_8->sccb)->header.response_code;
 if (VAR_13 != 0x0020)
  return -VAR_0;
 if (VAR_12->header.flags != 0x80)
  return -VAR_0;
 return VAR_13;
}
