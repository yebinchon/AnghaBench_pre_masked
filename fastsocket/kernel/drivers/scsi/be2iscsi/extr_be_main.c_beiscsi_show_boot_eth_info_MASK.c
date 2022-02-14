
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;



 int FUNC_0 (char*,struct beiscsi_hba*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_1, int VAR_2, char *VAR_3)
{
 struct beiscsi_hba *VAR_4 = VAR_1;
 char *VAR_5 = VAR_3;
 int VAR_6;

 switch (VAR_2) {
 case 130:
  VAR_6 = FUNC_1(VAR_5, "2\n");
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_5, "0\n");
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_5, VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
