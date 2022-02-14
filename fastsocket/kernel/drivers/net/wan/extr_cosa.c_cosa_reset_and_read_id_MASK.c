
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cosa_data*) ;
 int FUNC_1 (struct cosa_data*,int ) ;
 int FUNC_2 (struct cosa_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cosa_data *VAR_2, char *VAR_3)
{
 int VAR_4=0, VAR_5=0, VAR_6=0, VAR_7=0;


 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_1);



 FUNC_4(5*100000);


 FUNC_1(VAR_2, 0);
 for (VAR_4=0; VAR_4<VAR_0-1; VAR_4++, VAR_6=VAR_7) {
  if ((VAR_7 = FUNC_2(VAR_2)) == -1) {
   return -1;
  }
  VAR_7 &= 0xff;
  if (VAR_7 != '\r' && VAR_7 != '\n' && VAR_7 != 0x2e)
   VAR_3[VAR_5++] = VAR_7;
  if (VAR_7 == 0x2e && VAR_6 == '\n')
   break;
 }

 VAR_3[VAR_5] = '\0';
 return VAR_5;
}
