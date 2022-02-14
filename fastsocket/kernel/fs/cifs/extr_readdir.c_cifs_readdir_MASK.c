
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_11__ {TYPE_4__* dentry; } ;
struct file {int f_pos; struct cifsFileInfo* private_data; TYPE_5__ f_path; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_12__ {char* ntwrk_buf_start; int index_of_last_entry; int info_level; int emptyDir; int endOfSearch; } ;
struct cifsFileInfo {TYPE_6__ srch_inf; int tlink; } ;
typedef int (* filldir_t ) (void*,char*,int,int,int ,int ) ;
struct TYPE_10__ {TYPE_3__* d_parent; TYPE_1__* d_inode; int d_sb; } ;
struct TYPE_9__ {TYPE_2__* d_inode; } ;
struct TYPE_8__ {int i_ino; } ;
struct TYPE_7__ {int i_ino; } ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,struct file*,int (*) (void*,char*,int,int,int ,int ),void*,char*,unsigned int) ;
 int FUNC_6 (char*,struct cifsFileInfo*) ;
 int FUNC_7 (int,struct cifs_tcon*,struct file*,char**,int*) ;
 int FUNC_8 (int,struct file*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ,int ) ;
 char* FUNC_11 (char*,char*,int ) ;
 unsigned int FUNC_12 (struct smb_hdr*) ;
 struct cifs_tcon* FUNC_13 (int ) ;

int FUNC_14(struct file *VAR_6, void *VAR_7, filldir_t VAR_8)
{
 int VAR_9 = 0;
 int VAR_10, VAR_11;
 struct cifs_sb_info *VAR_12;
 struct cifs_tcon *VAR_13;
 struct cifsFileInfo *VAR_14 = ((void*)0);
 char *VAR_15;
 int VAR_16 = 0;
 char *VAR_17 = ((void*)0);
 char *VAR_18;
 unsigned int VAR_19;

 VAR_10 = FUNC_2();

 VAR_12 = FUNC_0(VAR_6->f_path.dentry->d_sb);





 if (VAR_6->private_data == ((void*)0)) {
  VAR_9 = FUNC_8(VAR_10, VAR_6);
  FUNC_4(1, "initiate cifs search rc %d", VAR_9);
  if (VAR_9)
   goto rddir2_exit;
 }

 switch ((int) VAR_6->f_pos) {
 case 0:
  if (VAR_8(VAR_7, ".", 1, VAR_6->f_pos,
       VAR_6->f_path.dentry->d_inode->i_ino, VAR_0) < 0) {
   FUNC_3(1, "Filldir for current dir failed");
   VAR_9 = -VAR_2;
   break;
  }
  VAR_6->f_pos++;
 case 1:
  if (VAR_8(VAR_7, "..", 2, VAR_6->f_pos,
       VAR_6->f_path.dentry->d_parent->d_inode->i_ino, VAR_0) < 0) {
   FUNC_3(1, "Filldir for parent dir failed");
   VAR_9 = -VAR_2;
   break;
  }
  VAR_6->f_pos++;
 default:





  if (VAR_6->private_data == ((void*)0)) {
   VAR_9 = -VAR_1;
   FUNC_1(VAR_10);
   return VAR_9;
  }
  VAR_14 = VAR_6->private_data;
  if (VAR_14->srch_inf.endOfSearch) {
   if (VAR_14->srch_inf.emptyDir) {
    FUNC_4(1, "End of search, empty dir");
    VAR_9 = 0;
    break;
   }
  }




  VAR_13 = FUNC_13(VAR_14->tlink);
  VAR_9 = FUNC_7(VAR_10, VAR_13, VAR_6,
    &VAR_15, &VAR_16);
  if (VAR_9) {
   FUNC_4(1, "fce error %d", VAR_9);
   goto rddir2_exit;
  } else if (VAR_15 != ((void*)0)) {
   FUNC_4(1, "entry %lld found", VAR_6->f_pos);
  } else {
   FUNC_4(1, "could not find entry");
   goto rddir2_exit;
  }
  FUNC_4(1, "loop through %d times filling dir for net buf %p",
   VAR_16, VAR_14->srch_inf.ntwrk_buf_start);
  VAR_19 = FUNC_12((struct smb_hdr *)
    VAR_14->srch_inf.ntwrk_buf_start);
  VAR_18 = VAR_14->srch_inf.ntwrk_buf_start + VAR_19;

  VAR_17 = FUNC_10(VAR_5, VAR_4);
  if (VAR_17 == ((void*)0)) {
   VAR_9 = -VAR_2;
   break;
  }

  for (VAR_11 = 0; (VAR_11 < VAR_16) && (VAR_9 == 0); VAR_11++) {
   if (VAR_15 == ((void*)0)) {

    FUNC_3(1, "past SMB end,  num to fill %d i %d",
       VAR_16, VAR_11);
    break;
   }


   VAR_9 = FUNC_5(VAR_15, VAR_6,
     VAR_8, VAR_7, VAR_17, VAR_19);
   if (VAR_9 == -VAR_3) {
    VAR_9 = 0;
    break;
   }

   VAR_6->f_pos++;
   if (VAR_6->f_pos ==
    VAR_14->srch_inf.index_of_last_entry) {
    FUNC_4(1, "last entry in buf at pos %lld %s",
     VAR_6->f_pos, VAR_17);
    FUNC_6(VAR_15, VAR_14);
    break;
   } else
    VAR_15 =
     FUNC_11(VAR_15, VAR_18,
      VAR_14->srch_inf.info_level);
  }
  FUNC_9(VAR_17);
  break;
 }

rddir2_exit:
 FUNC_1(VAR_10);
 return VAR_9;
}
