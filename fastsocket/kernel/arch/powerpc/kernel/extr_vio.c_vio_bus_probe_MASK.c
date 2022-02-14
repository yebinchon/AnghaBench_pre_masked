
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver {int (* probe ) (struct vio_dev*,struct vio_device_id const*) ;int id_table; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {int cmo; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct vio_dev*,struct vio_device_id const*) ;
 struct vio_dev* FUNC_3 (struct device*) ;
 struct vio_driver* FUNC_4 (int ) ;
 int FUNC_5 (struct vio_dev*) ;
 int FUNC_6 (struct vio_dev*) ;
 struct vio_device_id* FUNC_7 (int ,struct vio_dev*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 struct vio_dev *VAR_3 = FUNC_3(VAR_2);
 struct vio_driver *VAR_4 = FUNC_4(VAR_2->driver);
 const struct vio_device_id *VAR_5;
 int VAR_6 = -VAR_0;

 if (!VAR_4->probe)
  return VAR_6;

 VAR_5 = FUNC_7(VAR_4->id_table, VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_3->cmo, 0, sizeof(VAR_3->cmo));
  if (FUNC_0(VAR_1)) {
   VAR_6 = FUNC_5(VAR_3);
   if (VAR_6)
    return VAR_6;
  }
  VAR_6 = VAR_4->probe(VAR_3, VAR_5);
  if (VAR_6 && FUNC_0(VAR_1))
   FUNC_6(VAR_3);
 }

 return VAR_6;
}
