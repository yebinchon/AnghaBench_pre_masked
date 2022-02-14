
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_hba {int hba_id; struct fd_host* hba_ptr; } ;
struct fd_host {int fd_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fd_host* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct se_hba *VAR_5, u32 VAR_6)
{
 struct fd_host *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct fd_host), VAR_3);
 if (!VAR_7) {
  FUNC_2("Unable to allocate memory for struct fd_host\n");
  return -VAR_0;
 }

 VAR_7->fd_host_id = VAR_6;

 VAR_5->hba_ptr = VAR_7;

 FUNC_1("CORE_HBA[%d] - TCM FILEIO HBA Driver %s on Generic"
  " Target Core Stack %s\n", VAR_5->hba_id, VAR_2,
  VAR_4);
 FUNC_1("CORE_HBA[%d] - Attached FILEIO HBA: %u to Generic"
  " MaxSectors: %u\n",
  VAR_5->hba_id, VAR_7->fd_host_id, VAR_1);

 return 0;
}
