
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ index_cnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_0, u64 *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_0)->index_cnt == (u64)-1) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2) {
   VAR_2 = FUNC_2(VAR_0);
   if (VAR_2)
    return VAR_2;
  }
 }

 *VAR_1 = FUNC_0(VAR_0)->index_cnt;
 FUNC_0(VAR_0)->index_cnt++;

 return VAR_2;
}
