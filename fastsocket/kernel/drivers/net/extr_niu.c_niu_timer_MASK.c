
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct niu {TYPE_1__ timer; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct niu*,int*) ;
 int FUNC_3 (struct niu*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct niu *VAR_3 = (struct niu *) VAR_2;
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3, &VAR_6);
 if (!VAR_5)
  FUNC_3(VAR_3, VAR_6);

 if (FUNC_1(VAR_3->dev))
  VAR_4 = 5 * VAR_0;
 else
  VAR_4 = 1 * VAR_0;
 VAR_3->timer.expires = VAR_1 + VAR_4;

 FUNC_0(&VAR_3->timer);
}
