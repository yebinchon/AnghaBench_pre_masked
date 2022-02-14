
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int reg_spacing; scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__,void*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct hermes *VAR_0, int VAR_1,
         void *VAR_2, unsigned VAR_3)
{
 VAR_1 = VAR_1 << VAR_0->reg_spacing;
 FUNC_0(VAR_0->iobase + VAR_1, VAR_2, VAR_3);
}
