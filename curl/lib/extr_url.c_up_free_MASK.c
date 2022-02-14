
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urlpieces {int query; int path; int options; int password; int user; int port; int hostname; int scheme; } ;
struct TYPE_2__ {int * uh; struct urlpieces up; } ;
struct Curl_easy {TYPE_1__ state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct Curl_easy *VAR_0)
{
  struct urlpieces *VAR_1 = &VAR_0->state.up;
  FUNC_0(VAR_1->scheme);
  FUNC_0(VAR_1->hostname);
  FUNC_0(VAR_1->port);
  FUNC_0(VAR_1->user);
  FUNC_0(VAR_1->password);
  FUNC_0(VAR_1->options);
  FUNC_0(VAR_1->path);
  FUNC_0(VAR_1->query);
  FUNC_1(VAR_0->state.uh);
  VAR_0->state.uh = ((void*)0);
}
