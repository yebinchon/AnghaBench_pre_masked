
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fc_fcp_pkt {scalar_t__ io_status; scalar_t__ cdb_status; int status_code; } ;


 int FUNC_0 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_1(struct fc_fcp_pkt *VAR_0, u8 VAR_1)
{
 VAR_0->status_code = VAR_1;
 VAR_0->cdb_status = 0;
 VAR_0->io_status = 0;




 FUNC_0(VAR_0);
}
