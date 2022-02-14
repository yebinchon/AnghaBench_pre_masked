
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int eh_sgl_hndl_base; int io_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, VAR_1, VAR_0,
       "BM_%d : beiscsi_dev_probe - Failed in"
       "beiscsi_init_controller\n");
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, VAR_1, VAR_0,
       "BM_%d : beiscsi_dev_probe - Failed in"
       "beiscsi_init_sgl_handle\n");
  goto do_cleanup_ctrlr;
 }

 if (FUNC_3(VAR_2)) {
  FUNC_2(VAR_2, VAR_1, VAR_0,
       "BM_%d : Failed in hba_setup_cid_tbls\n");
  FUNC_5(VAR_2->io_sgl_hndl_base);
  FUNC_5(VAR_2->eh_sgl_hndl_base);
  goto do_cleanup_ctrlr;
 }

 return VAR_3;

do_cleanup_ctrlr:
 FUNC_4(VAR_2);
 return VAR_3;
}
