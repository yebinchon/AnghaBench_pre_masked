
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_vector {int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct gds_vector*) ;
 struct gds_vector* FUNC_1 (struct gds_vector*,void*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct gds_vector *VAR_1)
{
 VAR_1 = FUNC_1(VAR_1 + 1, (void *) VAR_1 + VAR_1->length, VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1);
}
