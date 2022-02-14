
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int mi_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_4)
{
 VAR_4->mi_mode &= ~VAR_2;
 FUNC_3(VAR_1, VAR_4->mi_mode);
 FUNC_4(80);

 if (FUNC_1(VAR_4, VAR_3) &&
     FUNC_0(VAR_4) == VAR_0)
  FUNC_2(VAR_4);
}
