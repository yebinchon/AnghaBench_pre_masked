
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_1 < 0)
  return -1;

 *VAR_2 += VAR_3;
 if (*VAR_2 > 255)
  *VAR_2 = 255;
 else if (*VAR_2 < 0)
  *VAR_2 = 0;

 VAR_5 = *VAR_2;
 VAR_5 |= VAR_5 << 8;

  VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_4 == -1) {
  FUNC_1("WRITE_PCM");
  return VAR_4;
 }

 return 0;
}
