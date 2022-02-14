
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct ins_format3 {int address; } ;
struct TYPE_5__ {struct ins_format3 format3; } ;
struct instruction {TYPE_4__* patch_label; TYPE_1__ format; } ;
typedef int buf ;
struct TYPE_7__ {TYPE_2__* linfo; } ;
struct TYPE_8__ {scalar_t__ type; char* name; TYPE_3__ info; } ;
struct TYPE_6__ {scalar_t__ address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct instruction* FUNC_0 (int *) ;
 struct instruction* FUNC_1 (struct instruction*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4()
{
 struct instruction *VAR_4;

 for (VAR_4 = FUNC_0(&VAR_3);
      VAR_4 != ((void*)0);
      VAR_4 = FUNC_1(VAR_4, VAR_2)) {
  if (VAR_4->patch_label != ((void*)0)) {
   struct ins_format3 *VAR_5;
   u_int VAR_6;

   if (VAR_4->patch_label->type != VAR_1) {
    char VAR_7[255];

    FUNC_2(VAR_7, sizeof(VAR_7),
      "Undefined label %s",
      VAR_4->patch_label->name);
    FUNC_3(VAR_7, VAR_0);

   }
   VAR_5 = &VAR_4->format.format3;
   VAR_6 = VAR_5->address;
   VAR_6 += VAR_4->patch_label->info.linfo->address;
   VAR_5->address = VAR_6;
  }
 }
}
