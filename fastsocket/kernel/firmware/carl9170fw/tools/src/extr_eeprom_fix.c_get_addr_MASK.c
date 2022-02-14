
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(char *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (*VAR_3 & 3) {
  FUNC_0(VAR_1, "Address 0x%.8x is not a multiple of 4.\n",
   *VAR_3);

  return -VAR_0;
 }

 return VAR_4;
}
