
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int ap; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {short value; int fixed; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
    struct iw_request_info *VAR_3, struct iw_param *VAR_4, char *VAR_5)
{
 struct zd1201 *VAR_6 = FUNC_0(VAR_2);
 short VAR_7;
 int VAR_8;

 if (!VAR_6->ap)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_4->value = VAR_7;
 VAR_4->fixed = 1;

 return 0;
}
