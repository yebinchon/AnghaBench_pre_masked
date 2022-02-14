
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxsr_latency {int is_desktop; int is_ddr3; int fsb_freq; int mem_freq; } ;


 int FUNC_0 (struct cxsr_latency*) ;
 int FUNC_1 (char*) ;
 struct cxsr_latency* VAR_0 ;

__attribute__((used)) static const struct cxsr_latency *FUNC_2(int VAR_1,
        int VAR_2,
        int VAR_3,
        int VAR_4)
{
 const struct cxsr_latency *VAR_5;
 int VAR_6;

 if (VAR_3 == 0 || VAR_4 == 0)
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_5 = &VAR_0[VAR_6];
  if (VAR_1 == VAR_5->is_desktop &&
      VAR_2 == VAR_5->is_ddr3 &&
      VAR_3 == VAR_5->fsb_freq && VAR_4 == VAR_5->mem_freq)
   return VAR_5;
 }

 FUNC_1("Unknown FSB/MEM found, disable CxSR\n");

 return ((void*)0);
}
