
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int flags; int * frozen_sb; int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mapped_device *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->flags))
  return;

 FUNC_2(VAR_1->bdev, VAR_1->frozen_sb);
 VAR_1->frozen_sb = ((void*)0);
 FUNC_0(VAR_0, &VAR_1->flags);
}
