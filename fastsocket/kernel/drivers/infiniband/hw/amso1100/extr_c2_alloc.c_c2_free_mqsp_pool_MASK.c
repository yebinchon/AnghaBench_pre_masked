
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_chunk {struct sp_chunk* next; } ;
struct c2_dev {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct sp_chunk*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sp_chunk*,int ) ;

void FUNC_2(struct c2_dev *VAR_2, struct sp_chunk *VAR_3)
{
 struct sp_chunk *VAR_4;

 while (VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_0(&VAR_2->pcidev->dev, VAR_0, VAR_3,
      FUNC_1(VAR_3, VAR_1));
  VAR_3 = VAR_4;
 }
}
