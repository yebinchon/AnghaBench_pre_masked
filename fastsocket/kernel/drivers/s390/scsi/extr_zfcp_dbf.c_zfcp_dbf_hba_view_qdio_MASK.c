
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf_hba_record_qdio {int scount; int fsf_reqid; int sbal_count; int sbal_index; int qdio_error; } ;


 int FUNC_0 (char**,char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, struct zfcp_dbf_hba_record_qdio *VAR_1)
{
 FUNC_0(VAR_0, "qdio_error", "0x%08x", VAR_1->qdio_error);
 FUNC_0(VAR_0, "sbal_index", "0x%02x", VAR_1->sbal_index);
 FUNC_0(VAR_0, "sbal_count", "0x%02x", VAR_1->sbal_count);
 FUNC_0(VAR_0, "fsf_reqid", "0x%0Lx", VAR_1->fsf_reqid);
 FUNC_0(VAR_0, "scount", "0x%02x", VAR_1->scount);
}
