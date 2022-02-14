
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_info {char skey; char asc; char ascq; } ;



__attribute__((used)) static void
FUNC_0(char *VAR_0, struct sense_info *VAR_1)
{
 if ((VAR_0[0] & 0x7F) >= 0x72) {

  VAR_1->skey = VAR_0[1] & 0x0F;
  VAR_1->asc = VAR_0[2];
  VAR_1->ascq = VAR_0[3];
 } else {

  VAR_1->skey = VAR_0[2] & 0x0F;
  VAR_1->asc = VAR_0[12];
  VAR_1->ascq = VAR_0[13];
 }
}
