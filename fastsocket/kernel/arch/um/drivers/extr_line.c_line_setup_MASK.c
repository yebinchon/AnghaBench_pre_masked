
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct line*,int,char*,int ,char**) ;
 int FUNC_1 (char*,char**,int ) ;

int FUNC_2(struct line *VAR_3, unsigned int VAR_4, char *VAR_5,
        char **VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;

 if (*VAR_5 == '=') {




  VAR_8 = -1;
 }
 else {
  VAR_8 = FUNC_1(VAR_5, &VAR_10, 0);
  if (*VAR_10 != '=') {
   *VAR_6 = "Couldn't parse device number";
   return -VAR_0;
  }
  VAR_5 = VAR_10;
 }
 VAR_5++;

 if (VAR_8 >= (signed int) VAR_4) {
  *VAR_6 = "Device number out of range";
  return -VAR_0;
 }
 else if (VAR_8 >= 0) {
  VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_5, VAR_2, VAR_6);
  if (VAR_9)
   return VAR_9;
 }
 else {
  for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_5, VAR_1,
          VAR_6);
   if (VAR_9)
    return VAR_9;
  }
 }
 return VAR_8 == -1 ? VAR_4 : VAR_8;
}
