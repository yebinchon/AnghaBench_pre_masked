
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,char**) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (char*,char*) ;

int FUNC_9(int *VAR_9, char *VAR_10[])
{
 int VAR_11;
 int VAR_12;

 for (VAR_11 = VAR_12 = 1; VAR_11 < *VAR_9; VAR_11++) {
  if (FUNC_8(VAR_10[VAR_11], "-left") == 0)
   VAR_7 = VAR_1;
  else if (FUNC_8(VAR_10[VAR_11], "-central") == 0)
   VAR_7 = VAR_0;
  else if (FUNC_8(VAR_10[VAR_11], "-right") == 0)
   VAR_7 = VAR_2;
  else if (FUNC_8(VAR_10[VAR_11], "-wide1") == 0)
   VAR_7 = VAR_3;
  else if (FUNC_8(VAR_10[VAR_11], "-wide2") == 0)
   VAR_7 = VAR_4;
  else {
   if (FUNC_8(VAR_10[VAR_11], "-help") == 0) {
    FUNC_0("\t-central         Center emulated screen\n"
           "\t-left            Align left\n"
           "\t-right           Align right (on 80 columns)\n"
           "\t-wide1           Use 80 columns\n"
           "\t-wide2           Use 80 columns, display twice"
          );
   }
   VAR_10[VAR_12++] = VAR_10[VAR_11];
  }
 }

 *VAR_9 = VAR_12;

 FUNC_4();
 FUNC_7();
 FUNC_2();
 FUNC_5(VAR_8, VAR_6);
 FUNC_3(0);
 FUNC_6(VAR_8, 1);






 return VAR_6;
}
