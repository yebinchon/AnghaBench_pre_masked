
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_device {TYPE_3__* me_fw; TYPE_2__* ce_fw; TYPE_1__* pfp_fw; } ;
typedef int __be32 ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_11)
{
 const __be32 *VAR_12;
 int VAR_13;

 if (!VAR_11->me_fw || !VAR_11->pfp_fw)
  return -VAR_7;

 FUNC_2(VAR_11, 0);


 VAR_12 = (const __be32 *)VAR_11->pfp_fw->data;
 FUNC_0(VAR_5, 0);
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  FUNC_0(VAR_6, FUNC_1(VAR_12++));
 FUNC_0(VAR_5, 0);


 VAR_12 = (const __be32 *)VAR_11->ce_fw->data;
 FUNC_0(VAR_0, 0);
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  FUNC_0(VAR_1, FUNC_1(VAR_12++));
 FUNC_0(VAR_0, 0);


 VAR_12 = (const __be32 *)VAR_11->me_fw->data;
 FUNC_0(VAR_4, 0);
 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  FUNC_0(VAR_2, FUNC_1(VAR_12++));
 FUNC_0(VAR_4, 0);

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_3, 0);
 return 0;
}
