
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,char) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6)
{
 char VAR_7;

 FUNC_0(VAR_4, VAR_1, &VAR_7);
 if (VAR_6 == VAR_3) {
  FUNC_1(VAR_4,
     VAR_1, (VAR_7 | VAR_2));
  if (VAR_5) {
   FUNC_0(VAR_4,
     VAR_0, &VAR_7);
   FUNC_1(VAR_4,
     VAR_0, VAR_7 & ~0x20);
  }

 } else {
  FUNC_1(VAR_4,
     VAR_1, (VAR_7 & ~VAR_2));
  if (VAR_5) {
   FUNC_0(VAR_4,
     VAR_0, &VAR_7);
   FUNC_1(VAR_4,
     VAR_0, VAR_7 | 0x20);
  }
 }
}
