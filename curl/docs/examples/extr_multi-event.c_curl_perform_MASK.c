
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sockfd; } ;
typedef TYPE_1__ curl_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static void FUNC_2(int VAR_5, short VAR_6, void *VAR_7)
{
  int VAR_8;
  int VAR_9 = 0;
  curl_context_t *VAR_10;

  if(VAR_6 & VAR_2)
    VAR_9 |= VAR_0;
  if(VAR_6 & VAR_3)
    VAR_9 |= VAR_1;

  VAR_10 = (curl_context_t *) VAR_7;

  FUNC_1(VAR_4, VAR_10->sockfd, VAR_9,
                           &VAR_8);

  FUNC_0();
}
