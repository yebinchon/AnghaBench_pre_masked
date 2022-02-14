
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {scalar_t__ alias; } ;


 int FUNC_0 (struct slabinfo*) ;
 int FUNC_1 (struct slabinfo*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct slabinfo*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct slabinfo*) ;
 int FUNC_4 (struct slabinfo*,int ) ;
 int FUNC_5 (struct slabinfo*) ;
 int FUNC_6 (struct slabinfo*) ;
 int FUNC_7 (struct slabinfo*) ;
 struct slabinfo* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct slabinfo *VAR_10;

 for (VAR_10 = VAR_7; VAR_10 < VAR_7 + VAR_8; VAR_10++) {

  if (VAR_10->alias)
   continue;


  if (VAR_1)
   FUNC_4(VAR_10, 0);
  else if (VAR_5)
   FUNC_2(VAR_10);
  else if (VAR_9)
   FUNC_6(VAR_10);
  else if (VAR_6)
   FUNC_5(VAR_10);
  else if (VAR_0)
   FUNC_3(VAR_10);
  else if (VAR_2)
   FUNC_0(VAR_10);
  else if (VAR_4)
   FUNC_7(VAR_10);
  else if (VAR_3)
   FUNC_1(VAR_10);
 }
}
