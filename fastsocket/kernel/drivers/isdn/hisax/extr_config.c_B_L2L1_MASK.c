
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisax_if {int (* l2l1 ) (struct hisax_if*,int,void*) ;} ;
struct hisax_b_if {int dummy; } ;


 int FUNC_0 (struct hisax_if*,int,void*) ;

__attribute__((used)) static inline void FUNC_1(struct hisax_b_if *VAR_0, int VAR_1, void *VAR_2)
{
 struct hisax_if *VAR_3 = (struct hisax_if *) VAR_0;
 VAR_3->l2l1(VAR_3, VAR_1, VAR_2);
}
