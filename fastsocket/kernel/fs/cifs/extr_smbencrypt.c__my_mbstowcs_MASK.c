
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char __u16 ;


 int FUNC_0 (unsigned char*,int ,unsigned char) ;

__attribute__((used)) static int
FUNC_1(__u16 *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 __u16 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = *VAR_1;
  FUNC_0(VAR_0, 0, VAR_4);
  VAR_0++;
  VAR_1++;
  if (VAR_4 == 0)
   break;
 }
 return VAR_3;
}
