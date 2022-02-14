
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtdoops_context {int writecount; int writecount_lock; int * oops_buf; int nextcount; int ready; struct mtd_info* mtd; } ;
struct mtd_info {int dummy; } ;
struct console {struct mtdoops_context* data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char const*,unsigned int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct console *VAR_3, const char *VAR_4, unsigned int VAR_5)
{
 struct mtdoops_context *VAR_6 = VAR_3->data;
 struct mtd_info *VAR_7 = VAR_6->mtd;
 unsigned long VAR_8;

 if (!VAR_2) {
  FUNC_1();
  return;
 }

 if (!VAR_6->ready || !VAR_7)
  return;


 FUNC_2(&VAR_6->writecount_lock, VAR_8);


 if (!VAR_6->ready) {
  FUNC_3(&VAR_6->writecount_lock, VAR_8);
  return;
 }

 if (VAR_6->writecount == 0) {
  u32 *VAR_9 = VAR_6->oops_buf;
  *VAR_9++ = VAR_6->nextcount;
  *VAR_9 = VAR_0;
  VAR_6->writecount = 8;
 }

 if ((VAR_5 + VAR_6->writecount) > VAR_1)
  VAR_5 = VAR_1 - VAR_6->writecount;

 FUNC_0(VAR_6->oops_buf + VAR_6->writecount, VAR_4, VAR_5);
 VAR_6->writecount += VAR_5;

 FUNC_3(&VAR_6->writecount_lock, VAR_8);

 if (VAR_6->writecount == VAR_1)
  FUNC_1();
}
