
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curltime {int dummy; } ;
struct connectdata {int connection_id; int * sock; struct Curl_easy* data; TYPE_1__* handler; } ;
struct Curl_easy {int dummy; } ;
struct TYPE_2__ {unsigned int (* connection_check ) (struct connectdata*,int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct Curl_easy*,struct connectdata*,int) ;
 struct curltime FUNC_2 () ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct Curl_easy*,struct connectdata*,struct curltime) ;
 int FUNC_5 (struct Curl_easy*,char*,int ) ;
 unsigned int FUNC_6 (struct connectdata*,int ) ;

__attribute__((used)) static bool FUNC_7(struct connectdata *VAR_5,
                            struct Curl_easy *VAR_6)
{
  if(!FUNC_0(VAR_5) && !VAR_5->data) {


    bool VAR_7;
    struct curltime VAR_8 = FUNC_2();
    if(FUNC_4(VAR_6, VAR_5, VAR_8)) {
      VAR_7 = VAR_4;
    }
    else if(VAR_5->handler->connection_check) {


      unsigned int VAR_9;
      struct Curl_easy *VAR_10 = VAR_5->data;
      VAR_5->data = VAR_6;
      VAR_9 = VAR_5->handler->connection_check(VAR_5, VAR_0);
      VAR_5->data = VAR_10;
      VAR_7 = (VAR_9 & VAR_1);
    }
    else {

      VAR_7 = FUNC_3(VAR_5->sock[VAR_3]);
    }

    if(VAR_7) {
      FUNC_5(VAR_6, "Connection %ld seems to be dead!\n", VAR_5->connection_id);
      FUNC_1(VAR_6, VAR_5, VAR_2);
      return VAR_4;
    }
  }
  return VAR_2;
}
