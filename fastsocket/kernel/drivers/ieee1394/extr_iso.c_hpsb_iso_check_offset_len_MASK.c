
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {unsigned int buf_size; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hpsb_iso *VAR_1,
         unsigned int VAR_2, unsigned short VAR_3,
         unsigned int *VAR_4,
         unsigned short *VAR_5)
{
 if (VAR_2 >= VAR_1->buf_size)
  return -VAR_0;


 if (VAR_2 + VAR_3 > VAR_1->buf_size)
  return -VAR_0;


 if (VAR_2 + VAR_3 < VAR_2)
  return -VAR_0;


 *VAR_4 = VAR_2;
 *VAR_5 = VAR_3;

 return 0;
}
