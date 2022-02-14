
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {void* ulnow; void* ultotal; void* dlnow; void* dltotal; } ;
typedef void* curl_off_t ;



int FUNC_0(void *VAR_0,
                curl_off_t VAR_1,
                curl_off_t VAR_2,
                curl_off_t VAR_3,
                curl_off_t VAR_4)
{
  struct per_transfer *VAR_5 = VAR_0;
  VAR_5->dltotal = VAR_1;
  VAR_5->dlnow = VAR_2;
  VAR_5->ultotal = VAR_3;
  VAR_5->ulnow = VAR_4;
  return 0;
}
