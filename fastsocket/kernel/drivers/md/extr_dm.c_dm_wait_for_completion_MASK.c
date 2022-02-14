
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int wait; int queue; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct mapped_device *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 FUNC_0(VAR_4, VAR_3);

 FUNC_2(VAR_5->queue);

 FUNC_1(&VAR_5->wait, &VAR_4);

 while (1) {
  FUNC_6(VAR_6);

  if (!FUNC_4(VAR_5))
   break;

  if (VAR_6 == VAR_1 &&
      FUNC_7(VAR_3)) {
   VAR_7 = -VAR_0;
   break;
  }

  FUNC_3();
 }
 FUNC_6(VAR_2);

 FUNC_5(&VAR_5->wait, &VAR_4);

 return VAR_7;
}
