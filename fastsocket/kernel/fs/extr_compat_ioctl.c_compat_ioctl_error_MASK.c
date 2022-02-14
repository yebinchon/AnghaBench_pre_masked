
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_path; } ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int,unsigned int,char*,unsigned int,unsigned int,char*) ;
 TYPE_1__* VAR_6 ;
 char* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*,char*,char) ;

__attribute__((used)) static void FUNC_7(struct file *VAR_7, unsigned int VAR_8,
  unsigned int VAR_9, unsigned long VAR_10)
{
 char VAR_11[10];
 char *VAR_12 = "?";
 char *VAR_13;


 VAR_13 = (char *)FUNC_1(VAR_0);
 if (VAR_13) {
  VAR_12 = FUNC_3(&VAR_7->f_path, VAR_13, VAR_1);
  if (FUNC_0(VAR_12))
   VAR_12 = "?";
 }

  FUNC_6(VAR_11,"'%c'", (VAR_9>>VAR_5) & VAR_4);
 if (!FUNC_5(VAR_11[1]))
  FUNC_6(VAR_11, "%02x", VAR_11[1]);
 FUNC_2("ioctl32(%s:%d): Unknown cmd fd(%d) "
   "cmd(%08x){t:%s;sz:%u} arg(%08x) on %s\n",
   VAR_6->comm, VAR_6->pid,
   (int)VAR_8, (unsigned int)VAR_9, VAR_11,
   (VAR_9 >> VAR_3) & VAR_2,
   (unsigned int)VAR_10, VAR_12);

 if (VAR_13)
  FUNC_4((unsigned long)VAR_13);
}
