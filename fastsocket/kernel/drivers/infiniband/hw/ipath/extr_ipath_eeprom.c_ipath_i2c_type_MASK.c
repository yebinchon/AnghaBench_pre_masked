
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_i2c_chain_type; } ;
struct i2c_chain_desc {scalar_t__ probe_dev; } ;


 int FUNC_0 (struct i2c_chain_desc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ipath_devdata*) ;
 struct i2c_chain_desc* VAR_1 ;
 int FUNC_2 (struct ipath_devdata*,scalar_t__) ;

__attribute__((used)) static struct i2c_chain_desc *FUNC_3(struct ipath_devdata *VAR_2)
{
 int VAR_3;


 VAR_3 = VAR_2->ipath_i2c_chain_type - 1;
 if (VAR_3 >= 0 && VAR_3 < (FUNC_0(VAR_1) - 1))
  goto done;

 VAR_3 = 0;
 while (VAR_1[VAR_3].probe_dev != VAR_0) {

  if (!FUNC_2(VAR_2, VAR_1[VAR_3].probe_dev))
   break;
  ++VAR_3;
 }





 if (VAR_3 == 0)
  FUNC_1(VAR_2);

 if (VAR_1[VAR_3].probe_dev == VAR_0)
  VAR_3 = -1;
 else
  VAR_2->ipath_i2c_chain_type = VAR_3 + 1;
done:
 return (VAR_3 >= 0) ? VAR_1 + VAR_3 : ((void*)0);
}
