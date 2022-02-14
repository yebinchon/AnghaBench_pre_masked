
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ads7846 {scalar_t__ read_cnt; int last_read; scalar_t__ debounce_tol; scalar_t__ read_rep; scalar_t__ debounce_max; scalar_t__ debounce_rep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, int VAR_4, int *VAR_5)
{
 struct ads7846 *VAR_6 = VAR_3;

 if (!VAR_6->read_cnt || (FUNC_0(VAR_6->last_read - *VAR_5) > VAR_6->debounce_tol)) {

  VAR_6->read_rep = 0;


  if (VAR_6->read_cnt < VAR_6->debounce_max) {
   VAR_6->last_read = *VAR_5;
   VAR_6->read_cnt++;
   return VAR_2;
  } else {





   VAR_6->read_cnt = 0;
   return VAR_0;
  }
 } else {
  if (++VAR_6->read_rep > VAR_6->debounce_rep) {


   VAR_6->read_cnt = 0;
   VAR_6->read_rep = 0;
   return VAR_1;
  } else {

   VAR_6->read_cnt++;
   return VAR_2;
  }
 }
}
