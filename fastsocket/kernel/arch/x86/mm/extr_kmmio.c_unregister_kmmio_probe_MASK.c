
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_probe {unsigned long len; unsigned long addr; int list; } ;
struct kmmio_fault_page {int dummy; } ;
struct kmmio_delayed_release {int rcu; struct kmmio_fault_page* release_list; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct kmmio_delayed_release* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned long,struct kmmio_fault_page**) ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct kmmio_probe *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8 = 0;
 const unsigned long VAR_9 = VAR_6->len + (VAR_6->addr & ~VAR_1);
 struct kmmio_fault_page *VAR_10 = ((void*)0);
 struct kmmio_delayed_release *VAR_11;

 FUNC_5(&VAR_4, VAR_7);
 while (VAR_8 < VAR_9) {
  FUNC_4(VAR_6->addr + VAR_8, &VAR_10);
  VAR_8 += VAR_2;
 }
 FUNC_2(&VAR_6->list);
 VAR_3--;
 FUNC_6(&VAR_4, VAR_7);

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0);
 if (!VAR_11) {
  FUNC_3("kmmio: leaking kmmio_fault_page objects.\n");
  return;
 }
 VAR_11->release_list = VAR_10;
 FUNC_0(&VAR_11->rcu, VAR_5);
}
