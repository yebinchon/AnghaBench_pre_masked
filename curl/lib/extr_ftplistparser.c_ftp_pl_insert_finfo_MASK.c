
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_wc {struct ftp_parselist_data* parser; } ;
struct TYPE_5__ {int filename; int group; int perm; int symlink_target; int time; int user; } ;
struct ftp_parselist_data {int * file_data; TYPE_1__ offsets; } ;
struct TYPE_7__ {char* group; char* perm; char* target; char* time; char* user; } ;
struct curl_fileinfo {char* b_data; char* filename; scalar_t__ filetype; TYPE_3__ strings; } ;
struct fileinfo {int list; struct curl_fileinfo info; } ;
struct curl_llist {int tail; } ;
struct connectdata {TYPE_4__* data; } ;
struct WildcardData {int pattern; struct curl_llist filelist; struct ftp_wc* protdata; } ;
typedef scalar_t__ (* curl_fnmatch_callback ) (int ,int ,char*) ;
struct TYPE_6__ {scalar_t__ (* fnmatch ) (int ,int ,char*) ;int fnmatch_data; } ;
struct TYPE_8__ {TYPE_2__ set; struct WildcardData wildcard; } ;
typedef int CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fileinfo*) ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct curl_llist*,int ,struct curl_fileinfo*,int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_4,
                                    struct fileinfo *VAR_5)
{
  curl_fnmatch_callback VAR_6;
  struct WildcardData *VAR_7 = &VAR_4->data->wildcard;
  struct ftp_wc *VAR_8 = VAR_7->protdata;
  struct curl_llist *VAR_9 = &VAR_7->filelist;
  struct ftp_parselist_data *VAR_10 = VAR_8->parser;
  bool VAR_11 = VAR_3;
  struct curl_fileinfo *VAR_12 = &VAR_5->info;


  char *VAR_13 = VAR_12->b_data;
  VAR_12->filename = VAR_13 + VAR_10->offsets.filename;
  VAR_12->strings.group = VAR_10->offsets.group ?
                          VAR_13 + VAR_10->offsets.group : ((void*)0);
  VAR_12->strings.perm = VAR_10->offsets.perm ?
                          VAR_13 + VAR_10->offsets.perm : ((void*)0);
  VAR_12->strings.target = VAR_10->offsets.symlink_target ?
                          VAR_13 + VAR_10->offsets.symlink_target : ((void*)0);
  VAR_12->strings.time = VAR_13 + VAR_10->offsets.time;
  VAR_12->strings.user = VAR_10->offsets.user ?
                          VAR_13 + VAR_10->offsets.user : ((void*)0);


  VAR_6 = VAR_4->data->set.fnmatch;
  if(!VAR_6)
    VAR_6 = FUNC_1;


  FUNC_3(VAR_4->data, 1);
  if(VAR_6(VAR_4->data->set.fnmatch_data, VAR_7->pattern,
             VAR_12->filename) == 0) {

    if((VAR_12->filetype == VAR_1) && VAR_12->strings.target &&
       (FUNC_4(VAR_12->strings.target, " -> "))) {
      VAR_11 = VAR_2;
    }
  }
  else {
    VAR_11 = VAR_2;
  }
  FUNC_3(VAR_4->data, 0);

  if(VAR_11) {
    FUNC_2(VAR_9, VAR_9->tail, VAR_12, &VAR_5->list);
  }
  else {
    FUNC_0(VAR_5);
  }

  VAR_8->parser->file_data = ((void*)0);
  return VAR_0;
}
