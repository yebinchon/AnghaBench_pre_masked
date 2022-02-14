
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcie_device {TYPE_1__* port; } ;
struct aer_err_source {int status; int id; } ;
struct aer_err_info {int multi_error_valid; int severity; int id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,struct aer_err_info*) ;
 int FUNC_3 (struct pcie_device*,struct aer_err_info*) ;
 int FUNC_4 (int ,int *,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct aer_err_info*) ;
 int FUNC_6 (struct aer_err_info*) ;
 struct aer_err_info* FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct pcie_device *VAR_10,
  struct aer_err_source *VAR_11)
{
 struct aer_err_info *VAR_12;


 VAR_12 = FUNC_7(sizeof(struct aer_err_info), VAR_3);
 if (!VAR_12) {
  FUNC_4(VAR_4, &VAR_10->port->dev,
   "Can't allocate mem when processing AER errors\n");
  return;
 }





 if (VAR_11->status & VAR_5) {
  VAR_12->id = FUNC_0(VAR_11->id);
  VAR_12->severity = VAR_0;

  if (VAR_11->status & VAR_7)
   VAR_12->multi_error_valid = 1;
  else
   VAR_12->multi_error_valid = 0;

  FUNC_2(VAR_10->port, VAR_12);

  if (FUNC_5(VAR_10->port, VAR_12))
   FUNC_3(VAR_10, VAR_12);
 }

 if (VAR_11->status & VAR_9) {
  VAR_12->id = FUNC_1(VAR_11->id);

  if (VAR_11->status & VAR_6)
   VAR_12->severity = VAR_1;
  else
   VAR_12->severity = VAR_2;

  if (VAR_11->status & VAR_8)
   VAR_12->multi_error_valid = 1;
  else
   VAR_12->multi_error_valid = 0;

  FUNC_2(VAR_10->port, VAR_12);

  if (FUNC_5(VAR_10->port, VAR_12))
   FUNC_3(VAR_10, VAR_12);
 }

 FUNC_6(VAR_12);
}
