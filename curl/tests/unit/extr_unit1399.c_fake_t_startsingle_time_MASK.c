
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct curltime {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {TYPE_1__ t_startsingle; } ;
struct Curl_easy {TYPE_2__ progress; } ;


 int FUNC_0 (struct Curl_easy*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct Curl_easy *VAR_1,
                                    struct curltime VAR_2,
                                    int VAR_3)
{
  FUNC_0(VAR_1, VAR_0);
  VAR_1->progress.t_startsingle.tv_sec = VAR_2.tv_sec + VAR_3;
  VAR_1->progress.t_startsingle.tv_usec = VAR_2.tv_usec;
}
