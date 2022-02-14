
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 < 0 || VAR_3 > 0xff) {
  VAR_5 = -1;
 } else if (VAR_3 <= VAR_0) {
  VAR_5 = VAR_1[VAR_3];
 } else {
  VAR_5 = VAR_3 * 4000;
 }

 if (VAR_5 == -1) {
  VAR_4 = FUNC_1(VAR_2, "reserved");
 } else {
  VAR_4 = FUNC_0(VAR_2, VAR_5, 1000);
 }

 return VAR_4;
}
