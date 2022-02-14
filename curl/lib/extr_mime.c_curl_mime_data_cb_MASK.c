
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int curl_seek_callback ;
typedef scalar_t__ curl_read_callback ;
typedef int curl_off_t ;
struct TYPE_4__ {int kind; int datasize; void* arg; int freefunc; int seekfunc; scalar_t__ readfunc; } ;
typedef TYPE_1__ curl_mimepart ;
typedef int curl_free_callback ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

CURLcode FUNC_1(curl_mimepart *VAR_3, curl_off_t VAR_4,
                           curl_read_callback VAR_5,
                           curl_seek_callback VAR_6,
                           curl_free_callback VAR_7, void *VAR_8)
{
  if(!VAR_3)
    return VAR_0;

  FUNC_0(VAR_3);

  if(VAR_5) {
    VAR_3->readfunc = VAR_5;
    VAR_3->seekfunc = VAR_6;
    VAR_3->freefunc = VAR_7;
    VAR_3->arg = VAR_8;
    VAR_3->datasize = VAR_4;
    VAR_3->kind = VAR_2;
  }

  return VAR_1;
}
