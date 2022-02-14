
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int ttl ;
typedef int magic ;
typedef int len ;
typedef int ip_addr ;
typedef int clas ;
typedef int USHORT ;
typedef int UINT ;
typedef int IP ;
typedef int BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int*,int) ;

void FUNC_4(BUF *VAR_1, IP *VAR_2)
{
 UINT VAR_3;
 USHORT VAR_4;
 USHORT VAR_5, VAR_6;
 UINT VAR_7;
 USHORT VAR_8;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(0xc00c);
 VAR_5 = FUNC_0(0x0001);
 VAR_6 = FUNC_0(0x0001);
 VAR_7 = FUNC_1(VAR_0);
 VAR_8 = FUNC_0((USHORT)sizeof(VAR_7));

 FUNC_3(VAR_1, &VAR_4, sizeof(VAR_4));
 FUNC_3(VAR_1, &VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_1, &VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_1, &VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_1, &VAR_8, sizeof(VAR_8));
 FUNC_3(VAR_1, &VAR_3, sizeof(VAR_3));
}
