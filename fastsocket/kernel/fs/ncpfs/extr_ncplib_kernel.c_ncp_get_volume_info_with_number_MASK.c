
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_volume_info {int volume_name; void* sectors_per_block; void* available_dir_entries; void* total_dir_entries; void* not_yet_purgeable_blocks; void* purgeable_blocks; void* free_blocks; void* total_blocks; } ;
struct ncp_server {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ncp_server*,int) ;
 int FUNC_4 (struct ncp_server*,int) ;
 void* FUNC_5 (struct ncp_server*,int) ;
 int FUNC_6 (struct ncp_server*,int) ;
 void* FUNC_7 (struct ncp_server*,int) ;
 int FUNC_8 (struct ncp_server*,int) ;
 int FUNC_9 (struct ncp_server*) ;

int FUNC_10(struct ncp_server* VAR_2,
        int VAR_3, struct ncp_volume_info* VAR_4) {
 int VAR_5;
 int VAR_6;

 FUNC_4(VAR_2, 44);
 FUNC_3(VAR_2, VAR_3);

 if ((VAR_5 = FUNC_8(VAR_2, 22)) != 0) {
  goto out;
 }
 VAR_4->total_blocks = FUNC_7(VAR_2, 0);
 VAR_4->free_blocks = FUNC_7(VAR_2, 4);
 VAR_4->purgeable_blocks = FUNC_7(VAR_2, 8);
 VAR_4->not_yet_purgeable_blocks = FUNC_7(VAR_2, 12);
 VAR_4->total_dir_entries = FUNC_7(VAR_2, 16);
 VAR_4->available_dir_entries = FUNC_7(VAR_2, 20);
 VAR_4->sectors_per_block = FUNC_5(VAR_2, 28);

 FUNC_2(&(VAR_4->volume_name), 0, sizeof(VAR_4->volume_name));

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_5(VAR_2, 29);
 if (VAR_6 > VAR_1) {
  FUNC_0("ncpfs: volume name too long: %d\n", VAR_6);
  goto out;
 }
 FUNC_1(&(VAR_4->volume_name), FUNC_6(VAR_2, 30), VAR_6);
 VAR_5 = 0;
out:
 FUNC_9(VAR_2);
 return VAR_5;
}
