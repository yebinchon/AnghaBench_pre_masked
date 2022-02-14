
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {char** dirs; int count3; char* entrypath; int cwdcount; int pp; scalar_t__ dirdepth; scalar_t__ count2; scalar_t__ cwddone; } ;
struct TYPE_8__ {struct ftp_conn ftpc; } ;
struct TYPE_7__ {scalar_t__ reuse; } ;
struct connectdata {TYPE_4__ proto; TYPE_3__ bits; TYPE_2__* data; } ;
struct TYPE_5__ {scalar_t__ ftp_filemethod; int ftp_create_missing_dirs; } ;
struct TYPE_6__ {TYPE_1__ set; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct ftp_conn *VAR_5 = &VAR_3->proto.ftpc;

  if(VAR_5->cwddone)

    VAR_4 = FUNC_2(VAR_3);
  else {

    FUNC_0((VAR_3->data->set.ftp_filemethod != VAR_1) ||
                !(VAR_5->dirdepth && VAR_5->dirs[0][0] == '/'));

    VAR_5->count2 = 0;




    VAR_5->count3 = (VAR_3->data->set.ftp_create_missing_dirs == 2)?1:0;

    if(VAR_3->bits.reuse && VAR_5->entrypath &&

       !(VAR_5->dirdepth && VAR_5->dirs[0][0] == '/')) {



      VAR_5->cwdcount = 0;

      FUNC_1(&VAR_3->proto.ftpc.pp, "CWD %s", VAR_5->entrypath);
      FUNC_3(VAR_3, VAR_2);
    }
    else {
      if(VAR_5->dirdepth) {
        VAR_5->cwdcount = 1;


        FUNC_1(&VAR_3->proto.ftpc.pp, "CWD %s", VAR_5->dirs[VAR_5->cwdcount -1]);
        FUNC_3(VAR_3, VAR_2);
      }
      else {

        VAR_4 = FUNC_2(VAR_3);
      }
    }
  }
  return VAR_4;
}
