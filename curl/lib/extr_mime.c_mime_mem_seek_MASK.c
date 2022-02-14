
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_3__ {size_t offset; } ;
struct TYPE_4__ {scalar_t__ datasize; TYPE_1__ state; } ;
typedef TYPE_2__ curl_mimepart ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(void *VAR_2, curl_off_t VAR_3, int VAR_4)
{
  curl_mimepart *VAR_5 = (curl_mimepart *) VAR_2;

  switch(VAR_4) {
  case 129:
    VAR_3 += VAR_5->state.offset;
    break;
  case 128:
    VAR_3 += VAR_5->datasize;
    break;
  }

  if(VAR_3 < 0 || VAR_3 > VAR_5->datasize)
    return VAR_0;

  VAR_5->state.offset = (size_t) VAR_3;
  return VAR_1;
}
