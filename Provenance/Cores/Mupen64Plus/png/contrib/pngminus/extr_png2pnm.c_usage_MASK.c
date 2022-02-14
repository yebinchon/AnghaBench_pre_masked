
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1()
{
  FUNC_0 (VAR_0, "PNG2PNM\n");
  FUNC_0 (VAR_0, "   by Willem van Schaik, 1999\n");



  FUNC_0 (VAR_0, "   for Linux (and Unix) compilers\n");

  FUNC_0 (VAR_0, "Usage:  png2pnm [options] <file>.png [<file>.pnm]\n");
  FUNC_0 (VAR_0, "   or:  ... | png2pnm [options]\n");
  FUNC_0 (VAR_0, "Options:\n");
  FUNC_0 (VAR_0,
     "   -r[aw]   write pnm-file in binary format (P4/P5/P6) (default)\n");
  FUNC_0 (VAR_0, "   -n[oraw] write pnm-file in ascii format (P1/P2/P3)\n");
  FUNC_0 (VAR_0,
     "   -a[lpha] <file>.pgm write PNG alpha channel as pgm-file\n");
  FUNC_0 (VAR_0, "   -h | -?  print this help-information\n");
}
