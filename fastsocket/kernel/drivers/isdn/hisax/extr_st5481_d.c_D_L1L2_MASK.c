
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_adapter {int hisax_d_if; } ;
struct hisax_if {int (* l1l2 ) (struct hisax_if*,int,void*) ;} ;


 int FUNC_0 (struct hisax_if*,int,void*) ;

__attribute__((used)) static inline void FUNC_1(struct st5481_adapter *VAR_0, int VAR_1, void *VAR_2)
{
 struct hisax_if *VAR_3 = (struct hisax_if *) &VAR_0->hisax_d_if;

 VAR_3->l1l2(VAR_3, VAR_1, VAR_2);
}
