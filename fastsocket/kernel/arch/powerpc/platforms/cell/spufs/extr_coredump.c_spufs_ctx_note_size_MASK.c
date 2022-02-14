
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct elf_note {int dummy; } ;
struct TYPE_2__ {char* name; int size; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct spu_context *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 char *VAR_6;
 char VAR_7[80];

 for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); VAR_3++) {
  VAR_6 = VAR_0[VAR_3].name;
  VAR_4 = VAR_0[VAR_3].size;

  FUNC_1(VAR_7, "SPU/%d/%s", VAR_2, VAR_6);

  VAR_5 += sizeof(struct elf_note);
  VAR_5 += FUNC_0(FUNC_2(VAR_7) + 1, 4);
  VAR_5 += FUNC_0(VAR_4, 4);
 }

 return VAR_5;
}
