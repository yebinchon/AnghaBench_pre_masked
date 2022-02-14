
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const* const,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2( void )
{
  static const char* const VAR_3 =
   "%d %d: extract FreeType API names from header files\n\n"
   "this program is used to extract the list of public FreeType API\n"
   "functions. It receives the list of header files as argument and\n"
   "generates a sorted list of unique identifiers\n\n"

   "usage: %d header1 [options] [header2 ...]\n\n"

   "options:   -      : parse the content of stdin, ignore arguments\n"
   "           -v     : verbose mode, output sent to standard error\n"
   "           -oFILE : write output to FILE instead of standard output\n"
   "           -dNAME : indicate DLL file name, 'freetype.dll' by default\n"
   "           -w     : output .DEF file for Visual C++ and Mingw\n"
   "           -wB    : output .DEF file for Borland C++\n"
   "           -wW    : output Watcom Linker Response File\n"
   "           -wN    : output NetWare Import File\n"
   "           -wL    : output version map for GNU or Solaris linker\n"
   "\n";

  FUNC_1( VAR_2,
           VAR_3,
           VAR_0,
           VAR_1,
           VAR_0
           );
  FUNC_0(1);
}
