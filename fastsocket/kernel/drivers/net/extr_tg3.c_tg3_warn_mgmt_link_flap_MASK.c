
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1)
{
 if (FUNC_1(VAR_1, VAR_0))
  FUNC_0(VAR_1->dev,
       "Management side-band traffic will be interrupted during phy settings change\n");
}
