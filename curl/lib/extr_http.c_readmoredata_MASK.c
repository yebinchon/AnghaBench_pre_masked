
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {TYPE_3__* data; } ;
struct TYPE_8__ {scalar_t__ postsize; size_t postdata; int fread_in; int fread_func; } ;
struct HTTP {scalar_t__ postsize; scalar_t__ sending; size_t postdata; TYPE_4__ backup; } ;
typedef scalar_t__ curl_off_t ;
struct TYPE_6__ {int in; int fread_func; } ;
struct TYPE_5__ {int forbidchunk; struct HTTP* protop; } ;
struct TYPE_7__ {TYPE_2__ state; TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_3,
                           size_t VAR_4,
                           size_t VAR_5,
                           void *VAR_6)
{
  struct connectdata *VAR_7 = (struct connectdata *)VAR_6;
  struct HTTP *VAR_8 = VAR_7->data->req.protop;
  size_t VAR_9 = VAR_4 * VAR_5;

  if(!VAR_8->postsize)

    return 0;


  VAR_7->data->req.forbidchunk = (VAR_8->sending == VAR_1)?VAR_2:VAR_0;

  if(VAR_8->postsize <= (curl_off_t)VAR_9) {
    FUNC_0(VAR_3, VAR_8->postdata, (size_t)VAR_8->postsize);
    VAR_9 = (size_t)VAR_8->postsize;

    if(VAR_8->backup.postsize) {

      VAR_8->postdata = VAR_8->backup.postdata;
      VAR_8->postsize = VAR_8->backup.postsize;
      VAR_7->data->state.fread_func = VAR_8->backup.fread_func;
      VAR_7->data->state.in = VAR_8->backup.fread_in;

      VAR_8->sending++;

      VAR_8->backup.postsize = 0;
    }
    else
      VAR_8->postsize = 0;

    return VAR_9;
  }

  FUNC_0(VAR_3, VAR_8->postdata, VAR_9);
  VAR_8->postdata += VAR_9;
  VAR_8->postsize -= VAR_9;

  return VAR_9;
}
