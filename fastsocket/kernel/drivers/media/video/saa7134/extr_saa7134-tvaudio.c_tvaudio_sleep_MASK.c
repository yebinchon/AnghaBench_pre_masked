
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scan1; scalar_t__ scan2; } ;
struct saa7134_dev {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct saa7134_dev *VAR_1, int VAR_2)
{
 if (VAR_1->thread.scan1 == VAR_1->thread.scan2 &&
     !FUNC_0()) {
  if (VAR_2 < 0) {
   FUNC_4(VAR_0);
   FUNC_2();
  } else {
   FUNC_3
      (FUNC_1(VAR_2));
  }
 }
 return VAR_1->thread.scan1 != VAR_1->thread.scan2;
}
