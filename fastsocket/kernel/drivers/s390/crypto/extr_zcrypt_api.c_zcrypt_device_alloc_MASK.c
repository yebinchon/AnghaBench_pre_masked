
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; int message; } ;
struct zcrypt_device {int dbf_area; int list; int lock; TYPE_1__ reply; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zcrypt_device*) ;
 int FUNC_2 (size_t,int ) ;
 struct zcrypt_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

struct zcrypt_device *FUNC_5(size_t VAR_2)
{
 struct zcrypt_device *VAR_3;

 VAR_3 = FUNC_3(sizeof(struct zcrypt_device), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->reply.message = FUNC_2(VAR_2, VAR_0);
 if (!VAR_3->reply.message)
  goto out_free;
 VAR_3->reply.length = VAR_2;
 FUNC_4(&VAR_3->lock);
 FUNC_0(&VAR_3->list);
 VAR_3->dbf_area = VAR_1;
 return VAR_3;

out_free:
 FUNC_1(VAR_3);
 return ((void*)0);
}
