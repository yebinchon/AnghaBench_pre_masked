
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zfcp_unit {TYPE_2__* port; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_4__ {TYPE_1__* adapter; } ;
struct TYPE_3__ {int dbf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int,int ,struct scsi_cmnd*,int *,int ) ;

__attribute__((used)) static inline
void FUNC_1(const char *VAR_1, u8 VAR_2, struct zfcp_unit *VAR_3,
       struct scsi_cmnd *VAR_4)
{
 FUNC_0(VAR_2 == VAR_0 ? "trst" : "lrst", VAR_1, 1,
       VAR_3->port->adapter->dbf, VAR_4, ((void*)0), 0);
}
