
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {struct bio_vec* context_ptr; int next_page; int get_page; } ;
struct bio_vec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_2, struct bio_vec *VAR_3)
{
 VAR_2->get_page = VAR_0;
 VAR_2->next_page = VAR_1;
 VAR_2->context_ptr = VAR_3;
}
