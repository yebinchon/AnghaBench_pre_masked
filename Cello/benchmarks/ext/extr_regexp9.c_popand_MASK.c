
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Reinst ;
typedef int Node ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static Node*
FUNC_3(int VAR_3)
{
 Reinst *VAR_4;

 if(VAR_1 <= &VAR_2[0]){
  FUNC_2("missing operand for ", VAR_3);
  VAR_4 = FUNC_0(VAR_0);
  FUNC_1(VAR_4,VAR_4);
 }
 return --VAR_1;
}
