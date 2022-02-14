
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u64 VAR_1, unsigned char *VAR_2,
        unsigned char *VAR_3, unsigned char *VAR_4)
{
 if (((VAR_1 >> 24) & 0xff) != VAR_0)
  return -1;

 *VAR_2 = (VAR_1 >> 16) & 0xff;
 *VAR_3 = (VAR_1 >> 8) & 0xff;
 *VAR_4 = VAR_1 & 0xff;
 return 0;
}
