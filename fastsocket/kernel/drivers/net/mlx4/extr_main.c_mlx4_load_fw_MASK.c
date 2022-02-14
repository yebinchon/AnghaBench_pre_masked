
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_icm; int fw_pages; } ;
struct mlx4_priv {TYPE_1__ fw; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 VAR_4->fw.fw_icm = FUNC_3(VAR_3, VAR_4->fw.fw_pages,
      VAR_1 | VAR_2, 0);
 if (!VAR_4->fw.fw_icm) {
  FUNC_4(VAR_3, "Couldn't allocate FW area, aborting.\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4->fw.fw_icm);
 if (VAR_5) {
  FUNC_4(VAR_3, "MAP_FA command failed, aborting.\n");
  goto err_free;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_3, "RUN_FW command failed, aborting.\n");
  goto err_unmap_fa;
 }

 return 0;

err_unmap_fa:
 FUNC_2(VAR_3);

err_free:
 FUNC_5(VAR_3, VAR_4->fw.fw_icm, 0);
 return VAR_5;
}
