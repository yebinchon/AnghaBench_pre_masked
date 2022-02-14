
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned int FUNC_0 (unsigned int,unsigned char*,int) ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 int VAR_4;
 unsigned int VAR_5 = FUNC_0(0L,VAR_3,0);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(VAR_5, (unsigned char*)VAR_2 + 24 + VAR_1*VAR_4, 360 - 24);
 }
 return VAR_5;
}
