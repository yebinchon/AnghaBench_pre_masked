
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_mini {int dummy; } ;
struct xencomm_desc {int nr_addrs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xencomm_desc*,void*,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
 unsigned long VAR_2, struct xencomm_mini *VAR_3,
 struct xencomm_desc **VAR_4)
{
 int VAR_5 = 0;
 struct xencomm_desc *VAR_6;
 FUNC_0(((unsigned long)VAR_3) % sizeof(*VAR_3) != 0);

 VAR_6 = (void *)VAR_3;

 VAR_6->nr_addrs = VAR_0;

 VAR_5 = FUNC_1(VAR_6, VAR_1, VAR_2);
 if (!VAR_5)
  *VAR_4 = VAR_6;

 return VAR_5;
}
