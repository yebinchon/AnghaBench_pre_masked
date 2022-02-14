
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 scalar_t__ VAR_1 ;

void FUNC_1(int VAR_2, int VAR_3)
{
 if (VAR_1 < 0) return;

  VAR_2=VAR_2<0?0:VAR_2; VAR_2=VAR_2>255?255:VAR_2; VAR_3=VAR_3<0?0:VAR_3; VAR_3=VAR_3>255?255:VAR_3;
  VAR_2<<=8; VAR_2|=VAR_3;
  FUNC_0(VAR_1, VAR_0, &VAR_2);
}
