
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_error_handlers {int (* error_detected ) (struct pci_dev*,scalar_t__) ;} ;
struct TYPE_4__ {int sem; } ;
struct pci_dev {scalar_t__ error_state; int hdr_type; TYPE_2__ dev; TYPE_1__* driver; } ;
struct aer_broadcast_data {scalar_t__ state; int result; } ;
typedef int pci_ers_result_t ;
struct TYPE_3__ {struct pci_error_handlers* err_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct pci_dev*,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_5, void *VAR_6)
{
 pci_ers_result_t VAR_7;
 const struct pci_error_handlers *VAR_8;
 struct aer_broadcast_data *VAR_9;
 VAR_9 = (struct aer_broadcast_data *) VAR_6;

 FUNC_1(&VAR_5->dev.sem);
 VAR_5->error_state = VAR_9->state;

 if (!VAR_5->driver ||
  !VAR_5->driver->err_handler ||
  !VAR_5->driver->err_handler->error_detected) {
  if (VAR_9->state == VAR_4 &&
   !(VAR_5->hdr_type & VAR_3)) {







   FUNC_0(VAR_0, &VAR_5->dev, "device has %s\n",
       VAR_5->driver ?
       "no AER-aware driver" : "no driver");
  }
  if (!(VAR_5->hdr_type & VAR_3))
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_1;
 } else {
  VAR_8 = VAR_5->driver->err_handler;
  VAR_7 = VAR_8->error_detected(VAR_5, VAR_9->state);
 }

 VAR_9->result = FUNC_2(VAR_9->result, VAR_7);
 FUNC_4(&VAR_5->dev.sem);
 return 0;
}
