
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct auth {int dummy; } ;
struct UserDefined {int dummy; } ;
struct Progress {int dummy; } ;
struct TYPE_4__ {long buffer_size; int flags; } ;
struct TYPE_3__ {int current_speed; char* buffer; TYPE_2__ authproxy; TYPE_2__ authhost; } ;
struct Curl_easy {TYPE_1__ state; TYPE_2__ set; TYPE_2__ progress; } ;


 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (struct Curl_easy*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 char* FUNC_8 (char*,int) ;
 int VAR_1 ;

void FUNC_9(struct Curl_easy *VAR_2)
{
  long VAR_3 = VAR_2->set.buffer_size;

  FUNC_0(VAR_2);


  FUNC_1(VAR_2);
  FUNC_7(&VAR_2->set, 0, sizeof(struct UserDefined));
  (void)FUNC_3(VAR_2);


  FUNC_7(&VAR_2->progress, 0, sizeof(struct Progress));


  FUNC_4(VAR_2);

  VAR_2->progress.flags |= VAR_0;
  VAR_2->state.current_speed = -1;


  FUNC_7(&VAR_2->state.authhost, 0, sizeof(struct auth));
  FUNC_7(&VAR_2->state.authproxy, 0, sizeof(struct auth));


  FUNC_2(VAR_2);



  if(VAR_3 != VAR_2->set.buffer_size) {
    char *VAR_4 = FUNC_8(VAR_2->state.buffer, VAR_2->set.buffer_size + 1);
    if(!VAR_4) {
      FUNC_5(FUNC_6(VAR_1, "Error: realloc of buffer failed\n"));

      VAR_2->set.buffer_size = VAR_3;
    }
    else
      VAR_2->state.buffer = VAR_4;
  }
}
