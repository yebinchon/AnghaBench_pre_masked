
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ range_action ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,unsigned int*,unsigned int*,unsigned int*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_6, range_action VAR_7,
          int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17;
 range_action VAR_18;

 VAR_16 = 0;

 while ((VAR_17 = FUNC_3(&VAR_6, ","))) {
  VAR_15 = 0;
  VAR_18 = VAR_7;
  if (*VAR_17 == '!') {
   if (VAR_18 == VAR_4)
    VAR_18 = VAR_5;
   else
    VAR_18 = VAR_4;
   VAR_17++;
  }
  if (FUNC_2(VAR_17, "all") == 0) {
   VAR_9 = 0;
   VAR_11 = 0;
   VAR_13 = 0;
   VAR_10 = VAR_1;
   VAR_12 = VAR_2;
   VAR_14 = VAR_3;
  } else {
   VAR_15 = FUNC_1(FUNC_3(&VAR_17, "-"), &VAR_9,
      &VAR_11, &VAR_13, VAR_8);
   if (!VAR_15) {
    if (VAR_17 != ((void*)0))
     VAR_15 = FUNC_1(VAR_17, &VAR_10,
        &VAR_12, &VAR_14,
        VAR_8);
    else {
     VAR_10 = VAR_9;
     VAR_12 = VAR_11;
     VAR_14 = VAR_13;
    }
   }
  }
  if (!VAR_15) {
   VAR_15 = FUNC_0(VAR_18, VAR_11, VAR_12, VAR_13, VAR_14,
          VAR_8);
   if (VAR_15)
    VAR_16 = -VAR_0;
  } else
   VAR_16 = -VAR_0;
 }

 return VAR_16;
}
