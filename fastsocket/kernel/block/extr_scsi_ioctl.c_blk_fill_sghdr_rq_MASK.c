
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_hdr {int timeout; int cmd_len; int cmdp; } ;
struct request_queue {scalar_t__ sg_timeout; } ;
struct request {scalar_t__ timeout; int cmd_type; int cmd_len; int cmd; } ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct request_queue*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_6, struct request *VAR_7,
        struct sg_io_hdr *VAR_8, fmode_t VAR_9)
{
 if (FUNC_1(VAR_7->cmd, VAR_8->cmdp, VAR_8->cmd_len))
  return -VAR_2;
 if (FUNC_0(VAR_6, VAR_7->cmd, VAR_9 & VAR_4))
  return -VAR_3;




 VAR_7->cmd_len = VAR_8->cmd_len;
 VAR_7->cmd_type = VAR_5;

 VAR_7->timeout = FUNC_2(VAR_8->timeout);
 if (!VAR_7->timeout)
  VAR_7->timeout = VAR_6->sg_timeout;
 if (!VAR_7->timeout)
  VAR_7->timeout = VAR_0;
 if (VAR_7->timeout < VAR_1)
  VAR_7->timeout = VAR_1;

 return 0;
}
