
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {struct nfs_direct_req* pg_dreq; } ;
struct nfs_direct_req {struct inode* inode; } ;
struct iovec {size_t iov_len; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int (* write_pageio_init ) (struct nfs_pageio_descriptor*,struct inode*,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_direct_req*) ;
 int FUNC_2 (struct nfs_direct_req*) ;
 int FUNC_3 (struct nfs_direct_req*,struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct nfs_pageio_descriptor*,struct iovec const*,size_t) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;
 scalar_t__ FUNC_6 (struct nfs_direct_req*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,struct inode*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct nfs_direct_req *VAR_3,
            const struct iovec *VAR_4,
            unsigned long VAR_5,
            loff_t VAR_6)
{
 struct nfs_pageio_descriptor VAR_7;
 struct inode *VAR_8 = VAR_3->inode;
 ssize_t VAR_9 = 0;
 size_t VAR_10 = 0;
 unsigned long VAR_11;

 FUNC_0(VAR_8)->write_pageio_init(&VAR_7, VAR_8, VAR_1,
         &VAR_2);
 VAR_7.pg_dreq = VAR_3;
 FUNC_1(VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  const struct iovec *VAR_12 = &VAR_4[VAR_11];
  VAR_9 = FUNC_4(&VAR_7, VAR_12, VAR_6);
  if (VAR_9 < 0)
   break;
  VAR_10 += VAR_9;
  if ((size_t)VAR_9 < VAR_12->iov_len)
   break;
  VAR_6 += VAR_12->iov_len;
 }
 FUNC_5(&VAR_7);





 if (VAR_10 == 0) {
  FUNC_2(VAR_3);
  return VAR_9 < 0 ? VAR_9 : -VAR_0;
 }

 if (FUNC_6(VAR_3))
  FUNC_3(VAR_3, VAR_3->inode);
 return 0;
}
