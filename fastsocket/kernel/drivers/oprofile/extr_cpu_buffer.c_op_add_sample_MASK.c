
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oprofile_cpu_buffer {int dummy; } ;
struct op_sample {unsigned long eip; unsigned long event; } ;
struct op_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct op_entry*) ;
 struct op_sample* FUNC_1 (struct op_entry*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct oprofile_cpu_buffer *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 struct op_entry VAR_4;
 struct op_sample *VAR_5;

 VAR_5 = FUNC_1(&VAR_4, 0);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->eip = VAR_2;
 VAR_5->event = VAR_3;

 return FUNC_0(&VAR_4);
}
