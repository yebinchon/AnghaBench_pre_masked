
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {struct nfs_direct_req* pg_dreq; } ;
struct nfs_direct_req {int inode; } ;
struct iovec {size_t iov_len; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int (* read_pageio_init ) (struct nfs_pageio_descriptor*,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_direct_req*) ;
 int FUNC_2 (struct nfs_direct_req*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct nfs_pageio_descriptor*,struct iovec const*,size_t) ;
 int FUNC_4 (struct nfs_direct_req*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;
 scalar_t__ FUNC_6 (struct nfs_direct_req*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct nfs_direct_req *VAR_3,
           const struct iovec *VAR_4,
           unsigned long VAR_5,
           loff_t VAR_6)
{
 struct nfs_pageio_descriptor VAR_7;
 ssize_t VAR_8 = -VAR_0;
 size_t VAR_9 = 0;
 unsigned long VAR_10;

 FUNC_0(VAR_3->inode)->read_pageio_init(&VAR_7, VAR_3->inode,
        &VAR_2);
 FUNC_1(VAR_3);
 VAR_7.pg_dreq = VAR_3;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  const struct iovec *VAR_11 = &VAR_4[VAR_10];
  VAR_8 = FUNC_3(&VAR_7, VAR_11, VAR_6);
  if (VAR_8 < 0)
   break;
  VAR_9 += VAR_8;
  if ((size_t)VAR_8 < VAR_11->iov_len)
   break;
  VAR_6 += VAR_11->iov_len;
 }

 FUNC_5(&VAR_7);





 if (VAR_9 == 0) {
  FUNC_4(VAR_3);
  return VAR_8 < 0 ? VAR_8 : -VAR_1;
 }
 if (FUNC_6(VAR_3))
  FUNC_2(VAR_3);
 return 0;
}
