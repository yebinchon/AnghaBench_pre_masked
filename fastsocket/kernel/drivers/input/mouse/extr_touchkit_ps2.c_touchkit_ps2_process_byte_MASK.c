
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; int pktcnt; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static psmouse_ret_t FUNC_6(struct psmouse *VAR_5)
{
 unsigned char *VAR_6 = VAR_5->packet;
 struct input_dev *VAR_7 = VAR_5->dev;

 if (VAR_5->pktcnt != 5)
  return VAR_4;

 FUNC_3(VAR_7, VAR_0, FUNC_1(VAR_6));
 FUNC_3(VAR_7, VAR_1, FUNC_2(VAR_6));
 FUNC_4(VAR_7, VAR_2, FUNC_0(VAR_6));
 FUNC_5(VAR_7);

 return VAR_3;
}
