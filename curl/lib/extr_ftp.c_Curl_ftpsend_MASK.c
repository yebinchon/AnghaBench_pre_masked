
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {int data_prot; TYPE_2__* data; int * sock; } ;
typedef scalar_t__ ssize_t ;
typedef int s ;
typedef enum protection_level { ____Placeholder_protection_level } protection_level ;
struct TYPE_4__ {scalar_t__ verbose; } ;
struct TYPE_5__ {TYPE_1__ set; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char*,size_t) ;
 int FUNC_1 (TYPE_2__*,int ,char*,size_t) ;
 scalar_t__ FUNC_2 (struct connectdata*,int ,char*,size_t,scalar_t__*) ;
 int FUNC_3 (int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char**,char const*,size_t) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char const*) ;

CURLcode FUNC_7(struct connectdata *VAR_8, const char *VAR_9)
{
  ssize_t VAR_10;

  char VAR_11[1024];
  size_t VAR_12;
  char *VAR_13 = VAR_11;
  CURLcode VAR_14 = VAR_1;




  if(!VAR_9)
    return VAR_0;

  VAR_12 = FUNC_6(VAR_9);
  if(!VAR_12 || VAR_12 > (sizeof(VAR_11) -3))
    return VAR_0;

  FUNC_4(&VAR_11, VAR_9, VAR_12);
  FUNC_5(&VAR_11[VAR_12], "\r\n");
  VAR_12 += 2;
  VAR_10 = 0;

  VAR_14 = FUNC_0(VAR_8->data, VAR_11, VAR_12);

  if(VAR_14)
    return VAR_14;

  for(;;) {



    VAR_14 = FUNC_2(VAR_8, VAR_8->sock[VAR_3], VAR_13, VAR_12,
                        &VAR_10);





    if(VAR_14)
      break;

    if(VAR_8->data->set.verbose)
      FUNC_1(VAR_8->data, VAR_2, VAR_13, (size_t)VAR_10);

    if(VAR_10 != (ssize_t)VAR_12) {
      VAR_12 -= VAR_10;
      VAR_13 += VAR_10;
    }
    else
      break;
  }

  return VAR_14;
}
