
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct catc {int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct catc*,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4)
{
 struct catc *VAR_5 = (void *) VAR_4;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_0(VAR_5, VAR_0 + 7 - VAR_6, VAR_2);

 FUNC_1(&VAR_5->timer, VAR_3 + VAR_1);
}
