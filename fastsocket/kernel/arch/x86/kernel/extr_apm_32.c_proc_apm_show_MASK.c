
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int version; int flags; } ;
struct TYPE_4__ {int connection_version; TYPE_1__ bios; } ;


 int FUNC_0 (unsigned short*,unsigned short*,unsigned short*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char*,int ,int,int,int ,unsigned short,unsigned short,unsigned short,int,int,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 unsigned short VAR_4;
 unsigned short VAR_5;
 unsigned short VAR_6;
 int VAR_7;
 unsigned short VAR_8 = 0xff;
 unsigned short VAR_9 = 0xff;
 unsigned short VAR_10 = 0xff;
 int VAR_11 = -1;
 int VAR_12 = -1;
 char *VAR_13 = "?";

 if ((FUNC_1() == 1) &&
     !(VAR_7 = FUNC_0(&VAR_4, &VAR_5, &VAR_6))) {
  VAR_8 = (VAR_4 >> 8) & 0xff;
  VAR_9 = VAR_4 & 0xff;
  if ((VAR_5 & 0xff) != 0xff)
   VAR_11 = VAR_5 & 0xff;

  if (VAR_0.connection_version > 0x100) {
   VAR_10 = (VAR_5 >> 8) & 0xff;
   if (VAR_6 != 0xffff) {
    VAR_13 = (VAR_6 & 0x8000) ? "min" : "sec";
    VAR_12 = VAR_6 & 0x7fff;
   }
  }
 }
 FUNC_2(VAR_2, "%s %d.%d 0x%02x 0x%02x 0x%02x 0x%02x %d%% %d %s\n",
     VAR_1,
     (VAR_0.bios.version >> 8) & 0xff,
     VAR_0.bios.version & 0xff,
     VAR_0.bios.flags,
     VAR_8,
     VAR_9,
     VAR_10,
     VAR_11,
     VAR_12,
     VAR_13);
 return 0;
}
