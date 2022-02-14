
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf_hba_record {int tag2; int tag; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba_record hba_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct zfcp_dbf_hba_record*,int) ;
 int FUNC_1 (struct zfcp_dbf_hba_record*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5(struct zfcp_dbf *VAR_1, char *VAR_2)
{
 struct zfcp_dbf_hba_record *VAR_3 = &VAR_1->hba_buf;
 unsigned long VAR_4;

 FUNC_2(&VAR_1->hba_lock, VAR_4);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 FUNC_4(VAR_3->tag, "base", VAR_0);
 FUNC_4(VAR_3->tag2, VAR_2, VAR_0);
 FUNC_0(VAR_1->hba, 0, VAR_3, sizeof(*VAR_3));
 FUNC_3(&VAR_1->hba_lock, VAR_4);
}
