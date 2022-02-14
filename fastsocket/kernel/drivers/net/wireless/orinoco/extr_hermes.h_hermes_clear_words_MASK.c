
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int reg_spacing; scalar_t__ iobase; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct hermes *VAR_0, int VAR_1,
          unsigned VAR_2)
{
 unsigned VAR_3;

 VAR_1 = VAR_1 << VAR_0->reg_spacing;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(0, VAR_0->iobase + VAR_1);
}
