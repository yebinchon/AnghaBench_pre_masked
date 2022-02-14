
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int dummy; } ;


 scalar_t__ FUNC_0 (struct saa7146*,int,int ,int ) ;
 int FUNC_1 (struct saa7146*,int) ;

__attribute__((used)) static void FUNC_2(struct saa7146 *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 0xff; VAR_1 += 2)
  if ((FUNC_0(VAR_0, VAR_1, 0, 0)) >= 0)
   FUNC_1(VAR_0, VAR_1);
}
