
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static char FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 char VAR_5, *VAR_6;

 VAR_6 = (void *) (VAR_2->mem_start + (VAR_3 & VAR_0));

 FUNC_1(&VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_3);
 VAR_5 = *VAR_6;
 FUNC_2(&VAR_1, VAR_4);

 return(VAR_5);
}
