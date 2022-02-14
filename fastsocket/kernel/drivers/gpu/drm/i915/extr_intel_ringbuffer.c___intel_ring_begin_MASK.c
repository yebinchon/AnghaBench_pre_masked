
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {scalar_t__ tail; scalar_t__ effective_size; int space; } ;


 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct intel_ring_buffer *VAR_0,
         int VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_0->tail + VAR_1 > VAR_0->effective_size)) {
  VAR_2 = FUNC_0(VAR_0);
  if (FUNC_2(VAR_2))
   return VAR_2;
 }

 if (FUNC_2(VAR_0->space < VAR_1)) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_2(VAR_2))
   return VAR_2;
 }

 VAR_0->space -= VAR_1;
 return 0;
}
