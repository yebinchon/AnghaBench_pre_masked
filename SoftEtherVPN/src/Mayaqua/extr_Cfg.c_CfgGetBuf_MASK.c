
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int Buf; } ;
typedef TYPE_1__ ITEM ;
typedef int FOLDER ;
typedef int BUF ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

BUF *FUNC_4(FOLDER *VAR_0, char *VAR_1)
{
 ITEM *VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1();
 FUNC_3(VAR_3, VAR_2->Buf, VAR_2->size);
 FUNC_2(VAR_3, 0, 0);

 return VAR_3;
}
