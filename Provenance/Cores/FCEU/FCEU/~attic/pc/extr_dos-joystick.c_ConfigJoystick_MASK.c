
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 static char *VAR_0="** Press button for ";

 FUNC_2("\n\n Joystick button configuration:\n\n");
 FUNC_2("   Push and release the button to map to the virtual joystick.\n");
 FUNC_2("   If you do not wish to assign a button, wait a few seconds\n");
 FUNC_2("   and the configuration will continue.\n\n");
 FUNC_2("   Press enter to continue...\n");
 FUNC_1();

 FUNC_2("%s\"Select\".\n",VAR_0);
 FUNC_0(2);

 FUNC_2("%s\"Start\".\n",VAR_0);
 FUNC_0(3);

 FUNC_2("%s\"B\".\n",VAR_0);
 FUNC_0(1);

 FUNC_2("%s\"A\".\n",VAR_0);
 FUNC_0(0);

 FUNC_2("%s\"Rapid fire B\".\n",VAR_0);
 FUNC_0(5);

 FUNC_2("%s\"Rapid fire A\".\n",VAR_0);
 FUNC_0(4);

}
