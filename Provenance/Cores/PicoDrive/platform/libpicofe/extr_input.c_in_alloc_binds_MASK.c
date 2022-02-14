
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_default_bind {int bit; scalar_t__ btype; int code; } ;
typedef int binds ;
struct TYPE_2__ {struct in_default_bind* defbinds; } ;


 TYPE_1__ FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,scalar_t__) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static int *FUNC_4(int VAR_1, int VAR_2)
{
 const struct in_default_bind *VAR_3;
 int *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2 * VAR_0 * 2, sizeof(VAR_4[0]));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1).defbinds;
 if (VAR_3 != ((void*)0)) {
  for (VAR_5 = 0; ; VAR_5++) {
   if (VAR_3[VAR_5].bit == 0 && VAR_3[VAR_5].btype == 0
       && VAR_3[VAR_5].bit == 0)
    break;
   VAR_4[FUNC_1(VAR_3[VAR_5].code, VAR_3[VAR_5].btype)] |=
    1 << VAR_3[VAR_5].bit;
  }


  FUNC_3(VAR_4 + VAR_2 * VAR_0, VAR_4,
   sizeof(VAR_4[0]) * VAR_2 * VAR_0);
 }

 return VAR_4;
}
