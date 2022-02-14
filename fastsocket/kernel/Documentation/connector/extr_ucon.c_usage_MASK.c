
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0(
  "Usage: ucon [options] [output file]\n"
  "\n"
  "\t-h\tthis help screen\n"
  "\t-s\tsend buffers to the test module\n"
  "\n"
  "The default behavior of ucon is to subscribe to the test module\n"
  "and wait for state messages.  Any ones received are dumped to the\n"
  "specified output file (or stdout).  The test module is assumed to\n"
  "have an id of {%u.%u}\n"
  "\n"
  "If you get no output, then verify the cn_test module id matches\n"
  "the expected id above.\n"
  , VAR_0, VAR_1
 );
}
