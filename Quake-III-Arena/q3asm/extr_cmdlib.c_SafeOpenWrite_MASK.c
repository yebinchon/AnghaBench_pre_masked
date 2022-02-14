
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;

FILE *FUNC_3 (const char *VAR_1)
{
 FILE *VAR_2;

 VAR_2 = FUNC_1(VAR_1, "wb");

 if (!VAR_2)
  FUNC_0 ("Error opening %s: %s",VAR_1,FUNC_2(VAR_0));

 return VAR_2;
}
