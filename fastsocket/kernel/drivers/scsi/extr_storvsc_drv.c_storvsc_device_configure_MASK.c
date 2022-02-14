
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct scsi_device*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_6)
{
 FUNC_3(VAR_6, VAR_2,
    VAR_4);

 FUNC_1(VAR_6->request_queue, VAR_3);

 FUNC_0(VAR_6->request_queue, VAR_0);

 FUNC_2(VAR_6->request_queue, (VAR_5 * VAR_1));

 return 0;
}
