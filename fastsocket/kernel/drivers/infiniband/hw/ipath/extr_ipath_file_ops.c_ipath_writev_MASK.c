
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {struct file* ki_filp; } ;
struct ipath_user_sdma_queue {int dummy; } ;
struct ipath_portdata {int port_dd; } ;
struct ipath_filedata {struct ipath_user_sdma_queue* pq; } ;
struct iovec {int dummy; } ;
struct file {struct ipath_filedata* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ipath_user_sdma_queue*,struct iovec const*,unsigned long) ;
 struct ipath_portdata* FUNC_1 (struct file*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_1, const struct iovec *VAR_2,
       unsigned long VAR_3, loff_t VAR_4)
{
 struct file *VAR_5 = VAR_1->ki_filp;
 struct ipath_filedata *VAR_6 = VAR_5->private_data;
 struct ipath_portdata *VAR_7 = FUNC_1(VAR_5);
 struct ipath_user_sdma_queue *VAR_8 = VAR_6->pq;

 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_7->port_dd, VAR_8, VAR_2, VAR_3);
}
