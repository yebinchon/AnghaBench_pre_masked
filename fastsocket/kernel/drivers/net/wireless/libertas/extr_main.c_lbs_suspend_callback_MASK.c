
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ fw_ready; scalar_t__ mesh_dev; scalar_t__ dev; } ;
struct cmd_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_1, unsigned long VAR_2,
    struct cmd_header *VAR_3)
{
 FUNC_0(VAR_0);

 FUNC_2(VAR_1->dev);
 if (VAR_1->mesh_dev)
  FUNC_2(VAR_1->mesh_dev);

 VAR_1->fw_ready = 0;
 FUNC_1(VAR_0);
 return 0;
}
