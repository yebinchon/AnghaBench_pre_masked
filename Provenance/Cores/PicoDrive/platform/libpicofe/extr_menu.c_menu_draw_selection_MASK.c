
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,void*,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 unsigned short *VAR_11, *VAR_12;

 FUNC_0(VAR_6, VAR_7, (void *)1, (VAR_4 < 0) ? VAR_5 : VAR_4);

 if (VAR_4 < 0) return;

 if (VAR_7 > 0) VAR_7--;
 VAR_12 = (unsigned short *)VAR_0 + VAR_6 + VAR_7 * VAR_1 + VAR_3 * 2 - 2;
 for (VAR_10 = VAR_2 + 1; VAR_10 > 0; VAR_10--)
 {
  VAR_11 = VAR_12;
  for (VAR_9 = VAR_8 - (VAR_3 * 2 - 2); VAR_9 > 0; VAR_9--)
   *VAR_11++ = VAR_4;
  VAR_12 += VAR_1;
 }
}
