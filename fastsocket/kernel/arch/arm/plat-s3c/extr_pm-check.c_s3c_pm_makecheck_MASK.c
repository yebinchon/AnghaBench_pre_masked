
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {unsigned long start; unsigned long end; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static u32 *FUNC_2(struct resource *VAR_1, u32 *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 for (VAR_3 = VAR_1->start; VAR_3 < VAR_1->end;
      VAR_3 += VAR_0) {
  VAR_4 = VAR_1->end - VAR_3;

  if (VAR_4 > VAR_0)
   VAR_4 = VAR_0;

  *VAR_2 = FUNC_0(~0, FUNC_1(VAR_3), VAR_4);
  VAR_2++;
 }

 return VAR_2;
}
