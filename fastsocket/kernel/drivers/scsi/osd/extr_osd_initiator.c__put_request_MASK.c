
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int bio; int q; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct request*) ;
 int FUNC_2 (struct request*,int ,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_1 , bool VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_1->bio);
  FUNC_1(VAR_1->q, VAR_1);
 } else {






  if (FUNC_5(VAR_1->bio))
   FUNC_2(VAR_1, -VAR_0, FUNC_4(VAR_1));
  else
   FUNC_3(VAR_1);
 }
}
