
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static BYTE FUNC_3(WORD VAR_0, BYTE VAR_1)
{
 FUNC_1(1);
 VAR_1 = VAR_1 | 0x01;
 FUNC_2(VAR_1, VAR_0);

 VAR_1 = VAR_1 & 0xfe;
 FUNC_1(1);
 FUNC_2(VAR_1, VAR_0);

 return ((FUNC_0(VAR_0) >> 3) & 1);
}
