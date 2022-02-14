
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ate_resource {int lowest_free_index; int * ate; } ;


 int FUNC_0 (struct ate_resource*,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ate_resource *VAR_0,
         int VAR_1)
{
 FUNC_0(VAR_0, VAR_1, VAR_0->ate[VAR_1], 0);
 if ((VAR_0->lowest_free_index > VAR_1) ||
     (VAR_0->lowest_free_index < 0))
  VAR_0->lowest_free_index = VAR_1;
}
