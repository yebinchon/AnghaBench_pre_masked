
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int lock; struct socket* tcp_socket; } ;
struct stub_device {TYPE_1__ ud; } ;
struct socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct stub_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 struct socket* FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,char*,int*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_5, struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct stub_device *VAR_9 = FUNC_1(VAR_5);
 int VAR_10 = 0;
 struct socket *VAR_11;

 if (!VAR_9) {
  FUNC_0(VAR_5, "sdev is null\n");
  return -VAR_1;
 }

 FUNC_9(VAR_7, "%d", &VAR_10);

 if (VAR_10 != -1) {
  FUNC_2(VAR_5, "stub up\n");

  FUNC_7(&VAR_9->ud.lock);

  if (VAR_9->ud.status != VAR_3) {
   FUNC_0(VAR_5, "not ready\n");
   FUNC_8(&VAR_9->ud.lock);
   return -VAR_0;
  }

  VAR_11 = FUNC_6(VAR_10);
  if (!VAR_11) {
   FUNC_8(&VAR_9->ud.lock);
   return -VAR_0;
  }







  VAR_9->ud.tcp_socket = VAR_11;

  FUNC_8(&VAR_9->ud.lock);

  FUNC_11(&VAR_9->ud);

  FUNC_7(&VAR_9->ud.lock);
  VAR_9->ud.status = VAR_4;
  FUNC_8(&VAR_9->ud.lock);

 } else {
  FUNC_2(VAR_5, "stub down\n");

  FUNC_7(&VAR_9->ud.lock);
  if (VAR_9->ud.status != VAR_4) {
   FUNC_8(&VAR_9->ud.lock);
   return -VAR_0;
  }
  FUNC_8(&VAR_9->ud.lock);

  FUNC_10(&VAR_9->ud, VAR_2);
 }

 return VAR_8;
}
