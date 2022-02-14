
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {size_t read_pos; int truncated; int * read_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct si_sm_data*) ;

__attribute__((used)) static inline void FUNC_1(struct si_sm_data *VAR_1)
{
 if (VAR_1->read_pos >= VAR_0) {
  FUNC_0(VAR_1);
  VAR_1->truncated = 1;
 } else {
  VAR_1->read_data[VAR_1->read_pos] = FUNC_0(VAR_1);
  VAR_1->read_pos++;
 }
}
