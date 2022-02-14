
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_irda {unsigned int power; } ;


 int FUNC_0 (struct sa1100_irda*,unsigned int) ;

__attribute__((used)) static inline int
FUNC_1(struct sa1100_irda *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == 0)
  VAR_0->power = VAR_1;

 return VAR_2;
}
