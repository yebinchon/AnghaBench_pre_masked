
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int essidlen; int essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct zd1201* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct zd1201*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
    struct iw_request_info *VAR_3, struct iw_point *VAR_4, char *VAR_5)
{
 struct zd1201 *VAR_6 = FUNC_2(VAR_2);

 if (VAR_4->length > VAR_1)
  return -VAR_0;
 if (VAR_4->length < 1)
  VAR_4->length = 1;
 VAR_6->essidlen = VAR_4->length;
 FUNC_1(VAR_6->essid, 0, VAR_1+1);
 FUNC_0(VAR_6->essid, VAR_5, VAR_4->length);
 return FUNC_3(VAR_6, VAR_6->essid, VAR_6->essidlen);
}
