
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bios {int size; int* data; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct nouveau_bios*,char*) ;
 scalar_t__ FUNC_2 (int*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct nouveau_bios *VAR_1, const bool VAR_2)
{
 if (VAR_1->size < 3 || !VAR_1->data || VAR_1->data[0] != 0x55 ||
   VAR_1->data[1] != 0xAA) {
  FUNC_1(VAR_1, "... signature not found\n");
  return 0;
 }

 if (FUNC_2(VAR_1->data,
   FUNC_0(VAR_0, VAR_1->data[2] * 512, VAR_1->size))) {
  FUNC_1(VAR_1, "... checksum invalid\n");

  return VAR_2 ? 2 : 1;
 }

 FUNC_1(VAR_1, "... appears to be valid\n");
 return 3;
}
