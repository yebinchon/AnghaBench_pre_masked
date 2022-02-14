
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;


 int FUNC_0 (struct net_device*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = 65536;
 VAR_6 = 0;
 VAR_7 = VAR_0;
 VAR_4 = (void *) VAR_2->mem_start;

 FUNC_2(&VAR_1, VAR_3);
 while(VAR_5)
 {
  FUNC_0(VAR_2, VAR_6);
  FUNC_1(VAR_4, 0, VAR_7);

  VAR_6 += VAR_7;
  VAR_5 -= VAR_7;
 }
 FUNC_3(&VAR_1, VAR_3);

}
