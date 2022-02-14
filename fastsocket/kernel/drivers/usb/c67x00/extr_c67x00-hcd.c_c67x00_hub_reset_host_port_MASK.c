
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_sie {int dev; struct c67x00_hcd* private_data; } ;
struct c67x00_hcd {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct c67x00_sie*,int) ;
 int FUNC_1 (struct c67x00_sie*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct c67x00_sie *VAR_1, int VAR_2)
{
 struct c67x00_hcd *VAR_3 = VAR_1->private_data;
 unsigned long VAR_4;

 FUNC_0(VAR_1, VAR_2);

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_1(VAR_1, VAR_2);
 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_1->dev, VAR_0);
}
