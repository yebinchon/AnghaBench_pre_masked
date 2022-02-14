
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {TYPE_2__* pfp_fw; TYPE_1__* me_fw; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_13)
{
 const __be32 *VAR_14;
 int VAR_15;

 if (!VAR_13->me_fw || !VAR_13->pfp_fw)
  return -VAR_7;

 FUNC_6(VAR_13);

 FUNC_3(VAR_6,



        VAR_11 | FUNC_0(15) | FUNC_1(3));


 FUNC_3(VAR_8, VAR_12);
 FUNC_2(VAR_8);
 FUNC_5(15);
 FUNC_3(VAR_8, 0);

 FUNC_3(VAR_3, 0);

 VAR_14 = (const __be32 *)VAR_13->me_fw->data;
 FUNC_3(VAR_3, 0);
 for (VAR_15 = 0; VAR_15 < VAR_10 * 3; VAR_15++)
  FUNC_3(VAR_1,
         FUNC_4(VAR_14++));

 VAR_14 = (const __be32 *)VAR_13->pfp_fw->data;
 FUNC_3(VAR_4, 0);
 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  FUNC_3(VAR_5,
         FUNC_4(VAR_14++));

 FUNC_3(VAR_4, 0);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_2, 0);
 return 0;
}
