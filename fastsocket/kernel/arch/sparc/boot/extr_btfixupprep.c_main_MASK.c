
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long offset; char* sect; int frel; TYPE_2__* f; struct TYPE_6__* next; } ;
typedef TYPE_1__ btfixuprel ;
struct TYPE_7__ {int setinitval; unsigned int initval; char* initvalstr; char* name; int type; TYPE_1__* rel; } ;
typedef TYPE_2__ btfixup ;


 TYPE_2__* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,int,int ) ;
 TYPE_2__* FUNC_3 (char,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char*,char*) ;
 void* FUNC_15 (char*,char**,int) ;
 int VAR_11 ;
 char* VAR_12 ;

int FUNC_16(int VAR_13,char **VAR_14)
{
 char *VAR_15, *VAR_16;
 char *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21;
 int VAR_22;
 btfixup *VAR_23;
 btfixuprel *VAR_24, **VAR_25;
 unsigned long VAR_26;
 char *VAR_27;

 VAR_11 = FUNC_12(VAR_12);
 while (FUNC_2 (VAR_1, 1024, VAR_10) != ((void*)0))
  if (!FUNC_13 (VAR_1, VAR_12, VAR_11))
   goto main0;
 FUNC_1();
main0:
 VAR_7 = FUNC_12(VAR_8);
 while (FUNC_2 (VAR_1, 1024, VAR_10) != ((void*)0))
  if (!FUNC_13 (VAR_1, VAR_8, VAR_7))
   goto main1;
 FUNC_1();
main1:
 VAR_17 = FUNC_5(FUNC_12 (VAR_1 + VAR_7) + 1);
 if (!VAR_17) FUNC_1();
 FUNC_10 (VAR_17, VAR_1 + VAR_7);
 VAR_15 = FUNC_8 (VAR_17, ']');
 if (!VAR_15) FUNC_1();
 *VAR_15 = 0;
 if (FUNC_2 (VAR_1, 1024, VAR_10) == ((void*)0))
  FUNC_1();
 while (FUNC_2 (VAR_1, 1024, VAR_10) != ((void*)0)) {
  int VAR_28;
  if (!FUNC_13 (VAR_1, VAR_8, VAR_7))
   goto main1;
  if (VAR_6 == 0)
   FUNC_7 (VAR_1);
  VAR_15 = FUNC_8 (VAR_1, '\n');
  if (VAR_15) *VAR_15 = 0;
  if (FUNC_12 (VAR_1) < 22+VAR_6)
   continue;
  if (FUNC_13 (VAR_1 + VAR_6, " R_SPARC_", 9))
   continue;
  VAR_28 = 27 - 8 + VAR_6;
  if (VAR_1[VAR_28] != '_' || VAR_1[VAR_28+1] != '_' || VAR_1[VAR_28+2] != '_')
   continue;
  switch (VAR_1[VAR_28+3]) {
   case 'f':
   case 'b':
   case 's':
   case 'a':
   case 'h':
   case 'i':
    break;
   default:
    continue;
  }
  VAR_15 = FUNC_8 (VAR_1 + VAR_28+5, '+');
  if (VAR_15) *VAR_15 = 0;
  VAR_22 = VAR_28 + 5;
  if (VAR_1[VAR_28+4] == 's' && VAR_1[VAR_28+5] == '_') {
   VAR_22 = VAR_28 + 6;
   if (FUNC_9 (VAR_17, ".init.text")) {
    FUNC_4(VAR_9,
        "Wrong use of '%s' BTFIXUPSET in '%s' section.\n"
        "BTFIXUPSET_CALL can be used only in"
        " __init sections\n",
        VAR_1 + VAR_22, VAR_17);
    FUNC_0(1);
   }
  } else if (VAR_1[VAR_28+4] != '_')
   continue;
  if (!FUNC_9 (VAR_17, ".text.exit"))
   continue;
  if (FUNC_9 (VAR_17, ".text") &&
      FUNC_9 (VAR_17, ".init.text") &&
      FUNC_9 (VAR_17, ".fixup") &&
      (FUNC_9 (VAR_17, "__ksymtab") || VAR_1[VAR_28+3] != 'f')) {
   if (VAR_1[VAR_28+3] == 'f')
    FUNC_4(VAR_9,
        "Wrong use of '%s' in '%s' section.\n"
        " It can be used only in .text, .init.text,"
        " .fixup and __ksymtab\n",
        VAR_1 + VAR_22, VAR_17);
   else
    FUNC_4(VAR_9,
        "Wrong use of '%s' in '%s' section.\n"
        " It can be only used in .text, .init.text,"
        " and .fixup\n", VAR_1 + VAR_22, VAR_17);
   FUNC_0(1);
  }
  VAR_15 = FUNC_14 (VAR_1 + VAR_22, "__btset_");
  if (VAR_15 && VAR_1[VAR_28+4] == 's') {
   FUNC_4(VAR_9, "__btset_ in BTFIXUP name can only be used when defining the variable, not for setting\n%s\n", VAR_1);
   FUNC_0(1);
  }
  VAR_21 = 0;
  VAR_27 = ((void*)0);
  if (VAR_15) {
   if (VAR_15[8] != '0' || VAR_15[9] != 'x') {
    FUNC_4(VAR_9, "Pre-initialized values can be only initialized with hexadecimal constants starting 0x\n%s\n", VAR_1);
    FUNC_0(1);
   }
   VAR_21 = FUNC_15(VAR_15 + 10, &VAR_16, 16);
   if (*VAR_16 || !VAR_21) {
    FUNC_4(VAR_9, "Pre-initialized values can be only in the form name__btset_0xXXXXXXXX where X are hex digits.\nThey cannot be name__btset_0x00000000 though. Use BTFIXUPDEF_XX instead of BTFIXUPDEF_XX_INIT then.\n%s\n", VAR_1);
    FUNC_0(1);
   }
   VAR_27 = VAR_15 + 10;
   *VAR_15 = 0;
  }
  VAR_23 = FUNC_3(VAR_1[VAR_28+3], VAR_1 + VAR_22);
  if (VAR_1[VAR_28+4] == 's')
   continue;
  switch (VAR_1[VAR_28+3]) {
  case 'f':
   if (VAR_21) {
    FUNC_4(VAR_9, "Cannot use pre-initalized fixups for calls\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (!FUNC_9 (VAR_17, "__ksymtab")) {
    if (FUNC_13 (VAR_1 + VAR_6+9, "32        ", 10)) {
     FUNC_4(VAR_9, "BTFIXUP_CALL in EXPORT_SYMBOL results in relocation other than R_SPARC_32\n\%s\n", VAR_1);
     FUNC_0(1);
    }
   } else if (FUNC_13 (VAR_1 + VAR_6+9, "WDISP30   ", 10) &&
       FUNC_13 (VAR_1 + VAR_6+9, "HI22      ", 10) &&
       FUNC_13 (VAR_1 + VAR_6+9, "LO10      ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_CALL results in relocation other than R_SPARC_WDISP30, R_SPARC_HI22 or R_SPARC_LO10\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  case 'b':
   if (VAR_21) {
    FUNC_4(VAR_9, "Cannot use pre-initialized fixups for blackboxes\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (FUNC_13 (VAR_1 + VAR_6+9, "HI22      ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_BLACKBOX results in relocation other than R_SPARC_HI22\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  case 's':
   if (VAR_21 + 0x1000 >= 0x2000) {
    FUNC_4(VAR_9, "Wrong initializer for SIMM13. Has to be from $fffff000 to $00000fff\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (FUNC_13 (VAR_1 + VAR_6+9, "13        ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_SIMM13 results in relocation other than R_SPARC_13\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  case 'a':
   if (VAR_21 + 0x1000 >= 0x2000 && (VAR_21 & 0x3ff)) {
    FUNC_4(VAR_9, "Wrong initializer for HALF.\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (FUNC_13 (VAR_1 + VAR_6+9, "13        ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_HALF results in relocation other than R_SPARC_13\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  case 'h':
   if (VAR_21 & 0x3ff) {
    FUNC_4(VAR_9, "Wrong initializer for SETHI. Cannot have set low 10 bits\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (FUNC_13 (VAR_1 + VAR_6+9, "HI22      ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_SETHI results in relocation other than R_SPARC_HI22\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  case 'i':
   if (VAR_21) {
    FUNC_4(VAR_9, "Cannot use pre-initalized fixups for INT\n%s\n", VAR_1);
    FUNC_0(1);
   }
   if (FUNC_13 (VAR_1 + VAR_6+9, "HI22      ", 10) && FUNC_13 (VAR_1 + VAR_6+9, "LO10      ", 10)) {
    FUNC_4(VAR_9, "BTFIXUP_INT results in relocation other than R_SPARC_HI22 and R_SPARC_LO10\n%s\n", VAR_1);
    FUNC_0(1);
   }
   break;
  }
  if (!VAR_23->setinitval) {
   VAR_23->initval = VAR_21;
   if (VAR_27) {
    VAR_23->initvalstr = FUNC_11(VAR_27);
    if (!VAR_23->initvalstr) FUNC_1();
   }
   VAR_23->setinitval = 1;
  } else if (VAR_23->initval != VAR_21) {
   FUNC_4(VAR_9, "Btfixup %s previously used with initializer %s which doesn't match with current initializer\n%s\n",
     VAR_23->name, VAR_23->initvalstr ? : "0x00000000", VAR_1);
   FUNC_0(1);
  } else if (VAR_21 && FUNC_9(VAR_23->initvalstr, VAR_27)) {
   FUNC_4(VAR_9, "Btfixup %s previously used with initializer %s which doesn't match with current initializer.\n"
     "Initializers have to match literally as well.\n%s\n",
     VAR_23->name, VAR_23->initvalstr, VAR_1);
   FUNC_0(1);
  }
  VAR_26 = FUNC_15(VAR_1, &VAR_16, 16);
  if (VAR_16 != VAR_1 + VAR_6 || (!VAR_26 && (VAR_6 == 8 ? FUNC_13 (VAR_1, "00000000 ", 9) : FUNC_13 (VAR_1, "0000000000000000 ", 17)))) {
   FUNC_4(VAR_9, "Malformed relocation address in\n%s\n", VAR_1);
   FUNC_0(1);
  }
  for (VAR_20 = 0, VAR_24 = VAR_23->rel, VAR_25 = &VAR_23->rel; VAR_24; VAR_25 = &VAR_24->next, VAR_24 = VAR_24->next, VAR_20++)
   if (VAR_24->offset == VAR_26 && !FUNC_9(VAR_24->sect, VAR_17)) {
    FUNC_4(VAR_9, "Ugh. One address has two relocation records\n");
    FUNC_0(1);
   }
  *VAR_25 = FUNC_5(sizeof(btfixuprel));
  if (!*VAR_25) FUNC_1();
  (*VAR_25)->offset = VAR_26;
  (*VAR_25)->f = ((void*)0);
  if (VAR_1[VAR_28+3] == 'f') {
   VAR_3 = VAR_23;
   VAR_4 = VAR_26;
   VAR_5 = VAR_20;
  } else if (VAR_4 + 4 == VAR_26) {
   (*VAR_25)->f = VAR_3;
   (*VAR_25)->frel = VAR_5;
  }
  (*VAR_25)->sect = VAR_17;
  (*VAR_25)->next = ((void*)0);
 }
 FUNC_6("! Generated by btfixupprep. Do not edit.\n\n");
 FUNC_6("\t.section\t\".data.init\",#alloc,#write\n\t.align\t4\n\n");
 FUNC_6("\t.global\t___btfixup_start\n___btfixup_start:\n\n");
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  VAR_23 = VAR_0 + VAR_18;
  FUNC_6("\t.global\t___%cs_%s\n", VAR_23->type, VAR_23->name);
  if (VAR_23->type == 'f')
   FUNC_6("___%cs_%s:\n\t.word 0x%08x,0,0,", VAR_23->type, VAR_23->name, VAR_23->type << 24);
  else
   FUNC_6("___%cs_%s:\n\t.word 0x%08x,0,", VAR_23->type, VAR_23->name, VAR_23->type << 24);
  for (VAR_19 = 0, VAR_24 = VAR_23->rel; VAR_24 != ((void*)0); VAR_19++, VAR_24 = VAR_24->next);
  if (VAR_19)
   FUNC_6("%d\n\t.word\t", VAR_19 * 2);
  else
   FUNC_6("0\n");
  for (VAR_24 = VAR_23->rel, VAR_19--; VAR_24 != ((void*)0); VAR_19--, VAR_24 = VAR_24->next) {
   if (!FUNC_9 (VAR_24->sect, ".text"))
    FUNC_6 ("_stext+0x%08lx", VAR_24->offset);
   else if (!FUNC_9 (VAR_24->sect, ".init.text"))
    FUNC_6 ("__init_begin+0x%08lx", VAR_24->offset);
   else if (!FUNC_9 (VAR_24->sect, "__ksymtab"))
    FUNC_6 ("__start___ksymtab+0x%08lx", VAR_24->offset);
   else if (!FUNC_9 (VAR_24->sect, ".fixup"))
    FUNC_6 ("__start___fixup+0x%08lx", VAR_24->offset);
   else
    FUNC_1();
   if (VAR_23->type == 'f' || !VAR_24->f)
    FUNC_6 (",0");
   else
    FUNC_6 (",___fs_%s+0x%08x", VAR_24->f->name, (4 + VAR_24->frel*2)*4 + 4);
   if (VAR_19) FUNC_6 (",");
   else FUNC_6 ("\n");
  }
  FUNC_6("\n");
 }
 FUNC_6("\n\t.global\t___btfixup_end\n___btfixup_end:\n");
 FUNC_6("\n\n! Define undefined references\n\n");
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  VAR_23 = VAR_0 + VAR_18;
  if (VAR_23->type == 'f') {
   FUNC_6("\t.global\t___f_%s\n", VAR_23->name);
   FUNC_6("___f_%s:\n", VAR_23->name);
  }
 }
 FUNC_6("\tretl\n\t nop\n\n");
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  VAR_23 = VAR_0 + VAR_18;
  if (VAR_23->type != 'f') {
   if (!VAR_23->initval) {
    FUNC_6("\t.global\t___%c_%s\n", VAR_23->type, VAR_23->name);
    FUNC_6("___%c_%s = 0\n", VAR_23->type, VAR_23->name);
   } else {
    FUNC_6("\t.global\t___%c_%s__btset_0x%s\n", VAR_23->type, VAR_23->name, VAR_23->initvalstr);
    FUNC_6("___%c_%s__btset_0x%s = 0x%08x\n", VAR_23->type, VAR_23->name, VAR_23->initvalstr, VAR_23->initval);
   }
  }
 }
 FUNC_6("\n\n");
     FUNC_0(0);
}
