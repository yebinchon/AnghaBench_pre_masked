
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_fh {unsigned int resources; struct em28xx* dev; } ;
struct em28xx {unsigned int resources; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct em28xx_fh *VAR_0, unsigned int VAR_1)
{
 struct em28xx *VAR_2 = VAR_0->dev;

 FUNC_0((VAR_0->resources & VAR_1) != VAR_1);

 VAR_0->resources &= ~VAR_1;
 VAR_2->resources &= ~VAR_1;
 FUNC_1("res: put %d\n", VAR_1);
}
