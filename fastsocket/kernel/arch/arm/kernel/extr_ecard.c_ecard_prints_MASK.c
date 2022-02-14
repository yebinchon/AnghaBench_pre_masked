
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {int string; } ;
struct in_chunk_dir {TYPE_1__ d; } ;
struct TYPE_7__ {char* id; scalar_t__ cd; int product; int manufacturer; } ;
struct TYPE_8__ {char* card_desc; TYPE_2__ cid; scalar_t__ easi; int slot_no; } ;
typedef TYPE_3__ ecard_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_chunk_dir*,TYPE_3__*,int,int ) ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, ecard_t *VAR_2)
{
 FUNC_2(VAR_1, "  %d: %s ", VAR_2->slot_no, VAR_2->easi ? "EASI" : "    ");

 if (VAR_2->cid.id == 0) {
  struct in_chunk_dir VAR_3;

  FUNC_2(VAR_1, "[%04X:%04X] ",
   VAR_2->cid.manufacturer, VAR_2->cid.product);

  if (!VAR_2->card_desc && VAR_2->cid.cd &&
      FUNC_0(&VAR_3, VAR_2, 0xf5, 0)) {
   VAR_2->card_desc = FUNC_1(FUNC_4(VAR_3.d.string)+1, VAR_0);

   if (VAR_2->card_desc)
    FUNC_3((char *)VAR_2->card_desc, VAR_3.d.string);
  }

  FUNC_2(VAR_1, "%s\n", VAR_2->card_desc ? VAR_2->card_desc : "*unknown*");
 } else
  FUNC_2(VAR_1, "Simple card %d\n", VAR_2->cid.id);

 return 0;
}
