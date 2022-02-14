
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_event {int evt_type; int node; } ;
typedef int gfp_t ;
typedef enum scsi_device_event { ____Placeholder_scsi_device_event } scsi_device_event ;


 int FUNC_0 (int *) ;

 struct scsi_event* FUNC_1 (int,int ) ;

struct scsi_event *FUNC_2(enum scsi_device_event VAR_0,
      gfp_t VAR_1)
{
 struct scsi_event *VAR_2 = FUNC_1(sizeof(struct scsi_event), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->evt_type = VAR_0;
 FUNC_0(&VAR_2->node);


 switch (VAR_0) {
 case 128:
 default:

  break;
 }

 return VAR_2;
}
