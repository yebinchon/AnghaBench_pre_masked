
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int dummy; } ;
struct aic7xxx_host {int host_no; int base; TYPE_1__* scb_data; struct Scsi_Host* host; } ;
struct Scsi_Host {int host_no; scalar_t__ hostdata; } ;
typedef int scb_data_type ;
struct TYPE_2__ {int free_scbs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (struct aic7xxx_host*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct Scsi_Host* FUNC_4 (struct scsi_host_template*,int) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static struct aic7xxx_host *
FUNC_6(struct scsi_host_template *VAR_3, struct aic7xxx_host *VAR_4)
{
  struct aic7xxx_host *VAR_5 = ((void*)0);
  struct Scsi_Host *VAR_6;





  VAR_6 = FUNC_4(VAR_3, sizeof(struct aic7xxx_host));

  if (VAR_6 != ((void*)0))
  {
    VAR_5 = (struct aic7xxx_host *) VAR_6->hostdata;
    FUNC_1(VAR_5, 0, sizeof(struct aic7xxx_host));
    *VAR_5 = *VAR_4;
    VAR_5->host = VAR_6;

    VAR_5->scb_data = FUNC_0(sizeof(scb_data_type), VAR_0);
    if (VAR_5->scb_data)
    {
      FUNC_3 (&VAR_5->scb_data->free_scbs);
    }
    else
    {




      FUNC_2(VAR_5->base, VAR_1 - VAR_2);
      FUNC_5(VAR_6);
      return(((void*)0));
    }
    VAR_5->host_no = VAR_6->host_no;
  }
  return (VAR_5);
}
