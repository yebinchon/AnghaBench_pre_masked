
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdb {int size; int start; int wptr; int rptr; scalar_t__ end; } ;
struct tx_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct txdb *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1 * (1 << (VAR_3 + 1));

 VAR_2->start = FUNC_0(VAR_4);
 if (!VAR_2->start)
  return -VAR_0;






 VAR_2->size = VAR_4 / sizeof(struct tx_map) - 1;
 VAR_2->end = VAR_2->start + VAR_2->size + 1;


 VAR_2->rptr = VAR_2->start;
 VAR_2->wptr = VAR_2->start;

 return 0;
}
