
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct elantech_data {int fw_version_maj; unsigned char* parity; } ;



__attribute__((used)) static int FUNC_0(struct psmouse *VAR_0)
{
 struct elantech_data *VAR_1 = VAR_0->private;
 unsigned char *VAR_2 = VAR_0->packet;
 unsigned char VAR_3, VAR_4, VAR_5;


 if (VAR_1->fw_version_maj == 0x01) {

  VAR_3 = (VAR_2[0] & 0x20) >> 5;
  VAR_4 = (VAR_2[0] & 0x10) >> 4;
 } else {

  VAR_3 = (VAR_2[0] & 0x10) >> 4;
  VAR_4 = (VAR_2[0] & 0x20) >> 5;
 }

 VAR_5 = (VAR_2[0] & 0x04) >> 2;

 return VAR_1->parity[VAR_2[1]] == VAR_3 &&
        VAR_1->parity[VAR_2[2]] == VAR_4 &&
        VAR_1->parity[VAR_2[3]] == VAR_5;
}
