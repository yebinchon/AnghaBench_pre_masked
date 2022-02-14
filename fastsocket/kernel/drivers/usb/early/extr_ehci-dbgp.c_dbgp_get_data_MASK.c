
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data47; int data03; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(&VAR_0->data03);
 VAR_5 = FUNC_0(&VAR_0->data47);
 for (VAR_6 = 0; VAR_6 < 4 && VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6] = (VAR_4 >> (8*VAR_6)) & 0xff;
 for (; VAR_6 < 8 && VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6] = (VAR_5 >> (8*(VAR_6 - 4))) & 0xff;
}
