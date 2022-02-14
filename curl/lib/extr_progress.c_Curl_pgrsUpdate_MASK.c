
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct curltime {int dummy; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_4__ {int flags; scalar_t__ uploaded; scalar_t__ size_ul; scalar_t__ downloaded; scalar_t__ size_dl; } ;
struct TYPE_3__ {int (* fxferinfo ) (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;int (* fprogress ) (int ,double,double,double,double) ;int progress_client; } ;
struct Curl_easy {TYPE_2__ progress; TYPE_1__ set; } ;


 struct curltime FUNC_0 () ;
 int FUNC_1 (struct Curl_easy*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (struct connectdata*,struct curltime) ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,double,double,double,double) ;

int FUNC_7(struct connectdata *VAR_1)
{
  struct Curl_easy *VAR_2 = VAR_1->data;
  struct curltime VAR_3 = FUNC_0();
  bool VAR_4 = FUNC_3(VAR_1, VAR_3);
  if(!(VAR_2->progress.flags & VAR_0)) {
    if(VAR_2->set.fxferinfo) {
      int VAR_5;

      FUNC_1(VAR_2, 1);
      VAR_5 = VAR_2->set.fxferinfo(VAR_2->set.progress_client,
                                   VAR_2->progress.size_dl,
                                   VAR_2->progress.downloaded,
                                   VAR_2->progress.size_ul,
                                   VAR_2->progress.uploaded);
      FUNC_1(VAR_2, 0);
      if(VAR_5)
        FUNC_2(VAR_2, "Callback aborted");
      return VAR_5;
    }
    if(VAR_2->set.fprogress) {
      int VAR_6;

      FUNC_1(VAR_2, 1);
      VAR_6 = VAR_2->set.fprogress(VAR_2->set.progress_client,
                                   (double)VAR_2->progress.size_dl,
                                   (double)VAR_2->progress.downloaded,
                                   (double)VAR_2->progress.size_ul,
                                   (double)VAR_2->progress.uploaded);
      FUNC_1(VAR_2, 0);
      if(VAR_6)
        FUNC_2(VAR_2, "Callback aborted");
      return VAR_6;
    }

    if(VAR_4)
      FUNC_4(VAR_1);
  }

  return 0;
}
