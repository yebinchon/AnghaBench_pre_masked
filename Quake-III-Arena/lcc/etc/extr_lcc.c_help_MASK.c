
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char* VAR_6 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void) {
 static char *VAR_7[] = {
"", " [ option | file ]...\n",
"	except for -l, options are processed left-to-right before files\n",
"	unrecognized options are taken to be linker options\n",
"-A	warn about nonANSI usage; 2nd -A warns more\n",
"-b	emit expression-level profiling code; see bprint(1)\n",



"-Bdir/	use the compiler named `dir/rcc'\n",
"-c	compile only\n",
"-dn	set switch statement density to `n'\n",
"-Dname -Dname=def	define the preprocessor symbol `name'\n",
"-E	run only the preprocessor on the named C programs and unsuffixed files\n",
"-g	produce symbol table information for debuggers\n",
"-help or -?	print this message\n",
"-Idir	add `dir' to the beginning of the list of #include directories\n",
"-lx	search library `x'\n",
"-N	do not search the standard directories for #include files\n",
"-n	emit code to check for dereferencing zero pointers\n",
"-O	is ignored\n",
"-o file	leave the output in `file'\n",
"-P	print ANSI-style declarations for globals\n",
"-p -pg	emit profiling code; see prof(1) and gprof(1)\n",
"-S	compile to assembly language\n",

"-static	specify static libraries (default is dynamic)\n",

"-t -tname	emit function tracing calls to printf or to `name'\n",
"-target name	is ignored\n",
"-tempdir=dir	place temporary files in `dir/'", "\n"
"-Uname	undefine the preprocessor symbol `name'\n",
"-v	show commands as they are executed; 2nd -v suppresses execution\n",
"-w	suppress warnings\n",
"-Woarg	specify system-specific `arg'\n",
"-W[pfal]arg	pass `arg' to the preprocessor, compiler, assembler, or linker\n",
 0 };
 int VAR_8;
 char *VAR_9;

 VAR_7[0] = VAR_4;
 for (VAR_8 = 0; VAR_7[VAR_8]; VAR_8++) {
  FUNC_0(VAR_5, "%s", VAR_7[VAR_8]);
  if (FUNC_1("-tempdir", VAR_7[VAR_8], 8) == 0 && VAR_6)
   FUNC_0(VAR_5, "; default=%s", VAR_6);
 }

 if ((VAR_9 = FUNC_0("LCCINPUTS"))) FUNC_0(VAR_5, "LCCINPUTS" "=%s\n", VAR_9);
 if ((VAR_9 = FUNC_0("LCCDIR"))) FUNC_0(VAR_5, "LCCDIR" "=%s\n", VAR_9);





}
