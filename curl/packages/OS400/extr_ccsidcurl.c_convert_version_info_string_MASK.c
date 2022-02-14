
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int,char const*,int,int ) ;

__attribute__((used)) static int
FUNC_1(const char * * VAR_1,
                            char * * VAR_2, int *VAR_3, unsigned int VAR_4)

{





  if(*VAR_1) {
    int VAR_5 = FUNC_0(*VAR_2, *VAR_3, VAR_4, *VAR_1, -1, VAR_0);

    if(VAR_5 <= 0)
      return -1;

    *VAR_1 = *VAR_2;
    *VAR_2 += VAR_5;
    *VAR_3 -= VAR_5;
    }

  return 0;
}
