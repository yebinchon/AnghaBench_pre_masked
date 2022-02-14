
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_3 (struct beiscsi_hba*) ;

__attribute__((used)) static int FUNC_4(struct beiscsi_hba *VAR_4)
{
 int VAR_5 = -VAR_1;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4, VAR_2, VAR_0,
       "BM_%d : beiscsi_dev_probe -"
       "Failed in beiscsi_alloc_memory\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto free_init;
 FUNC_2(VAR_4, VAR_3, VAR_0,
      "BM_%d : Return success from beiscsi_init_controller");

 return 0;

free_init:
 FUNC_0(VAR_4);
 return VAR_5;
}
