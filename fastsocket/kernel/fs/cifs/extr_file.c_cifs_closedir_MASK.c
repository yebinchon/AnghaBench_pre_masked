
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {char* ntwrk_buf_start; scalar_t__ smallBuf; int endOfSearch; } ;
struct cifsFileInfo {int invalidHandle; int tlink; TYPE_1__ srch_inf; int netfid; } ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct cifsFileInfo*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct cifs_tcon* FUNC_10 (int ) ;

int FUNC_11(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct cifsFileInfo *VAR_5 = VAR_2->private_data;
 char *VAR_6;

 FUNC_3(1, "Closedir inode = 0x%p", VAR_1);

 VAR_4 = FUNC_2();

 if (VAR_5) {
  struct cifs_tcon *VAR_7 = FUNC_10(VAR_5->tlink);

  FUNC_3(1, "Freeing private data in close dir");
  FUNC_8(&VAR_0);
  if (!VAR_5->srch_inf.endOfSearch &&
      !VAR_5->invalidHandle) {
   VAR_5->invalidHandle = 1;
   FUNC_9(&VAR_0);
   VAR_3 = FUNC_0(VAR_4, VAR_7, VAR_5->netfid);
   FUNC_3(1, "Closing uncompleted readdir with rc %d",
     VAR_3);

   VAR_3 = 0;
  } else
   FUNC_9(&VAR_0);
  VAR_6 = VAR_5->srch_inf.ntwrk_buf_start;
  if (VAR_6) {
   FUNC_3(1, "closedir free smb buf in srch struct");
   VAR_5->srch_inf.ntwrk_buf_start = ((void*)0);
   if (VAR_5->srch_inf.smallBuf)
    FUNC_6(VAR_6);
   else
    FUNC_4(VAR_6);
  }
  FUNC_5(VAR_5->tlink);
  FUNC_7(VAR_2->private_data);
  VAR_2->private_data = ((void*)0);
 }

 FUNC_1(VAR_4);
 return VAR_3;
}
