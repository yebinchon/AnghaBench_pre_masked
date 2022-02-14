
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_serial8250_port {int regshift; int mapbase; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct plat_serial8250_port *VAR_0,
        int VAR_1)
{
 VAR_1 <<= VAR_0->regshift;
 return (unsigned int)FUNC_1(FUNC_0(VAR_0->mapbase) + VAR_1);
}
