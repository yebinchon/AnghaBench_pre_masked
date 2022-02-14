
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {int dummy; } ;
typedef int status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qmi_msg*,int,int,unsigned short*) ;

__attribute__((used)) static unsigned FUNC_1(struct qmi_msg *VAR_1, unsigned *VAR_2)
{
 unsigned short VAR_3[2];
 if (FUNC_0(VAR_1, 0x02, sizeof(VAR_3), VAR_3)) {
  *VAR_2 = 0;
  return VAR_0;
 } else {
  *VAR_2 = VAR_3[1];
  return VAR_3[0];
 }
}
