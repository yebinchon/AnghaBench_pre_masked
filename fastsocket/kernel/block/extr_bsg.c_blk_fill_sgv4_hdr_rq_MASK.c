
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {scalar_t__ request_len; scalar_t__ subprotocol; int timeout; scalar_t__ request; } ;
struct request_queue {scalar_t__ sg_timeout; } ;
struct request {scalar_t__ cmd_len; scalar_t__ timeout; int cmd_type; int cmd; } ;
struct bsg_device {int dummy; } ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct request_queue*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_10, struct request *VAR_11,
    struct sg_io_v4 *VAR_12, struct bsg_device *VAR_13,
    fmode_t VAR_14)
{
 if (VAR_12->request_len > VAR_1) {
  VAR_11->cmd = FUNC_3(VAR_12->request_len, VAR_8);
  if (!VAR_11->cmd)
   return -VAR_6;
 }

 if (FUNC_2(VAR_11->cmd, (void *)(unsigned long)VAR_12->request,
      VAR_12->request_len))
  return -VAR_5;

 if (VAR_12->subprotocol == VAR_3) {
  if (FUNC_0(VAR_10, VAR_11->cmd, VAR_14))
   return -VAR_7;
 } else if (!FUNC_1(VAR_4))
  return -VAR_7;




 VAR_11->cmd_len = VAR_12->request_len;
 VAR_11->cmd_type = VAR_9;

 VAR_11->timeout = FUNC_4(VAR_12->timeout);
 if (!VAR_11->timeout)
  VAR_11->timeout = VAR_10->sg_timeout;
 if (!VAR_11->timeout)
  VAR_11->timeout = VAR_0;
 if (VAR_11->timeout < VAR_2)
  VAR_11->timeout = VAR_2;

 return 0;
}
