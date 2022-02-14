
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_low_level {int first; int nr; } ;
struct device {struct pcmcia_low_level* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct device *VAR_3)
{
 struct pcmcia_low_level *VAR_4 = VAR_3->platform_data;





 VAR_0 |= VAR_1;


 if ((VAR_4->first + VAR_4->nr) > 1 || FUNC_0())
  VAR_0 |= VAR_2;
 else
  VAR_0 &= ~VAR_2;
}
