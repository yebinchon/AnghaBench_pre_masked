
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct cx88_core*,int) ;

__attribute__((used)) static int FUNC_3(struct cx88_core *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 int VAR_10;
 u32 VAR_11;


 FUNC_1(VAR_2, (unsigned int)(VAR_8 >> 16) & ~0xC0);
 FUNC_1(VAR_1, (unsigned int)(VAR_8 >> 8));
 FUNC_1(VAR_0, (unsigned int)VAR_8);
 FUNC_0(VAR_0);

 VAR_10 = FUNC_2(VAR_7,1);

 FUNC_1(VAR_6, 0);
 VAR_11 = (unsigned char)FUNC_0(VAR_6) << 24;
 FUNC_1(VAR_5, 0);
 VAR_11 |= (unsigned char)FUNC_0(VAR_5) << 16;
 FUNC_1(VAR_4, 0);
 VAR_11 |= (unsigned char)FUNC_0(VAR_4) << 8;
 FUNC_1(VAR_3, 0);
 VAR_11 |= (unsigned char)FUNC_0(VAR_3);

 *VAR_9 = VAR_11;
 return VAR_10;
}
