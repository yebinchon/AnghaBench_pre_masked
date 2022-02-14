
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ st_mtime; } ;
typedef TYPE_1__ struct_stat ;
typedef int curl_off_t ;
struct TYPE_6__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_2__ FILETIME ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,int ,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char const*,TYPE_1__*) ;
 char* FUNC_7 (scalar_t__) ;

curl_off_t FUNC_8(const char *VAR_9, FILE *VAR_10)
{
  curl_off_t VAR_11 = -1;
  struct_stat VAR_12;
  if(-1 != FUNC_6(VAR_9, &VAR_12)) {
    VAR_11 = (curl_off_t)VAR_12.st_mtime;
  }
  else if(VAR_8 != VAR_0) {
    FUNC_5(VAR_10,
            "Failed to get filetime: %s\n", FUNC_7(VAR_8));
  }

  return VAR_11;
}
