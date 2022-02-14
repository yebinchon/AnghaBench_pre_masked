
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static UBYTE *FUNC_1(UBYTE *VAR_1, int VAR_2, UBYTE VAR_3, UBYTE VAR_4)
{
 do {
  FUNC_0(VAR_1, VAR_2 % 10, VAR_3, VAR_4);
  VAR_1 -= VAR_0;
  VAR_2 /= 10;
 } while (VAR_2 > 0);
 return VAR_1;
}
