
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct hci_dev {int flags; int name; struct btsdio_data* driver_data; } ;
struct btsdio_data {TYPE_1__* func; } ;
struct TYPE_7__ {scalar_t__ class; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_5)
{
 struct btsdio_data *VAR_6 = VAR_5->driver_data;
 int VAR_7;

 FUNC_0("%s", VAR_5->name);

 if (FUNC_8(VAR_0, &VAR_5->flags))
  return 0;

 FUNC_2(VAR_6->func);

 VAR_7 = FUNC_5(VAR_6->func);
 if (VAR_7 < 0) {
  FUNC_1(VAR_0, &VAR_5->flags);
  goto release;
 }

 VAR_7 = FUNC_3(VAR_6->func, VAR_4);
 if (VAR_7 < 0) {
  FUNC_4(VAR_6->func);
  FUNC_1(VAR_0, &VAR_5->flags);
  goto release;
 }

 if (VAR_6->func->class == VAR_3)
  FUNC_7(VAR_6->func, 0x00, VAR_2, ((void*)0));

 FUNC_7(VAR_6->func, 0x01, VAR_1, ((void*)0));

release:
 FUNC_6(VAR_6->func);

 return VAR_7;
}
