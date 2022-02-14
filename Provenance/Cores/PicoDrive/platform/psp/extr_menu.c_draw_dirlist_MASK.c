
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_dirent {int d_type; char* d_name; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int,char*,unsigned short,int) ;
 int FUNC_5 (int,int,char*) ;

__attribute__((used)) static void FUNC_6(char *VAR_3, struct my_dirent **VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = 13 - VAR_6;
 VAR_5--;

 FUNC_2();

 if (!VAR_2) {

 }

 FUNC_1((char *)VAR_1 + 512*129*2, (char *)VAR_1 + 512*129*2, 512*10, 0);

 if (VAR_7 - 2 >= 0)
  FUNC_4(14, (VAR_7 - 2)*10, VAR_3, 0xffff, 53-2);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9 = VAR_7 + VAR_8;
  if (VAR_9 < 0) continue;
  if (VAR_9 > 26) break;
  if (VAR_4[VAR_8+1]->d_type & VAR_0) {
   FUNC_4(14, VAR_9*10, "/", 0xd7ff, 1);
   FUNC_4(14+6, VAR_9*10, VAR_4[VAR_8+1]->d_name, 0xd7ff, 80-3);
  } else {
   unsigned short VAR_10 = FUNC_0(VAR_4[VAR_8+1]->d_name);
   FUNC_4(14, VAR_9*10, VAR_4[VAR_8+1]->d_name, VAR_10, 80-2);
  }
 }
 FUNC_5(5, 130, ">");
 FUNC_3();
}
