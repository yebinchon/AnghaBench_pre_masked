
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int features; } ;
typedef TYPE_1__ curl_version_info_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(void)
{
  curl_version_info_data *VAR_5;

  FUNC_1(VAR_1);

  VAR_5 = FUNC_2(VAR_0);
  if(VAR_5->features & VAR_3)
    FUNC_3("HTTP/2 support is present\n");

  if(VAR_5->features & VAR_4)
    FUNC_3("HTTP/3 support is present\n");

  if(VAR_5->features & VAR_2)
    FUNC_3("Alt-svc support is present\n");

  FUNC_0();
  return 0;
}
