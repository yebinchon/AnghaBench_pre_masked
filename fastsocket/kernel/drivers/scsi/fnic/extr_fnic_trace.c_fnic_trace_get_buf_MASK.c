
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fnic_trace_data_t ;
struct TYPE_2__ {unsigned long* page_offset; size_t wr_idx; size_t rd_idx; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

fnic_trace_data_t *FUNC_2(void)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_2, VAR_4);





 VAR_3 =
  VAR_1.page_offset[VAR_1.wr_idx];
 VAR_1.wr_idx++;





 if (VAR_1.wr_idx >= VAR_0)
  VAR_1.wr_idx = 0;





 if (VAR_1.wr_idx == VAR_1.rd_idx) {
  VAR_1.rd_idx++;
  if (VAR_1.rd_idx >= VAR_0)
   VAR_1.rd_idx = 0;
 }
 FUNC_1(&VAR_2, VAR_4);
 return (fnic_trace_data_t *)VAR_3;
}
