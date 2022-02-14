
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_family; } ;
struct net_device {int dummy; } ;
struct dst_entry {int dev; } ;
struct cnic_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct cnic_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sockaddr_in*,struct dst_entry**) ;
 int FUNC_2 (struct sockaddr_in6*,struct dst_entry**) ;
 int FUNC_3 (int ,struct net_device**) ;
 int FUNC_4 (struct cnic_dev*) ;
 int FUNC_5 (struct dst_entry*) ;

__attribute__((used)) static struct cnic_dev *FUNC_6(struct sockaddr_in *VAR_3,
        int VAR_4)
{
 struct cnic_dev *VAR_5 = ((void*)0);
 struct dst_entry *VAR_6;
 struct net_device *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_2;

 if (VAR_3->sin_family == VAR_0)
  VAR_8 = FUNC_1(VAR_3, &VAR_6);
 else if (VAR_3->sin_family == VAR_1) {
  struct sockaddr_in6 *VAR_9 =
   (struct sockaddr_in6 *) VAR_3;

  VAR_8 = FUNC_2(VAR_9, &VAR_6);
 } else
  return ((void*)0);

 if (VAR_8)
  return ((void*)0);

 if (!VAR_6->dev)
  goto done;

 FUNC_3(VAR_6->dev, &VAR_7);

 VAR_5 = FUNC_0(VAR_7);

done:
 FUNC_5(VAR_6);
 if (VAR_5)
  FUNC_4(VAR_5);
 return VAR_5;
}
