
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ) ;

BUF *FUNC_4(FOLDER *VAR_1, bool VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_1();


 if (VAR_2 == 0)
 {
  FUNC_3(VAR_3, VAR_0, FUNC_2(VAR_0));
 }


 FUNC_0(VAR_3, VAR_1, 0);

 return VAR_3;
}
