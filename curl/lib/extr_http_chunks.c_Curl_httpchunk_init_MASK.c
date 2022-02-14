
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_chunker {int state; scalar_t__ dataleft; scalar_t__ hexindex; } ;
struct connectdata {struct Curl_chunker chunk; } ;


 int VAR_0 ;

void FUNC_0(struct connectdata *VAR_1)
{
  struct Curl_chunker *VAR_2 = &VAR_1->chunk;
  VAR_2->hexindex = 0;
  VAR_2->dataleft = 0;
  VAR_2->state = VAR_0;
}
