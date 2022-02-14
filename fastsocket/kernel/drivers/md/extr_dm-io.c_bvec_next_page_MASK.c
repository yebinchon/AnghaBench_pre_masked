
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {struct bio_vec* context_ptr; } ;
struct bio_vec {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct dpages *VAR_0)
{
 struct bio_vec *VAR_1 = (struct bio_vec *) VAR_0->context_ptr;
 VAR_0->context_ptr = VAR_1 + 1;
}
