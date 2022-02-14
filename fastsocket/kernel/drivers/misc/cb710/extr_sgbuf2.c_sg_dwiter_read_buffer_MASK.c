
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sg_mapping_iter {scalar_t__ consumed; scalar_t__ addr; scalar_t__ length; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;
 size_t FUNC_2 (scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (struct sg_mapping_iter*) ;

__attribute__((used)) static uint32_t FUNC_4(struct sg_mapping_iter *VAR_0)
{
 size_t VAR_1, VAR_2 = 4;
 uint32_t VAR_3;
 void *VAR_4 = &VAR_3;

 do {
  VAR_1 = FUNC_2(VAR_0->length - VAR_0->consumed, VAR_2);
  FUNC_0(VAR_4, VAR_0->addr + VAR_0->consumed, VAR_1);
  VAR_0->consumed += VAR_1;
  VAR_2 -= VAR_1;
  if (!VAR_2)
   return VAR_3;
  VAR_4 += VAR_1;
 } while (FUNC_3(VAR_0));

 FUNC_1(VAR_4, 0, VAR_2);
 return VAR_3;
}
