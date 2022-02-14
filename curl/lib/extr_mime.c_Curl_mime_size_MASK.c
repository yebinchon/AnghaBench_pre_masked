
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_6__ {scalar_t__ kind; scalar_t__ datasize; int flags; int userheaders; int curlheaders; TYPE_1__* encoder; int arg; } ;
typedef TYPE_2__ curl_mimepart ;
struct TYPE_5__ {scalar_t__ (* sizefunc ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

curl_off_t FUNC_3(curl_mimepart *VAR_2)
{
  curl_off_t VAR_3;

  if(VAR_2->kind == VAR_0)
    VAR_2->datasize = FUNC_0(VAR_2->arg);

  VAR_3 = VAR_2->datasize;

  if(VAR_2->encoder)
    VAR_3 = VAR_2->encoder->sizefunc(VAR_2);

  if(VAR_3 >= 0 && !(VAR_2->flags & VAR_1)) {

    VAR_3 += FUNC_1(VAR_2->curlheaders, 2, ((void*)0));
    VAR_3 += FUNC_1(VAR_2->userheaders, 2, "Content-Type");
    VAR_3 += 2;
  }
  return VAR_3;
}
