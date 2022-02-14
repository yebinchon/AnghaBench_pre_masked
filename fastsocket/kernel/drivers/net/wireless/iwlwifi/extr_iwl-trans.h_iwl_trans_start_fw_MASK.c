
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; int rx_mpdu_cmd; } ;
struct fw_img {int dummy; } ;
struct TYPE_2__ {int (* start_fw ) (struct iwl_trans*,struct fw_img const*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct iwl_trans*,struct fw_img const*,int) ;

__attribute__((used)) static inline int FUNC_3(struct iwl_trans *VAR_0,
         const struct fw_img *VAR_1,
         bool VAR_2)
{
 FUNC_1();

 FUNC_0(!VAR_0->rx_mpdu_cmd);

 return VAR_0->ops->start_fw(VAR_0, VAR_1, VAR_2);
}
