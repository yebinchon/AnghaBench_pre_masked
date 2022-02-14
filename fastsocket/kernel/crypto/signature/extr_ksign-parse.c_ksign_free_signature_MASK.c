
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksign_signature {struct ksign_signature* unhashed_data; struct ksign_signature* hashed_data; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksign_signature*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ksign_signature *VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_1(VAR_1->data[VAR_2]);
  FUNC_0(VAR_1->hashed_data);
  FUNC_0(VAR_1->unhashed_data);
  FUNC_0(VAR_1);
 }
}
