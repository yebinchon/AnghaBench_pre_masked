
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {scalar_t__ a; scalar_t__ b; } ;


 int FUNC_0 (struct desc_struct*,int,struct desc_struct*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct desc_struct *VAR_0, int VAR_1, struct desc_struct *VAR_2)
{
 if (VAR_0[VAR_1].a != VAR_2->a || VAR_0[VAR_1].b != VAR_2->b)
  FUNC_0(VAR_0, VAR_1, VAR_2, 0);
}
