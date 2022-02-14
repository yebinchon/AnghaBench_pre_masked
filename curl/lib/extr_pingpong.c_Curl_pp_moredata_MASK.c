
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong {scalar_t__ nread_resp; scalar_t__ cache_size; scalar_t__ cache; int sendleft; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct pingpong *VAR_2)
{
  return (!VAR_2->sendleft && VAR_2->cache && VAR_2->nread_resp < VAR_2->cache_size) ?
         VAR_1 : VAR_0;
}
