
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_ress {int gpio; int dir; int init; int desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct gpio_ress *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;
 int VAR_4;
 int VAR_5;

 for (VAR_2 = 0; (!VAR_3) && (VAR_2 < VAR_1); VAR_2++) {
  VAR_4 = VAR_0[VAR_2].gpio;
  VAR_5 = VAR_0[VAR_2].dir;
  VAR_3 = FUNC_3(VAR_4, VAR_0[VAR_2].desc);
  if (VAR_3) {
   FUNC_4("Error requesting GPIO %d(%s) : %d\n",
          VAR_4, VAR_0[VAR_2].desc, VAR_3);
   continue;
  }
  if (VAR_5)
   FUNC_1(VAR_4, VAR_0[VAR_2].init);
  else
   FUNC_0(VAR_4);
 }
 while ((VAR_3) && (--VAR_2 >= 0))
  FUNC_2(VAR_0[VAR_2].gpio);
 return VAR_3;
}
