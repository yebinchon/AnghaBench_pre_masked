
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {scalar_t__ nbufs; int state; int dev_lock; } ;
typedef enum cafe_state { ____Placeholder_cafe_state } cafe_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cafe_camera*,int ) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*) ;
 int FUNC_3 (struct cafe_camera*) ;
 int FUNC_4 (struct cafe_camera*) ;
 scalar_t__ FUNC_5 (struct cafe_camera*) ;
 int FUNC_6 (struct cafe_camera*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct cafe_camera *VAR_1, enum cafe_state VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;





 if (VAR_1->nbufs == 0)
  if (FUNC_0(VAR_1, 0))
   return -VAR_0;

 if (FUNC_5(VAR_1)) {
  FUNC_1(VAR_1);
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
   return VAR_3;
 }




 FUNC_7(&VAR_1->dev_lock, VAR_4);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
 VAR_1->state = VAR_2;
 FUNC_4(VAR_1);
 FUNC_8(&VAR_1->dev_lock, VAR_4);
 return 0;
}
