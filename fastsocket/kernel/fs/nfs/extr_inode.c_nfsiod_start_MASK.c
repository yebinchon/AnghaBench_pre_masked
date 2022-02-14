
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;


 int VAR_0 ;
 struct workqueue_struct* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct workqueue_struct* VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct workqueue_struct *VAR_2;
 FUNC_1("RPC:       creating workqueue nfsiod\n");
 VAR_2 = FUNC_0("nfsiod");
 if (VAR_2 == ((void*)0))
  return -VAR_0;
 VAR_1 = VAR_2;
 return 0;
}
