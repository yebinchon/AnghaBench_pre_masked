
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {int dummy; } ;
struct zfcp_dbf {TYPE_1__* scsi; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {int level; } ;


 int FUNC_0 (char const*,char const*,int,struct zfcp_dbf*,struct scsi_cmnd*,struct zfcp_fsf_req*,unsigned long) ;

__attribute__((used)) static inline
void FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2,
     struct zfcp_dbf *VAR_3, struct scsi_cmnd *VAR_4,
     struct zfcp_fsf_req *VAR_5, unsigned long VAR_6)
{
 if (VAR_2 <= VAR_3->scsi->level)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
