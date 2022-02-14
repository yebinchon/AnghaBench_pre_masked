
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usbnet*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u16 *VAR_8 = FUNC_2(sizeof (u16), VAR_2);

 if (!VAR_8)
  return -VAR_1;
 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_8);
 VAR_7 = *VAR_8;
 FUNC_1(VAR_8);
 if (VAR_6 != 0) {
  FUNC_0("%s net1080_check_conn read - %d", VAR_5->net->name, VAR_6);
  return VAR_6;
 }
 if ((VAR_7 & VAR_4) != VAR_4)
  return -VAR_0;
 return 0;
}
