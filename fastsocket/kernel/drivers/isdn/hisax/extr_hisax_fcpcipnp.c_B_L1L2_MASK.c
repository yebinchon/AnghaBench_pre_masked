
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisax_if {int (* l1l2 ) (struct hisax_if*,int,void*) ;} ;
struct fritz_bcs {int b_if; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct hisax_if*,int,void*) ;

__attribute__((used)) static inline void FUNC_2(struct fritz_bcs *VAR_0, int VAR_1, void *VAR_2)
{
 struct hisax_if *VAR_3 = (struct hisax_if *) &VAR_0->b_if;

 FUNC_0(2, "pr %#x", VAR_1);
 VAR_3->l1l2(VAR_3, VAR_1, VAR_2);
}
