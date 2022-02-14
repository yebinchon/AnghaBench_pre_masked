
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_subvector {int length; int key; } ;


 int FUNC_0 (struct gds_subvector*) ;

__attribute__((used)) static inline void FUNC_1(struct gds_subvector *VAR_0)
{
 void *VAR_1;

 VAR_1 = (void *) VAR_0 + VAR_0->length;
 for (VAR_0 = VAR_0 + 1; (void *) VAR_0 < VAR_1; VAR_0 = (void *) VAR_0 + VAR_0->length)
  if (VAR_0->key == 0x30)
   FUNC_0(VAR_0);
}
