
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(WORD VAR_0, BYTE VAR_1, BYTE VAR_2)
{
 VAR_1 = VAR_1 & 0xfb;
 VAR_1 = VAR_1 | (VAR_2 ? 4 : 0);
 FUNC_1(VAR_1, VAR_0);

 FUNC_0(1);
 VAR_1 = VAR_1 | 0x01;
 FUNC_1(VAR_1, VAR_0);

 VAR_2 = VAR_2 << 1;
 VAR_1 = VAR_1 & 0xfe;
 FUNC_0(1);
 FUNC_1(VAR_1, VAR_0);

}
