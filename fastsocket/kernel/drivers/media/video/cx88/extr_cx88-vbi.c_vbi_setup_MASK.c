
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5)
{
 *VAR_5 = VAR_0 * VAR_1 * 2;
 if (0 == *VAR_4)
  *VAR_4 = VAR_2;
 if (*VAR_4 < 2)
  *VAR_4 = 2;
 if (*VAR_4 > 32)
  *VAR_4 = 32;
 return 0;
}
