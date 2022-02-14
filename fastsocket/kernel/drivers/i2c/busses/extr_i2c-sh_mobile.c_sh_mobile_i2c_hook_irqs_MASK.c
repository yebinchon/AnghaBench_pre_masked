
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct platform_device*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ,int ,int ,struct platform_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5, int VAR_6)
{
 struct resource *VAR_7;
 int VAR_8 = -VAR_1;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 while ((VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_11))) {
  for (VAR_12 = VAR_7->start; VAR_6 && VAR_12 <= VAR_7->end; VAR_12++) {
   if (FUNC_3(VAR_12, VAR_4, VAR_3,
     FUNC_0(&VAR_5->dev), VAR_5))
    goto rollback;
  }
  VAR_11++;
 }

 if (VAR_6)
  return VAR_11 > 0 ? 0 : -VAR_0;

 VAR_11--;
 VAR_8 = 0;

 rollback:
 for (VAR_9 = VAR_11; VAR_11 >= 0; VAR_11--) {
  for (VAR_10 = VAR_12; VAR_10 >= VAR_7->start; VAR_10--)
   FUNC_1(VAR_10, VAR_5);

  VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_11 - 1);
  VAR_10 = VAR_7->end;
 }

 return VAR_8;
}
