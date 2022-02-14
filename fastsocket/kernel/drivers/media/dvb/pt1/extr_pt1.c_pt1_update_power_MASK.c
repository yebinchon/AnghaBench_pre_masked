
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1_adapter {int voltage; } ;
struct pt1 {int power; int lock; struct pt1_adapter** adaps; int reset; } ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pt1*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct pt1 *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct pt1_adapter *VAR_4;
 static const int VAR_5[] = {
  1 << 4,
  1 << 6 | 1 << 7,
  1 << 5,
  1 << 6 | 1 << 8,
 };

 VAR_2 = VAR_1->power | !VAR_1->reset << 3;
 FUNC_0(&VAR_1->lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1->adaps[VAR_3];
  switch (VAR_4->voltage) {
  case 129:
   VAR_2 |= 1 << 1;
   break;
  case 128:
   VAR_2 |= 1 << 1 | 1 << 2;
   break;
  default:
   break;
  }


  VAR_2 |= VAR_5[VAR_3];
 }
 FUNC_2(VAR_1, 1, VAR_2);
 FUNC_1(&VAR_1->lock);
}
