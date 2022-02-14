
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pty_chan {char* dev_name; int dev; int (* announce ) (char*,int ) ;scalar_t__ raw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int VAR_1, int VAR_2, void *VAR_3,
      char **VAR_4)
{
 struct pty_chan *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 char VAR_8[sizeof("/dev/ptyxx\0")] = "/dev/ptyxx";

 VAR_6 = FUNC_1(VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->raw) {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_6);
   return VAR_7;
  }
 }

 if (VAR_5->announce)
  (*VAR_5->announce)(VAR_8, VAR_5->dev);

 FUNC_3(VAR_5->dev_name, "%s", VAR_8);
 *VAR_4 = VAR_5->dev_name;

 return VAR_6;
}
