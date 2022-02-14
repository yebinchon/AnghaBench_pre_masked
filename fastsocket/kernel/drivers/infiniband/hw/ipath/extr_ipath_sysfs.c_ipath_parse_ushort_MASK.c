
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

int FUNC_2(const char *VAR_1, unsigned short *VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_1[0])) {
  VAR_5 = -VAR_0;
  goto bail;
 }

 VAR_3 = FUNC_1(VAR_1, &VAR_4, 0);

 if (VAR_3 > 0xffff) {
  VAR_5 = -VAR_0;
  goto bail;
 }

 *VAR_2 = VAR_3;

 VAR_5 = VAR_4 + 1 - VAR_1;
 if (VAR_5 == 0)
  VAR_5 = -VAR_0;

bail:
 return VAR_5;
}
