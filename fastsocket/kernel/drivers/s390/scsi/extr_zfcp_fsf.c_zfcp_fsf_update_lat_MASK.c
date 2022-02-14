
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fsf_latency_record {int max; int min; int sum; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fsf_latency_record *VAR_0, u32 VAR_1)
{
 VAR_0->sum += VAR_1;
 VAR_0->min = FUNC_1(VAR_0->min, VAR_1);
 VAR_0->max = FUNC_0(VAR_0->max, VAR_1);
}
