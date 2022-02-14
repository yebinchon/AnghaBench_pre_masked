
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int*** virt2phys_pkey; int** phys_pkey_cache; } ;
struct mlx4_ib_dev {TYPE_3__ pkeys; TYPE_4__* dev; } ;
struct TYPE_8__ {int* pkey_phys_table_len; } ;
struct TYPE_7__ {int num_ports; } ;
struct TYPE_10__ {int num_vfs; TYPE_2__ phys_caps; TYPE_1__ caps; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_0->dev)) {
  for (VAR_2 = 0; VAR_2 <= VAR_0->dev->num_vfs; ++VAR_2) {
   for (VAR_1 = 1; VAR_1 <= VAR_0->dev->caps.num_ports; ++VAR_1) {
    for (VAR_3 = 0;
         VAR_3 < VAR_0->dev->phys_caps.pkey_phys_table_len[VAR_1];
         ++VAR_3) {
     VAR_0->pkeys.virt2phys_pkey[VAR_2][VAR_1 - 1][VAR_3] =

      (VAR_2 == FUNC_1(VAR_0->dev) || !VAR_3) ? VAR_3 :
       VAR_0->dev->phys_caps.pkey_phys_table_len[VAR_1] - 1;
     FUNC_2(VAR_0->dev, VAR_2, VAR_1, VAR_3,
            VAR_0->pkeys.virt2phys_pkey[VAR_2][VAR_1 - 1][VAR_3]);
    }
   }
  }

  for (VAR_1 = 1; VAR_1 <= VAR_0->dev->caps.num_ports; ++VAR_1) {
   for (VAR_3 = 0;
        VAR_3 < VAR_0->dev->phys_caps.pkey_phys_table_len[VAR_1];
        ++VAR_3)
    VAR_0->pkeys.phys_pkey_cache[VAR_1-1][VAR_3] =
     (VAR_3) ? 0 : 0xFFFF;
  }
 }
}
