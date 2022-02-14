
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {unsigned int freq; } ;
struct cpudata {size_t sample_ptr; struct sample* samples; } ;


 struct cpudata** VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 struct sample *VAR_2;
 struct cpudata *VAR_3;

 VAR_3 = VAR_0[VAR_1];
 if (!VAR_3)
  return 0;
 VAR_2 = &VAR_3->samples[VAR_3->sample_ptr];
 return VAR_2->freq;
}
