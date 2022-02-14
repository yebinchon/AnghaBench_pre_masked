
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_conn {int dummy; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;





 int FUNC_0 (struct iscsi_cls_conn*,int,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int*) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_cls_conn *VAR_1,
       enum iscsi_param VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_2) {
 case 129:

  break;
 case 131:
  FUNC_2(VAR_3, "%d", &VAR_5);
  if (VAR_5) {
   FUNC_1("DataDigest wasn't negotiated to None");
   return -VAR_0;
  }
  break;
 case 132:
  FUNC_2(VAR_3, "%d", &VAR_5);
  if (VAR_5) {
   FUNC_1("DataDigest wasn't negotiated to None");
   return -VAR_0;
  }
  break;
 case 130:
  FUNC_2(VAR_3, "%d", &VAR_5);
  if (VAR_5) {
   FUNC_1("IFMarker wasn't negotiated to No");
   return -VAR_0;
  }
  break;
 case 128:
  FUNC_2(VAR_3, "%d", &VAR_5);
  if (VAR_5) {
   FUNC_1("OFMarker wasn't negotiated to No");
   return -VAR_0;
  }
  break;
 default:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
