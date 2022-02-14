
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3, int VAR_4, char VAR_5, char VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 char VAR_10, *VAR_11;

 VAR_7 = VAR_9 = VAR_1;
 VAR_8 = VAR_1 + VAR_4;

 VAR_11 = (void *)VAR_2->mem_start;
 VAR_11 += VAR_3 & VAR_0;

 VAR_10 = ~VAR_5;
 while (FUNC_1(VAR_1, VAR_8) && (VAR_10 != VAR_5) && (!VAR_6 || (VAR_10 != VAR_6)))
 {
  if (VAR_1 != VAR_9)
  {
   FUNC_0(VAR_2, VAR_3);
   VAR_9 = VAR_1;
   VAR_10 = *VAR_11;
  }
 }
 return(FUNC_1(VAR_1, VAR_8) ? VAR_1 - VAR_7 : -1);
}
