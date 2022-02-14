
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2() {
  char VAR_1[10] = "        ";
  FUNC_1("taos shell is used to test the TDEngine database\n");

  FUNC_1("%s%s\n", VAR_1, "-h");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "TDEngine server IP address to connect. The default host is localhost.");
  FUNC_1("%s%s\n", VAR_1, "-p");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "The password to use when connecting to the server.");
  FUNC_1("%s%s\n", VAR_1, "-P");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "The TCP/IP port number to use for the connection");
  FUNC_1("%s%s\n", VAR_1, "-u");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "The TDEngine user name to use when connecting to the server.");
  FUNC_1("%s%s\n", VAR_1, "-c");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Configuration directory.");
  FUNC_1("%s%s\n", VAR_1, "-s");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Commands to run without enter the shell.");
  FUNC_1("%s%s\n", VAR_1, "-r");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Output time as unsigned long..");
  FUNC_1("%s%s\n", VAR_1, "-f");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Script to run without enter the shell.");
  FUNC_1("%s%s\n", VAR_1, "-d");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Database to use when connecting to the server.");
  FUNC_1("%s%s\n", VAR_1, "-t");
  FUNC_1("%s%s%s\n", VAR_1, VAR_1, "Time zone of the shell, default is local.");

  FUNC_0(VAR_0);
}
