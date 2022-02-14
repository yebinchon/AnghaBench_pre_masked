
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iser_conn {struct iscsi_endpoint* ep; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct iscsi_endpoint* FUNC_0 (int) ;
 struct iscsi_endpoint* FUNC_1 (int) ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (struct iser_conn*,int *,struct sockaddr_in*,int) ;

__attribute__((used)) static struct iscsi_endpoint *
FUNC_4(struct Scsi_Host *VAR_1, struct sockaddr *VAR_2,
        int VAR_3)
{
 int VAR_4;
 struct iser_conn *VAR_5;
 struct iscsi_endpoint *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_5));
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = VAR_6->dd_data;
 VAR_5->ep = VAR_6;
 FUNC_2(VAR_5);

 VAR_4 = FUNC_3(VAR_5, ((void*)0), (struct sockaddr_in *)VAR_2,
      VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 return VAR_6;
}
