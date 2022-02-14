
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * file_descriptor; int write_function; } ;
struct ftp_wc {int parser; TYPE_1__ backup; } ;
struct ftp_conn {int known_filesize; } ;
struct curl_fileinfo {int flags; int size; int filetype; int filename; } ;
struct TYPE_10__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_5__* data; TYPE_2__ proto; } ;
struct TYPE_14__ {scalar_t__ size; TYPE_8__* head; } ;
struct WildcardData {int state; struct ftp_wc* protdata; int (* dtor ) (struct ftp_wc*) ;TYPE_7__ filelist; int customptr; int path; } ;
struct FTP {char* pathalloc; char* path; } ;
struct TYPE_15__ {struct curl_fileinfo* ptr; } ;
struct TYPE_12__ {long (* chunk_bgn ) (struct curl_fileinfo*,int ,int) ;int (* chunk_end ) (int ) ;int * out; int fwrite_func; } ;
struct TYPE_11__ {struct FTP* protop; } ;
struct TYPE_13__ {struct WildcardData wildcard; TYPE_4__ set; TYPE_3__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_8__*,int *) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int VAR_6 ;
 char* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct connectdata*) ;
 int FUNC_6 (TYPE_5__*,char*,int ) ;
 int FUNC_7 (struct connectdata*) ;
 long FUNC_8 (struct curl_fileinfo*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ftp_wc*) ;

__attribute__((used)) static CURLcode FUNC_11(struct connectdata *VAR_7)
{
  struct WildcardData * const VAR_8 = &(VAR_7->data->wildcard);
  CURLcode VAR_9 = VAR_1;

  switch(VAR_8->state) {
  case 132:
    VAR_9 = FUNC_7(VAR_7);
    if(VAR_8->state == 137)

      break;
    VAR_8->state = VAR_9 ? 133 : 131;
    break;

  case 131: {


    struct ftp_wc *VAR_10 = VAR_8->protdata;
    VAR_7->data->set.fwrite_func = VAR_10->backup.write_function;
    VAR_7->data->set.out = VAR_10->backup.file_descriptor;
    VAR_10->backup.write_function = VAR_6;
    VAR_10->backup.file_descriptor = ((void*)0);
    VAR_8->state = 134;

    if(FUNC_0(VAR_10->parser)) {

      VAR_8->state = 137;
      return FUNC_11(VAR_7);
    }
    if(VAR_8->filelist.size == 0) {

      VAR_8->state = 137;
      return VAR_3;
    }
    return FUNC_11(VAR_7);
  }

  case 134: {

    struct ftp_conn *VAR_11 = &VAR_7->proto.ftpc;
    struct curl_fileinfo *VAR_12 = VAR_8->filelist.head->ptr;
    struct FTP *VAR_13 = VAR_7->data->req.protop;

    char *VAR_14 = FUNC_3("%s%s", VAR_8->path, VAR_12->filename);
    if(!VAR_14)
      return VAR_2;


    FUNC_4(VAR_13->pathalloc);
    VAR_13->pathalloc = VAR_13->path = VAR_14;

    FUNC_6(VAR_7->data, "Wildcard - START of \"%s\"\n", VAR_12->filename);
    if(VAR_7->data->set.chunk_bgn) {
      long VAR_15;
      FUNC_2(VAR_7->data, 1);
      VAR_15 = VAR_7->data->set.chunk_bgn(
        VAR_12, VAR_8->customptr, (int)VAR_8->filelist.size);
      FUNC_2(VAR_7->data, 0);
      switch(VAR_15) {
      case 128:
        FUNC_6(VAR_7->data, "Wildcard - \"%s\" skipped by user\n",
              VAR_12->filename);
        VAR_8->state = 130;
        return FUNC_11(VAR_7);
      case 129:
        return VAR_0;
      }
    }

    if(VAR_12->filetype != VAR_4) {
      VAR_8->state = 130;
      return FUNC_11(VAR_7);
    }

    if(VAR_12->flags & VAR_5)
      VAR_11->known_filesize = VAR_12->size;

    VAR_9 = FUNC_5(VAR_7);
    if(VAR_9)
      return VAR_9;


    FUNC_1(&VAR_8->filelist, VAR_8->filelist.head, ((void*)0));

    if(VAR_8->filelist.size == 0) {
      VAR_8->state = 137;


      return VAR_1;
    }
  } break;

  case 130: {
    if(VAR_7->data->set.chunk_end) {
      FUNC_2(VAR_7->data, 1);
      VAR_7->data->set.chunk_end(VAR_7->data->wildcard.customptr);
      FUNC_2(VAR_7->data, 0);
    }
    FUNC_1(&VAR_8->filelist, VAR_8->filelist.head, ((void*)0));
    VAR_8->state = (VAR_8->filelist.size == 0) ?
                      137 : 134;
    return FUNC_11(VAR_7);
  }

  case 137: {
    struct ftp_wc *VAR_16 = VAR_8->protdata;
    VAR_9 = VAR_1;
    if(VAR_16)
      VAR_9 = FUNC_0(VAR_16->parser);

    VAR_8->state = VAR_9 ? 133 : 135;
  } break;

  case 135:
  case 133:
  case 136:
    if(VAR_8->dtor)
      VAR_8->dtor(VAR_8->protdata);
    break;
  }

  return VAR_9;
}
