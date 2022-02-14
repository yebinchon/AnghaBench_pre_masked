
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct request {unsigned char* sense; int retries; int timeout; int cmd_flags; unsigned int resid_len; int errors; int q; int cmd_type; scalar_t__ sense_len; int cmd_len; int cmd; } ;


 int FUNC_0 (unsigned char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,struct request*,int) ;
 struct request* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (int ,struct request*,void*,unsigned int,int ) ;
 int FUNC_5 (int ,unsigned char const*,int ) ;
 int FUNC_6 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct scsi_device *VAR_6, const unsigned char *VAR_7,
   int VAR_8, void *VAR_9, unsigned VAR_10,
   unsigned char *VAR_11, int VAR_12, int VAR_13, int VAR_14,
   int *VAR_15)
{
 struct request *VAR_16;
 int VAR_17 = (VAR_8 == VAR_0);
 int VAR_18 = VAR_1 << 24;

 VAR_16 = FUNC_2(VAR_6->request_queue, VAR_17, VAR_5);
 if (!VAR_16)
  return VAR_18;

 if (VAR_10 && FUNC_4(VAR_6->request_queue, VAR_16,
     VAR_9, VAR_10, VAR_5))
  goto out;

 VAR_16->cmd_len = FUNC_0(VAR_7[0]);
 FUNC_5(VAR_16->cmd, VAR_7, VAR_16->cmd_len);
 VAR_16->sense = VAR_11;
 VAR_16->sense_len = 0;
 VAR_16->retries = VAR_13;
 VAR_16->timeout = VAR_12;
 VAR_16->cmd_type = VAR_4;
 VAR_16->cmd_flags |= VAR_14 | VAR_3 | VAR_2;




 FUNC_1(VAR_16->q, ((void*)0), VAR_16, 1);







 if (FUNC_7(VAR_16->resid_len > 0 && VAR_16->resid_len <= VAR_10))
  FUNC_6(VAR_9 + (VAR_10 - VAR_16->resid_len), 0, VAR_16->resid_len);

 if (VAR_15)
  *VAR_15 = VAR_16->resid_len;
 VAR_18 = VAR_16->errors;
 out:
 FUNC_3(VAR_16);

 return VAR_18;
}
