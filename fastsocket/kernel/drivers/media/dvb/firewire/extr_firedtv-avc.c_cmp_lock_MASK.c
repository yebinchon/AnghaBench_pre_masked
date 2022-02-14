
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct firedtv {int avc_mutex; int * avc_data; int device; TYPE_1__* backend; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* lock ) (struct firedtv*,int ,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct firedtv*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct firedtv *VAR_0, u64 VAR_1, __be32 VAR_2[])
{
 int VAR_3;

 FUNC_2(&VAR_0->avc_mutex);


 FUNC_1(VAR_0->avc_data, VAR_2, 8);

 VAR_3 = VAR_0->backend->lock(VAR_0, VAR_1, VAR_0->avc_data);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->device, "CMP: lock I/O error\n");
 else
  FUNC_1(VAR_2, VAR_0->avc_data, 8);

 FUNC_3(&VAR_0->avc_mutex);

 return VAR_3;
}
