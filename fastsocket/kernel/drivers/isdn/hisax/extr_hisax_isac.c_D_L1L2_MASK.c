
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int hisax_d_if; } ;
struct hisax_if {int (* l1l2 ) (struct hisax_if*,int,void*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hisax_if*,int,void*) ;

__attribute__((used)) static inline void FUNC_2(struct isac *VAR_1, int VAR_2, void *VAR_3)
{
 struct hisax_if *VAR_4 = (struct hisax_if *) &VAR_1->hisax_d_if;

 FUNC_0(VAR_0, "pr %#x", VAR_2);
 VAR_4->l1l2(VAR_4, VAR_2, VAR_3);
}
