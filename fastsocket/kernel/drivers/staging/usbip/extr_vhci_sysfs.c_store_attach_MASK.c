
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int lock; struct socket* tcp_socket; } ;
struct vhci_device {TYPE_1__ ud; void* speed; void* devid; } ;
struct socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef void* __u32 ;
struct TYPE_4__ {int lock; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vhci_device* FUNC_0 (void*) ;
 int FUNC_1 (void*,void*) ;
 struct socket* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,void**,int*,void**,void**) ;
 TYPE_2__* VAR_3 ;
 int FUNC_6 (char*,void*,int,void*,void*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,void*) ;
 int FUNC_9 (char*,void*,int,void*,void*) ;
 scalar_t__ FUNC_10 (void*,void*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct vhci_device *VAR_8;
 struct socket *VAR_9;
 int VAR_10 = 0;
 __u32 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;







 FUNC_5(VAR_6, "%u %u %u %u", &VAR_11, &VAR_10, &VAR_12, &VAR_13);

 FUNC_6("rhport(%u) sockfd(%u) devid(%u) speed(%u)\n",
    VAR_11, VAR_10, VAR_12, VAR_13);



 if (FUNC_10(VAR_11, VAR_13) < 0)
  return -VAR_0;


 VAR_9 = FUNC_2(VAR_10);
 if (!VAR_9)
  return -VAR_0;




 FUNC_3(&VAR_3->lock);

 VAR_8 = FUNC_0(VAR_11);

 FUNC_3(&VAR_8->ud.lock);

 if (VAR_8->ud.status != VAR_2) {

  FUNC_4(&VAR_8->ud.lock);
  FUNC_4(&VAR_3->lock);

  FUNC_8("port %d already used\n", VAR_11);
  return -VAR_0;
 }

 FUNC_9("rhport(%u) sockfd(%d) devid(%u) speed(%u)\n",
    VAR_11, VAR_10, VAR_12, VAR_13);

 VAR_8->devid = VAR_12;
 VAR_8->speed = VAR_13;
 VAR_8->ud.tcp_socket = VAR_9;
 VAR_8->ud.status = VAR_1;

 FUNC_4(&VAR_8->ud.lock);
 FUNC_4(&VAR_3->lock);






 FUNC_7(&VAR_8->ud);

 FUNC_1(VAR_11, VAR_13);

 return VAR_7;
}
