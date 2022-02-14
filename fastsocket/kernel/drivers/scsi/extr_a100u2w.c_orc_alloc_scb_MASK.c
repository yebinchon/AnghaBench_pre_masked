
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_scb {int dummy; } ;
struct orc_host {int allocation_lock; } ;


 struct orc_scb* FUNC_0 (struct orc_host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct orc_scb *FUNC_3(struct orc_host * VAR_0)
{
 struct orc_scb *VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->allocation_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->allocation_lock, VAR_2);
 return VAR_1;
}
