
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_11)
{
 int VAR_12, VAR_13;

 if (!VAR_10)
  return -VAR_0;

 if (!VAR_11)
  VAR_9 = VAR_1;

 for (VAR_13 = VAR_6; VAR_13 <= VAR_8; VAR_13++)
  VAR_2[VAR_13] = VAR_7;

 VAR_12 = FUNC_0(&VAR_3, VAR_6, VAR_8,
    VAR_5);

 if (VAR_12) {
  for (VAR_13 = VAR_6; VAR_13 <= VAR_8; VAR_13++) {
   VAR_2[VAR_13] = -1;
  }
  VAR_7 = -1;
 } else {
  VAR_4 = 1;
 }

 return VAR_12;
}
