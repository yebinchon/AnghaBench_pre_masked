
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_data {int remaining_bytes; scalar_t__ paused; scalar_t__ response_received; int * easy_handle; } ;
typedef int CURL ;



__attribute__((used)) static void FUNC_0(struct cb_data *VAR_0, CURL *VAR_1)
{
  VAR_0->easy_handle = VAR_1;
  VAR_0->response_received = 0;
  VAR_0->paused = 0;
  VAR_0->remaining_bytes = 3;
}
