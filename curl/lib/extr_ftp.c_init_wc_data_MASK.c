
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct connectdata* file_descriptor; int write_function; } ;
struct ftp_wc {int parser; TYPE_2__ backup; } ;
struct connectdata {TYPE_4__* data; } ;
struct WildcardData {struct ftp_wc* protdata; int dtor; void* pattern; void* path; void* state; } ;
struct FTP {char* path; } ;
struct TYPE_7__ {scalar_t__ ftp_filemethod; struct connectdata* out; int fwrite_func; } ;
struct TYPE_5__ {struct FTP* protop; } ;
struct TYPE_8__ {TYPE_3__ set; struct WildcardData wildcard; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ftp_wc* FUNC_3 (int,int) ;
 int FUNC_4 (struct ftp_wc*) ;
 scalar_t__ FUNC_5 (struct connectdata*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 void* FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;
 int VAR_7 ;

__attribute__((used)) static CURLcode FUNC_9(struct connectdata *VAR_8)
{
  char *VAR_9;
  struct FTP *VAR_10 = VAR_8->data->req.protop;
  char *VAR_11 = VAR_10->path;
  struct WildcardData *VAR_12 = &(VAR_8->data->wildcard);
  CURLcode VAR_13 = VAR_0;
  struct ftp_wc *VAR_14 = ((void*)0);

  VAR_9 = FUNC_8(VAR_10->path, '/');
  if(VAR_9) {
    VAR_9++;
    if(VAR_9[0] == '\0') {
      VAR_12->state = VAR_2;
      VAR_13 = FUNC_5(VAR_8);
      return VAR_13;
    }
    VAR_12->pattern = FUNC_7(VAR_9);
    if(!VAR_12->pattern)
      return VAR_1;
    VAR_9[0] = '\0';
  }
  else {
    if(VAR_11[0]) {
      VAR_12->pattern = FUNC_7(VAR_11);
      if(!VAR_12->pattern)
        return VAR_1;
      VAR_11[0] = '\0';
    }
    else {
      VAR_12->state = VAR_2;
      VAR_13 = FUNC_5(VAR_8);
      return VAR_13;
    }
  }





  VAR_14 = FUNC_3(1, sizeof(struct ftp_wc));
  if(!VAR_14) {
    VAR_13 = VAR_1;
    goto fail;
  }


  VAR_14->parser = FUNC_0();
  if(!VAR_14->parser) {
    VAR_13 = VAR_1;
    goto fail;
  }

  VAR_12->protdata = VAR_14;
  VAR_12->dtor = VAR_7;


  if(VAR_8->data->set.ftp_filemethod == VAR_5)
    VAR_8->data->set.ftp_filemethod = VAR_4;


  VAR_13 = FUNC_5(VAR_8);
  if(VAR_13) {
    goto fail;
  }

  VAR_12->path = FUNC_7(VAR_10->path);
  if(!VAR_12->path) {
    VAR_13 = VAR_1;
    goto fail;
  }


  VAR_14->backup.write_function = VAR_8->data->set.fwrite_func;

  VAR_8->data->set.fwrite_func = VAR_3;

  VAR_14->backup.file_descriptor = VAR_8->data->set.out;

  VAR_8->data->set.out = VAR_8;

  FUNC_6(VAR_8->data, "Wildcard - Parsing started\n");
  return VAR_0;

  fail:
  if(VAR_14) {
    FUNC_1(&VAR_14->parser);
    FUNC_4(VAR_14);
  }
  FUNC_2(VAR_12->pattern);
  VAR_12->dtor = VAR_6;
  VAR_12->protdata = ((void*)0);
  return VAR_13;
}
