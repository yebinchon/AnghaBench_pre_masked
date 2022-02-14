
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct request_queue {int dummy; } ;


 struct request_queue* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct request_queue *FUNC_5(struct scsi_device *VAR_5)
{
 struct request_queue *VAR_6;

 VAR_6 = FUNC_0(VAR_5->host, VAR_2);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_6, VAR_1);
 FUNC_4(VAR_6, VAR_3);
 FUNC_3(VAR_6, VAR_4);
 FUNC_1(VAR_6, VAR_0);
 return VAR_6;
}
