
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sinfo {void* t; int tfm; int (* fn ) (int ,void*,void*) ;} ;


 int FUNC_0 (void*,void*,void const*) ;
 int FUNC_1 (int ,void*,void*) ;

__attribute__((used)) static inline void FUNC_2(struct sinfo *VAR_0, void *VAR_1, const void *VAR_2)
{
 FUNC_0(VAR_1, VAR_0->t, VAR_2);
 VAR_0->fn(VAR_0->tfm, VAR_1, VAR_1);
 FUNC_0(VAR_1, VAR_1, VAR_0->t);
}
