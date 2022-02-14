
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int data; int (* cb ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 FUNC_3(&VAR_5);
 VAR_8 = FUNC_1(VAR_2);
 FUNC_2(VAR_8, VAR_2);
 FUNC_4(&VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!(VAR_8 & FUNC_0(VAR_9)))
   continue;

  FUNC_3(&VAR_4);
  if (!VAR_3[VAR_9].cb) {
   FUNC_4(&VAR_4);
   continue;
  }

  VAR_3[VAR_9].cb(VAR_3[VAR_9].data);
  FUNC_4(&VAR_4);
 }

 return VAR_1;
}
