
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nents; int sgl; } ;
struct scsi_data_buffer {scalar_t__ resid; TYPE_1__ table; int length; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 struct scsi_data_buffer* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_2, unsigned char *VAR_3,
    int VAR_4)
{
 int VAR_5;
 struct scsi_data_buffer *VAR_6 = FUNC_2(VAR_2);

 if (!VAR_6->length)
  return 0;
 if (!(FUNC_0(VAR_2) || VAR_2->sc_data_direction == VAR_1))
  return (VAR_0 << 16);

 VAR_5 = FUNC_3(VAR_6->table.sgl, VAR_6->table.nents,
          VAR_3, VAR_4);
 if (VAR_6->resid)
  VAR_6->resid -= VAR_5;
 else
  VAR_6->resid = FUNC_1(VAR_2) - VAR_5;

 return 0;
}
