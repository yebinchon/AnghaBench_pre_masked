
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; scalar_t__ index; } ;
struct inode {scalar_t__ i_size; int i_sb; int i_mtime; int i_atime; } ;
struct cifs_sb_info {int dummy; } ;
struct cifsFileInfo {int pid; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct cifsFileInfo*) ;
 int FUNC_4 (struct cifsFileInfo*,int ,char*,unsigned int,scalar_t__*) ;
 int FUNC_5 (int ) ;
 struct cifsFileInfo* FUNC_6 (int ,int) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 struct address_space *VAR_7 = VAR_4->mapping;
 loff_t VAR_8 = (loff_t)VAR_4->index << VAR_2;
 char *VAR_9;
 int VAR_10 = -VAR_0;
 int VAR_11 = 0;
 struct cifs_sb_info *VAR_12;
 struct inode *VAR_13;
 struct cifsFileInfo *VAR_14;

 if (!VAR_7 || !VAR_7->host)
  return -VAR_0;

 VAR_13 = VAR_4->mapping->host;
 VAR_12 = FUNC_1(VAR_13->i_sb);

 VAR_8 += (loff_t)VAR_5;
 VAR_9 = FUNC_7(VAR_4);
 VAR_9 += VAR_5;

 if ((VAR_6 > VAR_3) || (VAR_5 > VAR_6)) {
  FUNC_8(VAR_4);
  return -VAR_1;
 }


 if (VAR_8 > VAR_7->host->i_size) {
  FUNC_8(VAR_4);
  return 0;
 }


 if (VAR_7->host->i_size - VAR_8 < (loff_t)VAR_6)
  VAR_6 = (unsigned)(VAR_7->host->i_size - VAR_8);

 VAR_14 = FUNC_6(FUNC_0(VAR_7->host), 0);
 if (VAR_14) {
  VAR_11 = FUNC_4(VAR_14, VAR_14->pid,
        VAR_9, VAR_6 - VAR_5, &VAR_8);
  FUNC_3(VAR_14);

  VAR_13->i_atime = VAR_13->i_mtime = FUNC_5(VAR_13->i_sb);
  if ((VAR_11 > 0) && (VAR_8))
   VAR_10 = 0;
  else if (VAR_11 < 0)
   VAR_10 = VAR_11;
 } else {
  FUNC_2(1, "No writeable filehandles for inode");
  VAR_10 = -VAR_1;
 }

 FUNC_8(VAR_4);
 return VAR_10;
}
