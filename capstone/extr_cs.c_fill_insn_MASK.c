
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ id; char* mnemonic; } ;
struct insn_mnem {struct insn_mnem* next; TYPE_1__ insn; } ;
struct cs_struct {struct insn_mnem* mnem_list; } ;
typedef int csh ;
struct TYPE_7__ {int size; scalar_t__ id; char* mnemonic; char* op_str; int bytes; } ;
typedef TYPE_2__ cs_insn ;
typedef int (* PostPrinter_t ) (int ,TYPE_2__*,char*,int *) ;
typedef int MCInst ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct cs_struct *VAR_0, cs_insn *VAR_1, char *VAR_2, MCInst *VAR_3,
  PostPrinter_t VAR_4, const uint8_t *VAR_5)
{

 char *VAR_6, *VAR_7;

 uint16_t VAR_8 = FUNC_1(sizeof(VAR_1->bytes), VAR_1->size);



 FUNC_2(VAR_1->bytes, VAR_5 + VAR_1->size - VAR_8, VAR_8);
 VAR_1->size = VAR_8;


 if (FUNC_0(VAR_3))
  VAR_1->id = FUNC_0(VAR_3);


 if (VAR_4)
  VAR_4((csh)VAR_0, VAR_1, VAR_2, VAR_3);




 VAR_7 = VAR_1->mnemonic;
 for (VAR_6 = VAR_2; *VAR_6; VAR_6++) {
  if (*VAR_6 == ' '|| *VAR_6 == '\t')
   break;
  if (*VAR_6 == '|')
   *VAR_6 = ' ';

  *VAR_7 = *VAR_6;
  VAR_7++;
 }

 *VAR_7 = '\0';


 if (VAR_0->mnem_list) {
  struct insn_mnem *VAR_9 = VAR_0->mnem_list;
  while(VAR_9) {
   if (VAR_9->insn.id == VAR_1->id) {

    (void)FUNC_3(VAR_1->mnemonic, VAR_9->insn.mnemonic, sizeof(VAR_1->mnemonic) - 1);
    VAR_1->mnemonic[sizeof(VAR_1->mnemonic) - 1] = '\0';
    break;
   }
   VAR_9 = VAR_9->next;
  }
 }


 if (*VAR_6) {

  VAR_6++;
  for (; ((*VAR_6 == ' ') || (*VAR_6 == '\t')); VAR_6++);
  FUNC_3(VAR_1->op_str, VAR_6, sizeof(VAR_1->op_str) - 1);
  VAR_1->op_str[sizeof(VAR_1->op_str) - 1] = '\0';
 } else
  VAR_1->op_str[0] = '\0';

}
