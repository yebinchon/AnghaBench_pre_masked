
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ,char*,int) ;
 long FUNC_1 (long,unsigned long,void*,long) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static inline long FUNC_3(long VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 char VAR_5[256];
 extern char VAR_6;
 long VAR_7, VAR_8 = &VAR_6 - (char *) VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_5, 255);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 &= 255;
 VAR_5[VAR_7] = '\0';
 if (VAR_7)
  FUNC_2("Boot file specification (%s) not implemented\n",
         VAR_5);
 return FUNC_1(VAR_2, VAR_4, (void *)VAR_3, VAR_8/512 + 1);
}
