
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sdtp_name; int sdtp_id; int sdtp_attr; } ;
typedef TYPE_1__ sdt_provider_t ;
typedef int sdt_probe_t ;
typedef int dev_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,int *,TYPE_1__*,int *) ;
 int FUNC_5 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static int
FUNC_6(dev_info_t *VAR_15)
{
 sdt_provider_t *VAR_16;

 if (FUNC_1(VAR_15, "sdt", VAR_8,
     0, VAR_3, 0) == VAR_2) {
  FUNC_0(VAR_0, "/dev/sdt couldn't create minor node");
  FUNC_2(VAR_15, ((void*)0));
  return (VAR_2);
 }

 if (VAR_13 == 0)
  VAR_13 = VAR_7;

 VAR_12 = VAR_13 - 1;
 VAR_11 =
     FUNC_5(VAR_13 * sizeof (sdt_probe_t *), VAR_6);
 FUNC_3(VAR_9);

 for (VAR_16 = VAR_14; VAR_16->sdtp_name != ((void*)0); VAR_16++) {
  if (FUNC_4(VAR_16->sdtp_name, VAR_16->sdtp_attr,
      VAR_5, ((void*)0),
      &VAR_10, VAR_16, &VAR_16->sdtp_id) != 0) {
   FUNC_0(VAR_1, "failed to register sdt provider %s",
       VAR_16->sdtp_name);
  }
 }

 return (VAR_4);
}
