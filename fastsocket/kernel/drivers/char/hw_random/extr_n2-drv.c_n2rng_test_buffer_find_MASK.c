
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct n2rng {scalar_t__* test_buffer; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct n2rng *VAR_1, u64 VAR_2)
{
 int VAR_3, VAR_4 = 0;


 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->test_buffer[VAR_3] == VAR_2)
   VAR_4++;
 }
 return VAR_4;
}
