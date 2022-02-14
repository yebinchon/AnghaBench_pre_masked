
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_vector {int length; } ;
struct gds_subvector {int length; scalar_t__ key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gds_subvector*) ;

__attribute__((used)) static inline void FUNC_1(struct gds_vector *VAR_1)
{
 struct gds_subvector *VAR_2;
 void *VAR_3;

 VAR_3 = (void *) VAR_1 + VAR_1->length;
 for (VAR_2 = (struct gds_subvector *) (VAR_1 + 1);
      (void *) VAR_2 < VAR_3; VAR_2 = (void *) VAR_2 + VAR_2->length)
  if (VAR_2->key == VAR_0)
   FUNC_0(VAR_2);

}
