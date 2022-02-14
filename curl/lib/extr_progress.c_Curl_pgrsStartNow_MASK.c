
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {int is_t_startransfer_set; int flags; int start; scalar_t__ uploaded; scalar_t__ downloaded; TYPE_2__ dl_limit_start; TYPE_1__ ul_limit_start; scalar_t__ speeder_c; } ;
struct Curl_easy {TYPE_3__ progress; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct Curl_easy *VAR_2)
{
  VAR_2->progress.speeder_c = 0;
  VAR_2->progress.start = FUNC_0();
  VAR_2->progress.is_t_startransfer_set = 0;
  VAR_2->progress.ul_limit_start.tv_sec = 0;
  VAR_2->progress.ul_limit_start.tv_usec = 0;
  VAR_2->progress.dl_limit_start.tv_sec = 0;
  VAR_2->progress.dl_limit_start.tv_usec = 0;
  VAR_2->progress.downloaded = 0;
  VAR_2->progress.uploaded = 0;

  VAR_2->progress.flags &= VAR_1|VAR_0;
  FUNC_1(VAR_2, VAR_2->progress.start);
}
