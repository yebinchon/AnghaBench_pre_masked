
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;
typedef enum hgpk_model_t { ____Placeholder_hgpk_model_t } hgpk_model_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psmouse*,char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (struct psmouse*,char*,unsigned char) ;
 scalar_t__ FUNC_2 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static enum hgpk_model_t FUNC_3(struct psmouse *VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_4->ps2dev;
 unsigned char VAR_6[3];


 if (FUNC_2(VAR_5, ((void*)0), VAR_3) ||
     FUNC_2(VAR_5, ((void*)0), VAR_3) ||
     FUNC_2(VAR_5, ((void*)0), VAR_3) ||
     FUNC_2(VAR_5, VAR_6, VAR_2)) {
  return -VAR_0;
 }

 FUNC_0(VAR_4, "ID: %02x %02x %02x\n", VAR_6[0], VAR_6[1], VAR_6[2]);


 if (VAR_6[0] != 0x67 || VAR_6[1] != 0x00)
  return -VAR_1;

 FUNC_1(VAR_4, "OLPC touchpad revision 0x%x\n", VAR_6[2]);

 return VAR_6[2];
}
