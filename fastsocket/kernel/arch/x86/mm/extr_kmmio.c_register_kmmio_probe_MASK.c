
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_probe {unsigned long len; unsigned long addr; int list; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct kmmio_probe *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9 = 0;
 const unsigned long VAR_10 = VAR_6->len + (VAR_6->addr & ~VAR_1);

 FUNC_4(&VAR_4, VAR_7);
 if (FUNC_1(VAR_6->addr)) {
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_3++;
 FUNC_2(&VAR_6->list, &VAR_5);
 while (VAR_9 < VAR_10) {
  if (FUNC_0(VAR_6->addr + VAR_9))
   FUNC_3("kmmio: Unable to set page fault.\n");
  VAR_9 += VAR_2;
 }
out:
 FUNC_5(&VAR_4, VAR_7);





 return VAR_8;
}
