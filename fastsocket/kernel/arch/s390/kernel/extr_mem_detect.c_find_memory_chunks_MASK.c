
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {unsigned long addr; unsigned long size; int type; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 () ;
 unsigned long long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mem_chunk VAR_4[])
{
 unsigned long long VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8 = 0, VAR_9;
 int VAR_10 = 0, VAR_11;

 VAR_7 = FUNC_2();
 VAR_6 = FUNC_1();
 VAR_5 = VAR_7 * VAR_6;
 if (!VAR_7)
  VAR_7 = 1ULL << 17;
 if (sizeof(long) == 4) {
  VAR_7 = FUNC_0(VAR_0, VAR_7);
  VAR_5 = VAR_5 ? FUNC_0(VAR_0, VAR_5) : VAR_0;
 }
 do {
  VAR_9 = 0;
  VAR_11 = FUNC_3(VAR_8);
  do {
   VAR_9 += VAR_7;
   if (VAR_5 && VAR_8 + VAR_9 >= VAR_5)
    break;
  } while (VAR_11 == FUNC_3(VAR_8 + VAR_9));
  if (VAR_11 == VAR_2 || VAR_11 == VAR_1) {
   VAR_4[VAR_10].addr = VAR_8;
   VAR_4[VAR_10].size = VAR_9;
   VAR_4[VAR_10].type = VAR_11;
   VAR_10++;
  }
  VAR_8 += VAR_9;
 } while (VAR_8 < VAR_5 && VAR_10 < VAR_3);
}
