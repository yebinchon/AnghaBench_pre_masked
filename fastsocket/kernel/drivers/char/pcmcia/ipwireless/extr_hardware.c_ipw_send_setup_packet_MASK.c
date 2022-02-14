
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_setup_get_version_qry {int dummy; } ;
struct TYPE_2__ {int length; } ;
struct ipw_setup_get_version_query_packet {TYPE_1__ header; } ;
struct ipw_hardware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipw_setup_get_version_query_packet* FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (struct ipw_hardware*,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ipw_hardware *VAR_4)
{
 struct ipw_setup_get_version_query_packet *VAR_5;

 VAR_5 = FUNC_0(
   sizeof(struct ipw_setup_get_version_query_packet),
   VAR_0, VAR_2,
   VAR_3);
 VAR_5->header.length = sizeof(struct tl_setup_get_version_qry);




 FUNC_1(VAR_4, VAR_1, &VAR_5->header);
}
