
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_t {int status; scalar_t__ error; } ;



bool FUNC_0(struct http_t *VAR_0)
{
   return (VAR_0->error || VAR_0->status<200 || VAR_0->status>299);
}
