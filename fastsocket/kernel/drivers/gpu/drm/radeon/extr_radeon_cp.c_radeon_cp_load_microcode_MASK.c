
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* me_fw; } ;
typedef TYPE_2__ drm_radeon_private_t ;
typedef int __be32 ;
struct TYPE_5__ {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(drm_radeon_private_t *VAR_3)
{
 const __be32 *VAR_4;
 int VAR_5, VAR_6;

 FUNC_2(VAR_3);

 if (VAR_3->me_fw) {
  VAR_6 = VAR_3->me_fw->size / 4;
  VAR_4 = (const __be32 *)&VAR_3->me_fw->data[0];
  FUNC_0(VAR_0, 0);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += 2) {
   FUNC_0(VAR_1,
         FUNC_1(&VAR_4[VAR_5]));
   FUNC_0(VAR_2,
         FUNC_1(&VAR_4[VAR_5 + 1]));
  }
 }
}
