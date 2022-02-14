
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;


 int FUNC_0 (int*,int*,int) ;

void FUNC_1(UCHAR *VAR_0, UCHAR *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1, 3);
 FUNC_0(VAR_0 + 5, VAR_1, 3);

 VAR_0[3] = 0xff;
 VAR_0[4] = 0xfe;
 VAR_0[0] = ((~(VAR_0[0] & 0x02)) & 0x02) | (VAR_0[0] & 0xfd);
}
