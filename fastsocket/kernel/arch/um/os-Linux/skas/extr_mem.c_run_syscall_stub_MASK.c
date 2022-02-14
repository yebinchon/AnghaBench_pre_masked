
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_id {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long* FUNC_0 (struct mm_id*,void*) ;
 long FUNC_1 (struct mm_id*,void**) ;
 int VAR_2 ;
 int VAR_3 ;

long FUNC_2(struct mm_id * VAR_4, int VAR_5,
        unsigned long *VAR_6, long VAR_7, void **VAR_8,
        int VAR_9)
{
 unsigned long *VAR_10 = FUNC_0(VAR_4, *VAR_8);

 if (VAR_9 && *VAR_8 == ((void*)0))
  VAR_3++;

 *VAR_10 += sizeof(long);
 VAR_10 += *VAR_10 / sizeof(long);

 *VAR_10++ = VAR_5;
 *VAR_10++ = VAR_6[0];
 *VAR_10++ = VAR_6[1];
 *VAR_10++ = VAR_6[2];
 *VAR_10++ = VAR_6[3];
 *VAR_10++ = VAR_6[4];
 *VAR_10++ = VAR_6[5];
 *VAR_10++ = VAR_7;
 *VAR_10 = 0;
 VAR_2++;

 if (!VAR_9 && ((((unsigned long) VAR_10) & ~VAR_0) <
       VAR_1 - 10 * sizeof(long))) {
  *VAR_8 = VAR_10;
  return 0;
 }

 return FUNC_1(VAR_4, VAR_8);
}
