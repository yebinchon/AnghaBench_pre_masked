
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct doc_priv {int virtadr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct doc_priv*) ;
 scalar_t__ FUNC_1 (struct doc_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct doc_priv *VAR_3, unsigned short VAR_4)
{
 volatile char VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (FUNC_0(VAR_3))
   VAR_5 = FUNC_2(VAR_3->virtadr, VAR_2);
  else if (FUNC_1(VAR_3))
   VAR_5 = FUNC_2(VAR_3->virtadr, VAR_1);
  else
   VAR_5 = FUNC_2(VAR_3->virtadr, VAR_0);
 }

}
