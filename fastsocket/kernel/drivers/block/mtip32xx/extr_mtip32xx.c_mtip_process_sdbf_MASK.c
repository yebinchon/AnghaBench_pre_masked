
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtip_port {struct mtip_cmd* commands; int * completed; } ;
struct mtip_cmd {int comp_data; int (* comp_func ) (struct mtip_port*,int,int ,int ) ;} ;
struct driver_data {int slot_groups; TYPE_1__* pdev; struct mtip_port* port; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int (*) (struct mtip_port*,int,int ,int )) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct driver_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mtip_port*,int,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static inline void FUNC_8(struct driver_data *VAR_1)
{
 struct mtip_port *VAR_2 = VAR_1->port;
 int VAR_3, VAR_4, VAR_5;
 u32 VAR_6;
 struct mtip_cmd *VAR_7;


 for (VAR_3 = 0; VAR_3 < VAR_1->slot_groups; VAR_3++) {
  VAR_6 = FUNC_4(VAR_2->completed[VAR_3]);
  if (!VAR_6)
   continue;


  FUNC_7(VAR_6, VAR_2->completed[VAR_3]);


  for (VAR_5 = 0;
       (VAR_5 < 32) && VAR_6;
       VAR_5++, VAR_6 >>= 1) {
   if (VAR_6 & 0x01) {
    VAR_4 = (VAR_3 << 5) | VAR_5;


    if (FUNC_6(VAR_4 == VAR_0))
     continue;

    VAR_7 = &VAR_2->commands[VAR_4];

    if (FUNC_1(VAR_7->comp_func)) {
     VAR_7->comp_func(
      VAR_2,
      VAR_4,
      VAR_7->comp_data,
      0);
    } else {
     FUNC_0(&VAR_1->pdev->dev,
      "Null completion "
      "for tag %d",
      VAR_4);

     if (FUNC_2(
      VAR_1->pdev)) {
      FUNC_3(VAR_1);
      return;
     }
    }
   }
  }
 }
}
