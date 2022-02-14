
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_primary_config {int sessionid; int verifystatus; int verifyhost; int verifypeer; int version_max; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool
FUNC_1(struct ssl_primary_config *VAR_9,
                              struct ssl_primary_config *VAR_10)
{
  VAR_10->version = VAR_9->version;
  VAR_10->version_max = VAR_9->version_max;
  VAR_10->verifypeer = VAR_9->verifypeer;
  VAR_10->verifyhost = VAR_9->verifyhost;
  VAR_10->verifystatus = VAR_9->verifystatus;
  VAR_10->sessionid = VAR_9->sessionid;

  FUNC_0(VAR_1);
  FUNC_0(VAR_0);
  FUNC_0(VAR_5);
  FUNC_0(VAR_8);
  FUNC_0(VAR_6);
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
  FUNC_0(VAR_7);

  return VAR_2;
}
