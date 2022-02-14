
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* me_fw; TYPE_1__* pfp_fw; } ;
typedef TYPE_3__ drm_radeon_private_t ;
typedef int __be32 ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(drm_radeon_private_t *VAR_12)
{
 const __be32 *VAR_13;
 int VAR_14;

 if (!VAR_12->me_fw || !VAR_12->pfp_fw)
  return;

 FUNC_6(VAR_12);

 FUNC_3(VAR_6,



       VAR_8 |
       FUNC_0(15) |
       FUNC_1(3));

 FUNC_3(VAR_7, VAR_9);
 FUNC_2(VAR_7);
 FUNC_5(15);
 FUNC_3(VAR_7, 0);

 VAR_13 = (const __be32 *)VAR_12->pfp_fw->data;
 FUNC_3(VAR_4, 0);
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  FUNC_3(VAR_5, FUNC_4(VAR_13++));
 FUNC_3(VAR_4, 0);

 VAR_13 = (const __be32 *)VAR_12->me_fw->data;
 FUNC_3(VAR_3, 0);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  FUNC_3(VAR_1, FUNC_4(VAR_13++));
 FUNC_3(VAR_3, 0);

 FUNC_3(VAR_4, 0);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_2, 0);

}
