
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pushpull {int ofs; int buflen; int reserve; int* buf; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pushpull *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1->ofs >= VAR_1->buflen - (VAR_3?0:VAR_1->reserve))
  return -VAR_0;

 if (VAR_2)
  VAR_1->buf[VAR_1->ofs >> 3] |= (1<<(7-(VAR_1->ofs & 7)));
 else
  VAR_1->buf[VAR_1->ofs >> 3] &= ~(1<<(7-(VAR_1->ofs & 7)));

 VAR_1->ofs++;

 return 0;
}
