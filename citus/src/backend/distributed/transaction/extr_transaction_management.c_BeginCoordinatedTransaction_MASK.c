
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_3 != VAR_1 &&
  VAR_3 != VAR_0)
 {
  FUNC_1(VAR_4, (FUNC_2("starting transaction in wrong state")));
 }

 VAR_3 = VAR_2;

 FUNC_0();
}
