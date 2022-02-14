
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sdtp_id; int * sdtp_name; } ;
typedef TYPE_1__ sdt_provider_t ;
typedef int sdt_probe_t ;
typedef int dev_info_t ;
typedef int ddi_detach_cmd_t ;



 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int
FUNC_3(dev_info_t *VAR_7, ddi_detach_cmd_t VAR_8)
{
 sdt_provider_t *VAR_9;

 switch (VAR_8) {
 case 129:
  break;

 case 128:
  return (VAR_1);

 default:
  return (VAR_0);
 }

 for (VAR_9 = VAR_6; VAR_9->sdtp_name != ((void*)0); VAR_9++) {
  if (VAR_9->sdtp_id != VAR_2) {
   if (FUNC_1(VAR_9->sdtp_id) != 0)
    return (VAR_0);

   VAR_9->sdtp_id = VAR_2;
  }
 }

 FUNC_0(VAR_3);
 FUNC_2(VAR_4, VAR_5 * sizeof (sdt_probe_t *));

 return (VAR_1);
}
