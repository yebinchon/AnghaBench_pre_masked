
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct resource {int flags; unsigned long end; unsigned long start; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (struct resource*,struct resource*,unsigned long,unsigned long,unsigned long,unsigned long,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct resource *VAR_5, struct resource *VAR_6,
    u32 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_6->flags & VAR_2) {
  VAR_8 = 1024;
  VAR_9 = VAR_0;
  VAR_10 = VAR_3;
  VAR_11 = ~0U;
 } else {
  unsigned long VAR_12 = VAR_5->end - VAR_5->start;
  int VAR_13;
  VAR_9 = VAR_1;
  if (VAR_9 > VAR_12/8) {
   VAR_9=(VAR_12+1)/8;

   VAR_13 = 0;
   while ((VAR_9 /= 2) != 0)
    VAR_13++;
   VAR_9 = 1 << VAR_13;
  }
  if (VAR_9 < VAR_7)
   VAR_9 = VAR_7;
  VAR_8 = VAR_9;
  VAR_10 = VAR_4;
  VAR_11 = ~0U;
 }

 do {
  if (FUNC_0(VAR_5, VAR_6, VAR_9, VAR_10, VAR_11, VAR_8,
          ((void*)0), ((void*)0))==0) {
   return 1;
  }
  VAR_9 = VAR_9/2;
  VAR_8 = VAR_9;
 } while (VAR_9 >= VAR_7);

 return 0;
}
