
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int state; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct cxgbi_sock *VAR_5, int VAR_6,
     int *VAR_7)
{
 switch (VAR_6) {
 case 133:
 case 132:
  return VAR_5->state > VAR_0 ? -VAR_3 : -VAR_1;
 case 128:
 case 129:
 case 131:
 case 130:
  return -VAR_4;
 default:
  return -VAR_2;
 }
}
