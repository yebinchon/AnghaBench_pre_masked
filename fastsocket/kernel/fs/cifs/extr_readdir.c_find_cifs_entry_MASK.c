
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct file {scalar_t__ f_pos; struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {scalar_t__ index_of_last_entry; int entries_in_buffer; char* ntwrk_buf_start; char* srch_entries_start; int info_level; int last_entry; int endOfSearch; scalar_t__ smallBuf; } ;
struct cifsFileInfo {int invalidHandle; TYPE_1__ srch_inf; int netfid; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int const,struct cifs_tcon*,int ) ;
 int FUNC_1 (int const,struct cifs_tcon*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,int,scalar_t__,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct cifsFileInfo*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct file*,char*) ;
 int FUNC_8 (int const,struct file*) ;
 scalar_t__ FUNC_9 (struct file*) ;
 char* FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (struct smb_hdr*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(const int VAR_2, struct cifs_tcon *VAR_3,
 struct file *VAR_4, char **VAR_5, int *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 loff_t VAR_9;
 loff_t VAR_10 = VAR_4->f_pos;
 struct cifsFileInfo *VAR_11 = VAR_4->private_data;


 if ((VAR_11 == ((void*)0)) || (VAR_5 == ((void*)0)) ||
    (VAR_6 == ((void*)0)))
  return -VAR_0;

 *VAR_5 = ((void*)0);
 VAR_9 =
  VAR_11->srch_inf.index_of_last_entry -
   VAR_11->srch_inf.entries_in_buffer;







 FUNC_7(VAR_4, "In fce ");
 if (((VAR_10 < VAR_11->srch_inf.index_of_last_entry) &&
      FUNC_9(VAR_4)) ||
    (VAR_10 < VAR_9)) {

  FUNC_3(1, "search backing up - close and restart search");
  FUNC_12(&VAR_1);
  if (!VAR_11->srch_inf.endOfSearch &&
      !VAR_11->invalidHandle) {
   VAR_11->invalidHandle = 1;
   FUNC_13(&VAR_1);
   FUNC_0(VAR_2, VAR_3, VAR_11->netfid);
  } else
   FUNC_13(&VAR_1);
  if (VAR_11->srch_inf.ntwrk_buf_start) {
   FUNC_3(1, "freeing SMB ff cache buf on search rewind");
   if (VAR_11->srch_inf.smallBuf)
    FUNC_6(VAR_11->srch_inf.
      ntwrk_buf_start);
   else
    FUNC_4(VAR_11->srch_inf.
      ntwrk_buf_start);
   VAR_11->srch_inf.ntwrk_buf_start = ((void*)0);
  }
  VAR_7 = FUNC_8(VAR_2, VAR_4);
  if (VAR_7) {
   FUNC_3(1, "error %d reinitiating a search on rewind",
     VAR_7);
   return VAR_7;
  }
  FUNC_5(VAR_11->srch_inf.last_entry, VAR_11);
 }

 while ((VAR_10 >= VAR_11->srch_inf.index_of_last_entry) &&
       (VAR_7 == 0) && !VAR_11->srch_inf.endOfSearch) {
  FUNC_3(1, "calling findnext2");
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_11->netfid,
      &VAR_11->srch_inf);
  FUNC_5(VAR_11->srch_inf.last_entry, VAR_11);
  if (VAR_7)
   return -VAR_0;
 }
 if (VAR_10 < VAR_11->srch_inf.index_of_last_entry) {


  int VAR_12;
  char *VAR_13;
  char *VAR_14 = VAR_11->srch_inf.ntwrk_buf_start +
   FUNC_11((struct smb_hdr *)
    VAR_11->srch_inf.ntwrk_buf_start);

  VAR_13 = VAR_11->srch_inf.srch_entries_start;
  VAR_9 = VAR_11->srch_inf.index_of_last_entry
     - VAR_11->srch_inf.entries_in_buffer;
  VAR_8 = VAR_10 - VAR_9;
  FUNC_3(1, "found entry - pos_in_buf %d", VAR_8);

  for (VAR_12 = 0; (VAR_12 < (VAR_8)) && (VAR_13 != ((void*)0)); VAR_12++) {

   VAR_13 = FUNC_10(VAR_13, VAR_14,
      VAR_11->srch_inf.info_level);
  }
  if ((VAR_13 == ((void*)0)) && (VAR_12 < VAR_8)) {

   FUNC_2(1, "reached end of buf searching for pos in buf"
     " %d index to find %lld rc %d",
     VAR_8, VAR_10, VAR_7);
  }
  VAR_7 = 0;
  *VAR_5 = VAR_13;
 } else {
  FUNC_3(1, "index not in buffer - could not findnext into it");
  return 0;
 }

 if (VAR_8 >= VAR_11->srch_inf.entries_in_buffer) {
  FUNC_3(1, "can not return entries pos_in_buf beyond last");
  *VAR_6 = 0;
 } else
  *VAR_6 = VAR_11->srch_inf.entries_in_buffer - VAR_8;

 return VAR_7;
}
