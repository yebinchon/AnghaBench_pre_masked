
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spitzkbd {int htimer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct spitzkbd *VAR_5 = VAR_4;

 if (!FUNC_2(&VAR_5->htimer))
  FUNC_0(&VAR_5->htimer, VAR_2 + FUNC_1(VAR_0));

 return VAR_1;
}
