
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int dev_lock; int state; int flags; int iowait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static void FUNC_8(struct cafe_camera *VAR_3)
{
 unsigned long VAR_4;






 FUNC_4(&VAR_3->dev_lock, VAR_4);
 FUNC_1(VAR_3);
 FUNC_5(&VAR_3->dev_lock, VAR_4);
 FUNC_3(1);
 FUNC_7(VAR_3->iowait,
   !FUNC_6(VAR_0, &VAR_3->flags), VAR_1);
 if (FUNC_6(VAR_0, &VAR_3->flags))
  FUNC_2(VAR_3, "Timeout waiting for DMA to end\n");

 FUNC_4(&VAR_3->dev_lock, VAR_4);
 VAR_3->state = VAR_2;
 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->dev_lock, VAR_4);
}
