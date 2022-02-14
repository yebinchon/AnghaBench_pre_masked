
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nouveau_ramht {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 struct nouveau_bar* FUNC_0 (struct nouveau_ramht*) ;
 scalar_t__ FUNC_1 (struct nouveau_ramht*,int,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct nouveau_ramht*) ;
 int FUNC_3 (struct nouveau_ramht*,scalar_t__) ;
 int FUNC_4 (struct nouveau_ramht*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct nouveau_bar*) ;

int
FUNC_6(struct nouveau_ramht *VAR_1, int VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 struct nouveau_bar *VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 do {
  if (!FUNC_3(VAR_1, VAR_6 + 4)) {
   FUNC_4(VAR_1, VAR_6 + 0, VAR_3);
   FUNC_4(VAR_1, VAR_6 + 4, VAR_4);
   if (VAR_5)
    VAR_5->flush(VAR_5);
   return VAR_6;
  }

  VAR_6 += 8;
  if (VAR_6 >= FUNC_2(VAR_1)->size)
   VAR_6 = 0;
 } while (VAR_6 != VAR_7);

 return -VAR_0;
}
