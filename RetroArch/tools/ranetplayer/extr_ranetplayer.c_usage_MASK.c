
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1()
{
   FUNC_0(VAR_0,
      "Use: ranetplayer [options] [ranp file]\n"
      "Options:\n"
      "    -H|--host <address>:  Netplay host. Defaults to localhost.\n"
      "    -P|--port <port>:     Netplay port. Defaults to 55435.\n"
      "    -p|--play <file>:     Play back a recording over netplay.\n"
      "    -r|--record <file>:   Record netplay to a file.\n"
      "    -a|--ahead <frames>:  Number of frames by which to play ahead of the\n"
      "                          server. Tests rewind if negative, catch-up if\n"
      "                          positive.\n"
      "\n");
}
