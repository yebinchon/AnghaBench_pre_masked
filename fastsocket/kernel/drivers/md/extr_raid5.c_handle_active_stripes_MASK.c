
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int dummy; } ;
struct r5conf {int device_lock; } ;


 int VAR_0 ;
 struct stripe_head* FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5conf*,struct stripe_head*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct stripe_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct r5conf *VAR_1)
{
 struct stripe_head *VAR_2[VAR_0], *VAR_3;
 int VAR_4, VAR_5 = 0;

 while (VAR_5 < VAR_0 &&
   (VAR_3 = FUNC_0(VAR_1)) != ((void*)0))
  VAR_2[VAR_5++] = VAR_3;

 if (VAR_5 == 0)
  return VAR_5;
 FUNC_5(&VAR_1->device_lock);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_3(VAR_2[VAR_4]);

 FUNC_2();

 FUNC_4(&VAR_1->device_lock);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(VAR_1, VAR_2[VAR_4]);
 return VAR_5;
}
