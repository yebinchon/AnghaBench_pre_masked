
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int ) ;
 scalar_t__ FUNC_2 (struct psmouse*,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_1, unsigned char VAR_2,
    unsigned char *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_2) ||
     FUNC_1(&VAR_1->ps2dev, VAR_3, VAR_0)) {
  FUNC_0("elantech.c: synaptics_send_cmd query 0x%02x failed.\n", VAR_2);
  return -1;
 }

 return 0;
}
