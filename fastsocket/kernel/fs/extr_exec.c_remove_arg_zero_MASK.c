
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct linux_binprm {unsigned long p; int argc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct linux_binprm*,int) ;
 struct page* FUNC_1 (struct linux_binprm*,unsigned long,int ) ;
 char* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct linux_binprm *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 char *VAR_8;
 struct page *VAR_9;

 if (!VAR_5->argc)
  return 0;

 do {
  VAR_7 = VAR_5->p & ~VAR_2;
  VAR_9 = FUNC_1(VAR_5, VAR_5->p, 0);
  if (!VAR_9) {
   VAR_6 = -VAR_0;
   goto out;
  }
  VAR_8 = FUNC_2(VAR_9, VAR_1);

  for (; VAR_7 < VAR_4 && VAR_8[VAR_7];
    VAR_7++, VAR_5->p++)
   ;

  FUNC_3(VAR_8, VAR_1);
  FUNC_4(VAR_9);

  if (VAR_7 == VAR_4)
   FUNC_0(VAR_5, (VAR_5->p >> VAR_3) - 1);
 } while (VAR_7 == VAR_4);

 VAR_5->p++;
 VAR_5->argc--;
 VAR_6 = 0;

out:
 return VAR_6;
}
