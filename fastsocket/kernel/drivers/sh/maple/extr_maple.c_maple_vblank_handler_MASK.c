
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct maple_device {int busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 struct maple_device** VAR_4 ;
 int FUNC_1 (int *,int *,int *,int ) ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct maple_device*,int ,int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_5 () ;
 scalar_t__ VAR_9 ;
 int FUNC_6 () ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_12)
{
 int VAR_13, VAR_14;
 struct maple_device *VAR_15;

 if (!FUNC_5())
  return;

 FUNC_2(0, VAR_1);

 if (!FUNC_3(&VAR_10))
  goto finish;





 FUNC_1(&VAR_8, ((void*)0), ((void*)0),
  VAR_11);

 if (FUNC_7(VAR_7, VAR_9)) {




  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (VAR_5[VAR_13] && VAR_6[VAR_13]) {
    VAR_15 = VAR_4[VAR_13];
    if (!VAR_15)
     break;
    FUNC_0(&VAR_15->busy, 1);
    VAR_14 = FUNC_4(VAR_15, 0,
     VAR_0, 0, ((void*)0));
    if (!VAR_14)
     break;
    }
   }

  VAR_9 = VAR_7 + VAR_2;
 }

finish:
 FUNC_6();
}
