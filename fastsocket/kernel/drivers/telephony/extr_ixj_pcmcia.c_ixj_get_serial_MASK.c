
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {char** prod_id; } ;
struct TYPE_3__ {char serial; } ;
typedef TYPE_1__ IXJ ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device * VAR_0, IXJ * VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4;
 FUNC_0(0, "ixj_get_serial(0x%p)\n", VAR_0);

 VAR_2 = VAR_0->prod_id[0];
 if (!VAR_2)
  goto cs_failed;
 FUNC_1("%s", VAR_2);
 VAR_2 = VAR_0->prod_id[1];
 if (!VAR_2)
  goto cs_failed;
 FUNC_1(" %s", VAR_2);
 VAR_2 = VAR_0->prod_id[2];
 if (!VAR_2)
  goto cs_failed;
 VAR_4 = 1;
 for (VAR_3 = FUNC_2(VAR_2) - 1; VAR_3 >= 0; VAR_3--) {
  switch (VAR_2[VAR_3]) {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   VAR_1->serial += (VAR_2[VAR_3] - 48) * VAR_4;
   break;
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
   VAR_1->serial += (VAR_2[VAR_3] - 55) * VAR_4;
   break;
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
   VAR_1->serial += (VAR_2[VAR_3] - 87) * VAR_4;
   break;
  }
  VAR_4 = VAR_4 * 0x10;
 }
 VAR_2 = VAR_0->prod_id[3];
 if (!VAR_2)
  goto cs_failed;
 FUNC_1(" version %s\n", VAR_2);
      cs_failed:
 return;
}
