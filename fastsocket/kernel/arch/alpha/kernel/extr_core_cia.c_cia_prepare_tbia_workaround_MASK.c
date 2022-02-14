
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vip ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 unsigned long* FUNC_3 (int,int,int ) ;
 int FUNC_4 (unsigned long*) ;

__attribute__((used)) static inline void
FUNC_5(int VAR_3)
{
 unsigned long *VAR_4, VAR_5;
 long VAR_6;


 VAR_4 = FUNC_3(VAR_1, 32768, 0);
 VAR_5 = (FUNC_4(VAR_4) >> (VAR_2 - 1)) | 1;

 for (VAR_6 = 0; VAR_6 < VAR_1 / sizeof(unsigned long); ++VAR_6)
  VAR_4[VAR_6] = VAR_5;

 *(vip)FUNC_1(VAR_3) = VAR_0 | 3;
 *(vip)FUNC_2(VAR_3)
   = (VAR_1*1024 - 1) & 0xfff00000;
 *(vip)FUNC_0(VAR_3) = FUNC_4(VAR_4) >> 2;
}
