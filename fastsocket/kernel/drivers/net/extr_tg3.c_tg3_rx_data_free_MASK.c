
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int pdev; } ;
struct ring_info {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ring_info*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_2, struct ring_info *VAR_3, u32 VAR_4)
{
 if (!VAR_3->data)
  return;

 FUNC_2(VAR_2->pdev, FUNC_0(VAR_3, VAR_1),
    VAR_4, VAR_0);
 FUNC_1(VAR_3->data);
 VAR_3->data = ((void*)0);
}
