
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousevsc_dev {int init_complete; int wait_event; struct hv_device* device; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hv_device*,struct mousevsc_dev*) ;
 int FUNC_1 (int *) ;
 struct mousevsc_dev* FUNC_2 (int,int ) ;

__attribute__((used)) static struct mousevsc_dev *FUNC_3(struct hv_device *VAR_1)
{
 struct mousevsc_dev *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct mousevsc_dev), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->device = VAR_1;
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(&VAR_2->wait_event);
 VAR_2->init_complete = 0;

 return VAR_2;
}
