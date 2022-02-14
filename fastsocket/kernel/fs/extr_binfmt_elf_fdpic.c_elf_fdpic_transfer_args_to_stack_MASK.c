
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {unsigned long p; int * page; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (void*,char*,unsigned long) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct linux_binprm *VAR_4,
         unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10 = 0;

 VAR_7 = VAR_4->p >> VAR_2;
 VAR_8 = *VAR_5;

 for (VAR_6 = VAR_1 - 1; VAR_6 >= VAR_7; VAR_6--) {
  VAR_9 = FUNC_1(VAR_4->page[VAR_6]);
  VAR_8 -= VAR_3;
  if (FUNC_0((void *) VAR_8, VAR_9, VAR_3) != 0)
   VAR_10 = -VAR_0;
  FUNC_2(VAR_4->page[VAR_6]);
  if (VAR_10 < 0)
   goto out;
 }

 *VAR_5 = (*VAR_5 - (VAR_1 * VAR_3 - VAR_4->p)) & ~15;

out:
 return VAR_10;
}
